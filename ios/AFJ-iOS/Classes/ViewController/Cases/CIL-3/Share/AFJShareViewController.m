//
//  AFJShareViewController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/9/15.
//

#import "AFJShareViewController.h"
#import "HQLSharePannelController.h"
#import "HQLVerticalPresentationController.h"
#import "HXEasyCustomShareView.h"

@interface AFJShareViewController ()

@property(nonatomic, strong) GPJDataDrivenTableView *tableView;

@end

@implementation AFJShareViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];

    self.tableView = [[GPJDataDrivenTableView alloc] initWithFrame:self.view.bounds];
    self.tableView.separatorStyle = UITableViewCellSeparatorStyleNone;
    [self.view addSubview:self.tableView];

    __weak typeof(self) weakSelf = self;
    NSMutableArray *dataArray = [NSMutableArray array];
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"分享示例";
        item.didSelectAction = ^(id data) {
            // 1.初始化 HQLPresentationViewController 或其子类实例
            CGRect frame = CGRectMake(0, 0, kScreenWidth, HQLSharePannelControllerHeight);
            HQLSharePannelController *controller = [[HQLSharePannelController alloc] initWithFrame:frame];
            controller.view.backgroundColor = [UIColor colorWithHexString:@"#F5F5F9"];

            // 2.初始化 HQLPresentationController 实例
            HQLVerticalPresentationController *presentationController NS_VALID_UNTIL_END_OF_SCOPE;

            // 3.设置 UIViewControllerTransitioningDelegate
            presentationController = [[HQLVerticalPresentationController alloc] initWithPresentedViewController:controller presentingViewController:self];

            // 4.模态呈现
            controller.transitioningDelegate = presentationController;
            [weakSelf presentViewController:controller animated:YES completion:NULL];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"普通样式";
        item.didSelectAction = ^(id data) {
            [weakSelf addGuanjiaShareView];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"微博";
        item.didSelectAction = ^(id data) {
            [weakSelf addWeiboShareView];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"微信";
        item.didSelectAction = ^(id data) {
            [weakSelf addWeixinShareView];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"QQ";
        item.didSelectAction = ^(id data) {
            [weakSelf addQQShareView];
        };
        [dataArray addObject:item];
    }
    {
        AFJCaseItemData *item = [AFJCaseItemData new];
        item.cName = @"淘宝";
        item.didSelectAction = ^(id data) {
            [weakSelf addTaobaoShareView];
        };
        [dataArray addObject:item];
    }
    [self.tableView reloadDataArray:dataArray];
}

/**
 *  仿新浪微博分享界面
 */
- (void)addWeiboShareView {
    //分享媒介数据源
    NSArray *shareAry = @[@{@"image":@"more_chat",
                            @"highlightedImage":@"more_chat_highlighted",
                            @"title":@"私信和群"},
                          @{@"image":@"more_weixin",
                            @"highlightedImage":@"more_weixin_highlighted",
                            @"title":@"微信好友"},
                          @{@"image":@"more_circlefriends",
                            @"highlightedImage":@"more_circlefriends_highlighted",
                            @"title":@"朋友圈"},
                          @{@"image":@"more_icon_zhifubao",
                            @"highlightedImage":@"more_icon_zhifubao_highlighted",
                            @"title":@"支付宝好友"},
                          @{@"image":@"more_icon_zhifubao_friend",
                            @"highlightedImage":@"more_icon_zhifubao_friend_highlighted",
                            @"title":@"生活圈"},
                          @{@"image":@"more_icon_qq",
                            @"highlightedImage":@"more_icon_qq_highlighted",
                            @"title":@"QQ"},
                          @{@"image":@"more_icon_qzone",
                            @"highlightedImage":@"more_icon_qzone_highlighted",
                            @"title":@"QQ空间"},
                          @{@"image":@"more_mms",
                            @"highlightedImage":@"more_mms_highlighted",
                            @"title":@"短信"},
                          @{@"image":@"more_email",
                            @"highlightedImage":@"more_email_highlighted",
                            @"title":@"邮件分享"},
                          @{@"image":@"more_icon_cardbackground",
                            @"highlightedImage":@"more_icon_cardbackground_highlighted",
                            @"title":@"设卡片背景"},
                          @{@"image":@"more_icon_collection",
                            @"title":@"收藏"},
                          @{@"image":@"more_icon_topline",
                            @"title":@"帮上头条"},
                          @{@"image":@"more_icon_link",
                            @"title":@"复制链接"},
                          @{@"image":@"more_icon_report",
                            @"title":@"举报"},
                          @{@"image":@"more_icon_back",
                            @"title":@"返回首页"}];
    
    //自定义头部
    UIView *headerView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, SCREENW, 36)];
    headerView.backgroundColor = [UIColor clearColor];
    
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(16, 21, headerView.frame.size.width-32, 15)];
    label.textColor = [UIColor colorWithRed:94/255.0 green:94/255.0 blue:94/255.0 alpha:1.0];;
    label.backgroundColor = [UIColor clearColor];
    label.font = [UIFont systemFontOfSize:15];
    label.text = @"分享到";
    [headerView addSubview:label];
    
    //实例化
    HXEasyCustomShareView *shareView = [[HXEasyCustomShareView alloc] initWithFrame:CGRectMake(0, 0, SCREENW, SCREENH)];
    //设置头部View 如果不设置则不显示头部
    shareView.headerView = headerView;
    //计算高度 根据第一行显示的数量和总数,可以确定显示一行还是两行,最多显示2行
    float height = [shareView getBoderViewHeight:shareAry firstCount:9];
    shareView.boderView.frame = CGRectMake(0, 0, shareView.frame.size.width, height);
    shareView.firstCount = 9;
    [shareView setShareAry:shareAry delegate:self];
    [self.navigationController.view addSubview:shareView];
}

