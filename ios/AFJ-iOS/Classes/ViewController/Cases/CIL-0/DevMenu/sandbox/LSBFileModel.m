//
//  LSBFileModel.m
//  LZZSandboxViewer
//
//  Created by zizheng lu on 2021/10/28.
//

#import "LSBFileModel.h"
#import <MobileCoreServices/MobileCoreServices.h>
#import "LSBHelper.h"

static const UInt8 IMAGES_TYPES_COUNT = 8;
static const UInt8 TEXT_TYPES_COUNT = 2;
static const UInt8 VIOCEVIDIO_COUNT = 14;
static const UInt8 Application_count = 4;
static const UInt8 AV_COUNT = 14;
static const UInt8 DOC_TYPES_COUNT = 4;
static const UInt8 XLS_TYPES_COUNT = 4;
static const UInt8 PPT_TYPES_COUNT = 2;
static const UInt8 PDF_TYPES_COUNT = 2;

static const NSString *IMAGES_TYPES[IMAGES_TYPES_COUNT] = {@"png", @"PNG", @"jpg", @",JPG", @"jpeg", @"JPEG", @"gif", @"GIF"};
static const NSString *TEXT_TYPES[TEXT_TYPES_COUNT] = {@"txt", @"TXT"};
static const NSString *VIOCEVIDIO_TYPES[VIOCEVIDIO_COUNT] = {@"mp3", @"MP3", @"wav", @"WAV", @"CD", @"cd", @"ogg", @"OGG", @"midi", @"MIDE", @"vqf", @"VQF", @"amr", @"AMR"};
static const NSString *AV_TYPES[AV_COUNT] = {@"asf", @"ASF", @"wma", @"WMA", @"rm", @"RM", @"rmvb", @"RMVB", @"avi", @"AVI", @"mkv", @"MKV", @"mp4", @"MP4"};
static const NSString *Application_types[Application_count] = {@"apk", @"APK", @"ipa", @"IPA"};
static const NSString *DOC_TYPES[DOC_TYPES_COUNT] = {@"doc", @"DOC", @"docx", @"DOCX"};
static const NSString *XLS_TYPES[XLS_TYPES_COUNT] = {@"xls", @"XLS", @"xlsx", @"XLSX"};
static const NSString *PPT_TYPES[PPT_TYPES_COUNT] = {@"ppt", @"PPT"};
static const NSString *PDF_TYPES[PDF_TYPES_COUNT] = {@"pdf", @"PDF"};


@implementation LSBFileDes
static NSArray *kJson = nil;

+ (LSBFileDes *)searchDesWithKeyword:(NSString *)keyword {
    if (!keyword) {
        return nil;
    }
    if (!kJson) {
        NSString *filePath = [[LSBHelper getResourceBundle] pathForResource:@"FileIconMap" ofType:@"plist"];
        kJson = [[NSArray alloc] initWithContentsOfFile:filePath];
    }
    LSBFileDes *des = nil;
    NSString *key = [keyword lowercaseString];
    for (NSDictionary *item in kJson) {
        NSArray *suffixs = [item objectForKey:@"suffix"];
        for (NSString *s in suffixs) {
            if ([s containsString:key] || [key containsString:s]) {
                des = [LSBFileDes new];
                des.iconName = item[@"iconName"];
                des.suffixs = item[@"suffix"];
                des.fileTypeName = item[@"typeName"];
                break;
            }
        }
    }
    return des;

}

+ (LSBFileDes *)documentDes {
    LSBFileDes *des = [LSBFileDes new];
    des.iconName = @"box_notes";
    des.fileTypeName = @"??????";
    return des;
}

+ (LSBFileDes *)binaryDes {
    LSBFileDes *des = [LSBFileDes new];
    des.iconName = @"binary";
    des.fileTypeName = @"???????????????";
    return des;
}

- (instancetype)init {
    if (self = [super init]) {
        self.iconName = @"unknown";
        self.fileTypeName = @"????????????";
    }
    return self;
}

@end


@implementation LSBFileModel {
    NSFileManager *fileMgr;
}
- (instancetype)init {
    if (self = [super init]) {
        fileMgr = [NSFileManager defaultManager];
    }
    return self;
}

- (instancetype)initWithFilePath:(NSString *)filePath {
    if (self = [self init]) {
        self.filePath = filePath;
    }
    return self;
}


