//
//  AFJLabelSample2ViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/13.
//

#import "AFJLabelSample2ViewController.h"

@interface AFJLabelSample2ViewController ()

@end

@implementation AFJLabelSample2ViewController

- (void)viewDidLoad {
    [super viewDidLoad];


    [self layoutLabels];

    self.view.backgroundColor = [UIColor grayColor];
}

- (void)layoutLabels {
    // 1, 普通的
    YYLabel *label = [[YYLabel alloc] initWithFrame:CGRectMake(10, 90, kScreenWidth - 20, 30)];

    label.font = [UIFont systemFontOfSize:15];
    label.textColor = [UIColor RandomColor];

    label.textAlignment = NSTextAlignmentLeft;

    label.numberOfLines = 0;

    label.text = @"第一个第一个第一个第一个第一个第一个第一个第一个第一个第一个第一个第一个第一个第一个第一个第一个第一个";

    [self.view addSubview:label];


    // 2, 自动计算高度的
    CGSize aSize = CGSizeMake(kScreenWidth - 20, INFINITY);

    NSMutableAttributedString *attStrM0 = [[NSMutableAttributedString alloc] initWithString:@"固定宽度, 并自适应高度, 固定宽度, 并自适应高度, 固定宽度, 并自适应高度, 固定宽度, 并自适应高度, 固定宽度, 并自适应高度, 固定宽度, 并自适应高度, 固定宽度, 并自适应高度" attributes:@{NSFontAttributeName: [UIFont systemFontOfSize:20], NSForegroundColorAttributeName: [UIColor RandomColor]}];

    attStrM0.lineSpacing = 10;

    YYTextLayout *layout = [YYTextLayout layoutWithContainerSize:aSize text:attStrM0];

    YYLabel *aLabel = [[YYLabel alloc] init];

    aLabel.backgroundColor = [UIColor whiteColor];

    aLabel.frame = CGRectMake(10, 130, layout.textBoundingSize.width, layout.textBoundingSize.height);

    aLabel.textLayout = layout;

    [self.view addSubview:aLabel];



    // 3, 高亮和点击的

    CGSize bSize = CGSizeMake(kScreenWidth - 20, INFINITY);

    NSString *bAllString = @"点击高亮点击高亮, 点击高亮点击高亮, 点击高亮点击高亮, 点击高亮点击高亮, DDDDDDD 点击高亮点击高亮";

    NSString *bHighlightedString = @"DDDDDDD";

    NSRange bRange = [bAllString rangeOfString:bHighlightedString];


    NSMutableAttributedString *bAttStrM = [[NSMutableAttributedString alloc] initWithString:bAllString];

    bAttStrM.lineSpacing = 4;
    bAttStrM.font = [UIFont systemFontOfSize:20];
    bAttStrM.backgroundColor = [UIColor whiteColor];
    bAttStrM.color = [UIColor blackColor];


    [bAttStrM setTextHighlightRange:bRange color:[UIColor redColor] backgroundColor:[UIColor yellowColor] userInfo:@{@"a": @"b"} tapAction:^(UIView *_Nonnull containerView, NSAttributedString *_Nonnull text, NSRange range, CGRect rect) {

        NSLog(@"%@", containerView);
        NSLog(@"%@", text);
        NSLog(@"%@", NSStringFromRange(range));
        NSLog(@"%@", NSStringFromCGRect(rect));

    }               longPressAction:^(UIView *_Nonnull containerView, NSAttributedString *_Nonnull text, NSRange range, CGRect rect) {

        NSLog(@"%@", containerView);
        NSLog(@"%@", text);
        NSLog(@"%@", NSStringFromRange(range));
        NSLog(@"%@", NSStringFromCGRect(rect));
    }];

    YYTextLayout *bLayout = [YYTextLayout layoutWithContainerSize:bSize text:bAttStrM];

    YYLabel *bLabel = [[YYLabel alloc] init];

    bLabel.frame = CGRectMake(10, aLabel.SUP_bottom + 10, bLayout.textBoundingSize.width, bLayout.textBoundingSize.height);

    bLabel.textLayout = bLayout;

    [self.view addSubview:bLabel];

    // 4, 带边框
    NSMutableAttributedString *cAttStrM = [[NSMutableAttributedString alloc] initWithString:@"myProject"];

    cAttStrM.lineSpacing = 4;
    cAttStrM.font = [UIFont systemFontOfSize:20];
    cAttStrM.color = [UIColor redColor];
    cAttStrM.alignment = NSTextAlignmentCenter;


    YYTextBorder *border = [YYTextBorder borderWithFillColor:nil cornerRadius:20];

    border.insets = UIEdgeInsetsMake(-5, -10, -5, -10);

    border.strokeColor = [UIColor whiteColor];

    border.strokeWidth = 2;


    border.lineStyle = YYTextLineStyleSingle;

    cAttStrM.textBorder = border;

    YYLabel *cLabel = [[YYLabel alloc] init];
    cLabel.attributedText = cAttStrM;

    cLabel.frame = CGRectMake(10, bLabel.SUP_bottom + 10, kScreenWidth - 20, 50);
    cLabel.backgroundColor = [UIColor RandomColor];

    [self.view addSubview:cLabel];


    NSString *htmlString = @"<html><body>显示HTML标签<font color=\"#ffffff\"> Some显示HTML标签 </font>html string \n <font size=\"13\" color=\"red\">This is some显示HTML标签 text!</font> </body></html>";

    YYLabel *htmlLabel = [[YYLabel alloc] init];
    htmlLabel.attributedText = [self getAttr:htmlString];

    htmlLabel.numberOfLines = 0;
//    htmlLabel.textColor = [UIColor yellowColor];
    htmlLabel.frame = CGRectMake(10, cLabel.SUP_bottom + 10, kScreenWidth - 20, 200);
    htmlLabel.backgroundColor = [UIColor lightGrayColor];
    [self.view addSubview:htmlLabel];
}


- (NSMutableAttributedString *)getAttr:(NSString *)htmlString {
    NSMutableAttributedString *attrM = [[NSMutableAttributedString alloc] initWithData:[htmlString dataUsingEncoding:NSUnicodeStringEncoding] options:@{NSDocumentTypeDocumentAttribute: NSHTMLTextDocumentType} documentAttributes:nil error:nil];


    attrM.lineSpacing = 10;
    attrM.alignment = NSTextAlignmentJustified;

    attrM.font = [UIFont systemFontOfSize:20];

    [attrM setFont:[UIFont systemFontOfSize:25] range:NSMakeRange(2, 2)];

    attrM.kern = @5;


    return attrM;
}

#pragma mark 自定义代码

- (NSMutableAttributedString *)changeTitle:(NSString *)curTitle {
    NSMutableAttributedString *title = [[NSMutableAttributedString alloc] initWithString:curTitle ?: @""];

    [title addAttribute:NSForegroundColorAttributeName value:[UIColor RandomColor] range:NSMakeRange(0, title.length)];

    [title addAttribute:NSFontAttributeName value:[UIFont systemFontOfSize:16] range:NSMakeRange(0, title.length)];

    return title;
}


@end