/**
 *  仿微信分享界面
 */
- (void)addWeixinShareView {
    NSArray *shareAry = @[@{@"image":@"Action_Share",
                            @"title":@"发送给朋友"},
                          @{@"image":@"Action_Moments",
                            @"title":@"朋友圈"},
                          @{@"image":@"Action_MyFavAdd",
                            @"title":@"收藏"},
                          @{@"image":@"AS_safari",
                            @"title":@"Safari打开"},
                          @{@"image":@"AS_Email",
                            @"title":@"邮件"},
                          @{@"image":@"AS_QQ",
                            @"title":@"QQ"},
                          @{@"image":@"Action_Verified",
                            @"title":@"查看公众号"},
                          @{@"image":@"Action_Copy",
                            @"title":@"复制链接"},
                          @{@"image":@"Action_Font",
                            @"title":@"调整字体"},
                          @{@"image":@"Action_Refresh",
                            @"title":@"刷新"},
                          @{@"image":@"Action_Expose",
                            @"title":@"举报"}];
    
    UIView *headerView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, SCREENW, 30)];
    headerView.backgroundColor = [UIColor clearColor];
    
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 9, headerView.frame.size.width, 11)];
    label.textAlignment = NSTextAlignmentCenter;
    label.textColor = [UIColor colorWithRed:99/255.0 green:98/255.0 blue:98/255.0 alpha:1.0];
    label.backgroundColor = [UIColor clearColor];
    label.font = [UIFont systemFontOfSize:11];
    label.text = @"网页由 mp.weixin.qq.com 提供";
    [headerView addSubview:label];
    
    HXEasyCustomShareView *shareView = [[HXEasyCustomShareView alloc] initWithFrame:CGRectMake(0, 0, SCREENW, SCREENH)];
    shareView.backView.backgroundColor = [UIColor colorWithRed:255/255.0 green:255/255.0 blue:255/255.0 alpha:0.9];
    shareView.headerView = headerView;
    float height = [shareView getBoderViewHeight:shareAry firstCount:6];
    shareView.boderView.frame = CGRectMake(0, 0, shareView.frame.size.width, height);
    [shareView setShareAry:shareAry delegate:self];
    shareView.middleLineLabel.frame = CGRectMake(10, shareView.middleLineLabel.frame.origin.y, shareView.frame.size.width-20, shareView.middleLineLabel.frame.size.height);
    shareView.showsHorizontalScrollIndicator = NO;
    [self.navigationController.view addSubview:shareView];
}

/**
 *  仿QQ分享界面
 */
- (void)addQQShareView {
    NSArray *shareAry = @[@{@"image":@"qq_haoyou",
                            @"title":@"好友"},
                          @{@"image":@"qq_kongjian",
                            @"title":@"QQ空间"},
                          @{@"image":@"qq_weixin",
                            @"title":@"微信"},
                          @{@"image":@"qq_pengyouquan",
                            @"title":@"朋友圈"},
                          @{@"image":@"qq_safari",
                            @"title":@"Safari打开"},
                          @{@"image":@"qq_ziliao",
                            @"title":@"查看资料"},
                          @{@"image":@"qq_shoucang",
                            @"title":@"收藏"},
                          @{@"image":@"qq_fuzhi",
                            @"title":@"复制链接"},
                          @{@"image":@"qq_jubao",
                            @"title":@"举报"}];
    
    HXEasyCustomShareView *shareView = [[HXEasyCustomShareView alloc] initWithFrame:CGRectMake(0, 0, SCREENW, SCREENH)];
    shareView.backView.backgroundColor = [UIColor colorWithRed:248/255.0 green:248/255.0 blue:248/255.0 alpha:1.0];
    float height = [shareView getBoderViewHeight:shareAry firstCount:5];
    shareView.boderView.frame = CGRectMake(0, 0, shareView.frame.size.width, height);
    shareView.cancleButton.frame = CGRectMake(shareView.cancleButton.frame.origin.x, shareView.cancleButton.frame.origin.y, shareView.cancleButton.frame.size.width, 54);
    shareView.cancleButton.titleLabel.font = [UIFont systemFontOfSize:20];
    [shareView.cancleButton setTitleColor:[UIColor colorWithRed:0/255.0 green:122/255.0 blue:255/255.0 alpha:1.0] forState:UIControlStateNormal];
    [shareView setShareAry:shareAry delegate:self];
    [self.navigationController.view addSubview:shareView];
}