- (void)setFilePath:(NSString *)filePath {
    _filePath = filePath;
    self.name = [filePath lastPathComponent];
    self.fileType = LSBFileTypeUnknown; // ????????????????????????

    BOOL isDirectory = true;
    [fileMgr fileExistsAtPath:filePath isDirectory:&isDirectory];
    if (isDirectory) { // ???????????????,??????????????????????????????
        self.fileType = LSBFileTypeDirectory;
    } else {
        self.fileType = [self judgeType:[filePath pathExtension]];  // ????????????
    }

    self.mimeType = [self getMIMETypeWithCAPIAtFilePath:filePath];

    NSError *error = nil;
    NSDictionary *fileAttributes = [fileMgr attributesOfItemAtPath:filePath error:&error];
    if (fileAttributes != nil) {

        self.attributes = fileAttributes;

        // ?????????????????????????????????
        NSDate *fileModDate = [fileAttributes objectForKey:NSFileModificationDate];
        if (fileModDate) { // ????????????
            //???????????????NSDate??????
            NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
            //???????????????zzz????????????
            [dateFormatter setDateFormat:@"MM-dd HH:mm:ss"];
            //NSDate???NSString
            self.modTime = [dateFormatter stringFromDate:fileModDate];
        }

        NSDate *fileCreateDate = [fileAttributes objectForKey:NSFileCreationDate];
        if (fileCreateDate) { // ????????????
            NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
            //???????????????zzz????????????
            [dateFormatter setDateFormat:@"MM-dd HH:mm:ss"];
            //NSDate???NSString
            self.creatTime = [dateFormatter stringFromDate:fileCreateDate];
        }

        // ????????????
        self.fileSizefloat = [self calculateSize];

        self.fileCount = [fileMgr contentsOfDirectoryAtPath:self.filePath error:NULL].count;

        // file des
        if (self.fileType != LSBFileTypeDirectory) {
            LSBFileDes *des = [LSBFileDes searchDesWithKeyword:[self.filePath pathExtension]];
            if (!des) {
                des = [LSBFileDes searchDesWithKeyword:self.mimeType];
            }

            if (!des) {
                NSData *d = [[NSData alloc] initWithContentsOfFile:self.filePath];
                if (d) {
                    NSError *error = nil;
                    id obj = [NSJSONSerialization JSONObjectWithData:d options:NSJSONReadingMutableContainers error:&error];
                    if (obj && !error) {
                        des = [LSBFileDes documentDes];
                    } else {
                        des = [LSBFileDes binaryDes];
                    }
                } else {
                    des = [LSBFileDes binaryDes];
                }

            }

            if (!des) {
                des = [LSBFileDes new];
            }
            self.fileDes = des;
        }


        // ???????????????
        if (self.fileSizefloat) {
            NSNumber *fileSize = [NSNumber numberWithUnsignedLongLong:self.fileSizefloat];
            NSString *sizestr = [NSString stringWithFormat:@"%qi", [fileSize unsignedLongLongValue]];
            if (sizestr.length <= 3) {
                self.fileSize = [NSString stringWithFormat:@"%.1f B", self.fileSizefloat];
            } else if (sizestr.length > 3 && sizestr.length < 7) {
                self.fileSize = [NSString stringWithFormat:@"%.1f KB", self.fileSizefloat / 1000.0];
            } else {
                self.fileSize = [NSString stringWithFormat:@"%.1f M", self.fileSizefloat / (1000.0 * 1000)];
            }
        } else {
            self.fileSize = @"0 B";
        }
    }
}


#pragma mark - ??????

// ????????????
- (float)calculateSize {
    if (self.fileType != LSBFileTypeDirectory) { // ??????
        NSNumber *fileSize = [self.attributes objectForKey:NSFileSize];
        return [fileSize unsignedLongLongValue];
    } else { // ?????????
        //?????????????????????????????????
        NSArray *subpaths = [fileMgr subpathsAtPath:_filePath];
        //?????????????????????
        float totalByteSize = 0;
        for (NSString *subpath in subpaths) {
            //???????????????
            NSString *fullSubPath = [_filePath stringByAppendingPathComponent:subpath];
            //?????????????????????
            BOOL dir = NO;
            [fileMgr fileExistsAtPath:fullSubPath isDirectory:&dir];
            if (dir == NO) {//?????????
                NSDictionary *attr = [fileMgr attributesOfItemAtPath:fullSubPath error:nil];
                totalByteSize += [attr[NSFileSize] integerValue];
            }
        }
        return totalByteSize;
    }
}

