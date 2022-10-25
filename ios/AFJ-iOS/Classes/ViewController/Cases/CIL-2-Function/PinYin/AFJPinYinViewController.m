//
//  AFJPinYinViewController.m
//  AFJ-iOS
//
//  Created by viktyz on 2022/9/24.
//

#import "AFJPinYinViewController.h"
#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>
#import "AFJCaseItemData.h"
#import "PinYin4Objc.h"

@interface AFJPinYinViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJPinYinViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    NSMutableArray *dataArray = [NSMutableArray array];

    __weak typeof(self) weakSelf = self;
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"汉字转拼音(异步)";
        item.cType = @"";
        item.didSelectAction = ^(id data) {
            [weakSelf showInputAlert:@"输入待转换汉字" placeholder:@"你好世界" complete:^(NSString *_Nonnull info) {
                NSString *sourceText = info;
                HanyuPinyinOutputFormat *outputFormat = [[HanyuPinyinOutputFormat alloc] init];
                [outputFormat setToneType:ToneTypeWithoutTone];
                [outputFormat setVCharType:VCharTypeWithV];
                [outputFormat setCaseType:CaseTypeLowercase];
                [PinyinHelper toHanyuPinyinStringWithNSString:sourceText
                                  withHanyuPinyinOutputFormat:outputFormat
                                                 withNSString:@" "
                                                  outputBlock:^(NSString *pinYin) {
                                                      [weakSelf showToastWithMessage:pinYin];

                                                  }];
            }];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"汉字转拼音（同步）";
        item.cType = @"";
        item.didSelectAction = ^(id data) {
            [weakSelf showInputAlert:@"输入待转换汉字" placeholder:@"你好世界" complete:^(NSString *_Nonnull info) {
                NSString *sourceText = info;
                HanyuPinyinOutputFormat *outputFormat = [[HanyuPinyinOutputFormat alloc] init];
                [outputFormat setToneType:ToneTypeWithoutTone];
                [outputFormat setVCharType:VCharTypeWithV];
                [outputFormat setCaseType:CaseTypeLowercase];
                NSString *outputPinyin = [PinyinHelper toHanyuPinyinStringWithNSString:sourceText withHanyuPinyinOutputFormat:outputFormat withNSString:@" "];
                [weakSelf showToastWithMessage:outputPinyin];
            }];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

@end