/**
 *  仿淘宝分享界面
 */
- (void)addTaobaoShareView {
    NSArray *shareAry = @[@{@"image":@"taobao_fuzhi",
                            @"title":@"复制"},
                          @{@"image":@"taobao_erweima",
                            @"title":@"二维码"},
                          @{@"image":@"taobao_songli",
                            @"title":@"送礼"},
                          @{@"image":@"taobao_weixin",
                            @"title":@"微信"},
                          @{@"image":@"taobao_qq",
                            @"title":@"QQ好友"},
                          @{@"image":@"taobao_weibo",
                            @"title":@"微博"},
                          @{@"image":@"taobao_guangjie",
                            @"title":@"爱逛街"},
                          @{@"image":@"taobao_zhifu",
                            @"title":@"支付宝好友"}];
    
    UIView *headerView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, SCREENW, 30)];
    headerView.backgroundColor = [UIColor clearColor];
    
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 17, headerView.frame.size.width, 15)];
    label.textAlignment = NSTextAlignmentCenter;
    label.textColor = [UIColor colorWithRed:51/255.0 green:68/255.0 blue:79/255.0 alpha:1.0];
    label.backgroundColor = [UIColor clearColor];
    label.font = [UIFont systemFontOfSize:15];
    label.text = @"分享";
    [headerView addSubview:label];
    
    
    UIView *footerView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, SCREENW, 120)];
    footerView.backgroundColor = [UIColor clearColor];
    
    UILabel *lineLabel = [[UILabel alloc] initWithFrame:CGRectMake(10, 0, footerView.frame.size.width-20, 0.5)];
    lineLabel.backgroundColor = [UIColor colorWithRed:208/255.0 green:208/255.0 blue:208/255.0 alpha:1.0];
    [footerView addSubview:lineLabel];
    
    label = [[UILabel alloc] initWithFrame:CGRectMake(12, 13, headerView.frame.size.width-24, 12)];
    label.textColor = [UIColor colorWithRed:5/255.0 green:27/255.0 blue:40/255.0 alpha:1.0];
    label.backgroundColor = [UIColor clearColor];
    label.font = [UIFont systemFontOfSize:12];
    label.text = @"手机联系人和淘友";
    [footerView addSubview:label];
    
    UIImageView *icoImageView = [[UIImageView alloc] initWithFrame:CGRectMake(label.frame.origin.x, label.frame.origin.y+label.frame.size.height+12, 57, 57)];
    icoImageView.image = [UIImage imageNamed:@"taobao_lianxiren"];
    [footerView addSubview:icoImageView];
    
    UIView *view = [[UIView alloc] initWithFrame:CGRectMake(icoImageView.frame.origin.x+icoImageView.frame.size.width, icoImageView.frame.origin.y, headerView.frame.size.width-24-icoImageView.frame.size.width, icoImageView.frame.size.height)];
    view.backgroundColor = [UIColor colorWithRed:245/255.0 green:245/255.0 blue:245/255.0 alpha:1.0];
    [footerView addSubview:view];
    
    NSString *content = @"分享给淘友或手机联系人,好友可在手机淘宝【消息中心】或【短信】中看到你的分享";
    
    NSMutableAttributedString *attributedString = [[NSMutableAttributedString alloc]initWithString:content];
    NSMutableParagraphStyle *paragraphStyle = [[NSMutableParagraphStyle alloc]init];
    [paragraphStyle setLineSpacing:5];
    [attributedString addAttribute:NSParagraphStyleAttributeName value:paragraphStyle range:NSMakeRange(0, content.length)];
    //调节高度
    CGSize size = CGSizeMake(headerView.frame.size.width-24-icoImageView.frame.size.width, 500000);

    label = [[UILabel alloc] initWithFrame:CGRectMake(icoImageView.frame.origin.x+icoImageView.frame.size.width+10, icoImageView.frame.origin.y, headerView.frame.size.width-24-icoImageView.frame.size.width-10, icoImageView.frame.size.height)];
    label.textColor = [UIColor colorWithRed:107/255.0 green:107/255.0 blue:107/255.0 alpha:1.0];
    label.numberOfLines = 0;
    label.backgroundColor = [UIColor clearColor];
    label.font = [UIFont systemFontOfSize:12];
    label.attributedText = attributedString;
    [footerView addSubview:label];
    [label sizeThatFits:size];
    
    HXEasyCustomShareView *shareView = [[HXEasyCustomShareView alloc] initWithFrame:CGRectMake(0, 0, SCREENW, SCREENH)];
    shareView.backView.backgroundColor = [UIColor colorWithRed:255/255.0 green:255/255.0 blue:255/255.0 alpha:0.9];
    shareView.headerView = headerView;
    float height = [shareView getBoderViewHeight:shareAry firstCount:3];
    shareView.boderView.frame = CGRectMake(0, 0, shareView.frame.size.width, height);
    [shareView setShareAry:shareAry delegate:self];
    shareView.footerView = footerView;
    [self.navigationController.view addSubview:shareView];
}