// ????????????????????????
- (LSBFileType)judgeType:(NSString *)pathExtension {
    NSArray *imageTypesArray = [NSArray arrayWithObjects:IMAGES_TYPES count:IMAGES_TYPES_COUNT];
    if ([imageTypesArray containsObject:pathExtension]) {
        return LSBFileTypeImage;
    }

    NSArray *textTypesArray = [NSArray arrayWithObjects:TEXT_TYPES count:TEXT_TYPES_COUNT];
    if ([textTypesArray containsObject:pathExtension]) {
        return LSBFileTypeTxt;
    }

    NSArray *viceViodeArray = [NSArray arrayWithObjects:VIOCEVIDIO_TYPES count:VIOCEVIDIO_COUNT];
    if ([viceViodeArray containsObject:pathExtension]) {
        return LSBFileTypeVoice;
    }

    NSArray *appViodeArray = [NSArray arrayWithObjects:Application_types count:Application_count];
    if ([appViodeArray containsObject:pathExtension]) {
        return LSBFileTypeApplication;
    }

    NSArray *AVArray = [NSArray arrayWithObjects:AV_TYPES count:AV_COUNT];
    if ([AVArray containsObject:pathExtension]) {
        return LSBFileTypeAudioVidio;
    }

    NSArray *DOCArray = [NSArray arrayWithObjects:DOC_TYPES count:DOC_TYPES_COUNT];
    if ([DOCArray containsObject:pathExtension]) {
        return LSBFileTypeWord;
    }

    NSArray *XLSArray = [NSArray arrayWithObjects:XLS_TYPES count:XLS_TYPES_COUNT];
    if ([XLSArray containsObject:pathExtension]) {
        return LSBFileTypeXLS;
    }

    NSArray *PDFArray = [NSArray arrayWithObjects:PDF_TYPES count:PDF_TYPES_COUNT];
    if ([PDFArray containsObject:pathExtension]) {
        return LSBFileTypePDF;
    }

    NSArray *PPTArray = [NSArray arrayWithObjects:PPT_TYPES count:PPT_TYPES_COUNT];
    if ([PPTArray containsObject:pathExtension]) {
        return LSBFileTypePPT;
    }

    return LSBFileTypeUnknown;
}


- (NSString *)fileTypeName {
    NSString *name = nil;
    switch (self.fileType) {
        case LSBFileTypeAll:
            name = @"??????";
            break;
        case LSBFileTypePDF:
            name = @"PDF";
            break;
        case LSBFileTypePPT:
            name = @"PPT";
            break;
        case LSBFileTypeTxt:
            name = @"????????????";
            break;
        case LSBFileTypeXLS:
            name = @"????????????";
            break;
        case LSBFileTypeWord:
            name = @"WORD??????";
            break;
        case LSBFileTypeImage:
            name = @"??????";
            break;
        case LSBFileTypeVoice:
            name = @"??????";
            break;
        case LSBFileTypeUnknown:
            name = @"????????????";
            break;
        case LSBFileTypeDirectory:
            name = @"?????????";
            break;
        case LSBFileTypeApplication:
            name = @"????????????";
            break;
        case LSBFileTypeAudioVidio:
            name = @"??????";
            break;
        default:
            name = @"????????????";
            break;
    }
    return name;
}


//??????C?????????API??????????????????MIMEType ?????????????????????????????????????????????????????????????????????
- (NSString *)getMIMETypeWithCAPIAtFilePath:(NSString *)path {
    if (![[[NSFileManager alloc] init] fileExistsAtPath:path]) {
        return nil;
    }

    CFStringRef UTI = UTTypeCreatePreferredIdentifierForTag(kUTTagClassFilenameExtension, (__bridge CFStringRef) [path pathExtension], NULL);
    CFStringRef MIMEType = UTTypeCopyPreferredTagWithClass(UTI, kUTTagClassMIMEType);
    CFRelease(UTI);
    if (!MIMEType) {
        return @"application/octet-stream";
    }
    return (__bridge NSString *) (MIMEType);
}

@end