/**
 *  仿生日管家分享界面
 */
- (void)addGuanjiaShareView {
    NSArray *shareAry = @[@{@"image":@"shareView_wx",
                            @"title":@"微信"},
                          @{@"image":@"shareView_friend",
                            @"title":@"朋友圈"},
                          @{@"image":@"shareView_qq",
                            @"title":@"QQ"},
                          @{@"image":@"shareView_wb",
                            @"title":@"新浪微博"},
                          @{@"image":@"shareView_rr",
                            @"title":@"人人网"},
                          @{@"image":@"shareView_qzone",
                            @"title":@"QQ空间"},
                          @{@"image":@"shareView_msg",
                            @"title":@"短信"},
                          @{@"image":@"share_copyLink",
                            @"title":@"复制链接"}];
    
    UIView *headerView = [[UIView alloc] initWithFrame:CGRectMake(0, 0, SCREENW, 54)];
    headerView.backgroundColor = [UIColor clearColor];
    
    UILabel *label = [[UILabel alloc] initWithFrame:CGRectMake(0, 20, headerView.frame.size.width, 15)];
    label.textAlignment = NSTextAlignmentCenter;
    label.textColor = [UIColor blackColor];
    label.backgroundColor = [UIColor clearColor];
    label.font = [UIFont systemFontOfSize:15];
    label.text = @"分享到";
    [headerView addSubview:label];
    
    UILabel *lineLabel = [[UILabel alloc] initWithFrame:CGRectMake(0, headerView.frame.size.height-0.5, headerView.frame.size.width, 0.5)];
    lineLabel.backgroundColor = [UIColor colorWithRed:208/255.0 green:208/255.0 blue:208/255.0 alpha:1.0];
    [headerView addSubview:lineLabel];
    
    UILabel *lineLabel1 = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, headerView.frame.size.width, 0.5)];
    lineLabel1.backgroundColor = [UIColor colorWithRed:208/255.0 green:208/255.0 blue:208/255.0 alpha:1.0];
    
    HXEasyCustomShareView *shareView = [[HXEasyCustomShareView alloc] initWithFrame:CGRectMake(0, 0, SCREENW, SCREENH)];
    shareView.backView.backgroundColor = [UIColor colorWithRed:255/255.0 green:255/255.0 blue:255/255.0 alpha:1.0];
    shareView.headerView = headerView;
    float height = [shareView getBoderViewHeight:shareAry firstCount:7];
    shareView.boderView.frame = CGRectMake(0, 0, shareView.frame.size.width, height);
    shareView.middleLineLabel.hidden = YES;
    [shareView.cancleButton addSubview:lineLabel1];
    shareView.cancleButton.frame = CGRectMake(shareView.cancleButton.frame.origin.x, shareView.cancleButton.frame.origin.y, shareView.cancleButton.frame.size.width, 54);
    shareView.cancleButton.titleLabel.font = [UIFont systemFontOfSize:16];
    [shareView.cancleButton setTitleColor:[UIColor colorWithRed:184/255.0 green:184/255.0 blue:184/255.0 alpha:1.0] forState:UIControlStateNormal];
    [shareView setShareAry:shareAry delegate:self];
    [self.navigationController.view addSubview:shareView];
}

#pragma mark HXEasyCustomShareViewDelegate

- (void)easyCustomShareViewButtonAction:(HXEasyCustomShareView *)shareView title:(NSString *)title {
    [self showToastWithMessage:[NSString stringWithFormat:@"当前点击:%@",title]];
}

@end

