//
//  AFJCaseItemData.h
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/11.
//

#import <GPJDataDrivenTableView/GPJDataDrivenTableView.h>

NS_ASSUME_NONNULL_BEGIN

@interface AFJCaseItemData : GPJTableViewData

@property(nonatomic, strong) NSString *cName;
@property(nonatomic, strong) NSString *cDetail;
@property(nonatomic, strong) NSString *cURL;
@property(nonatomic, strong) NSString *cType;
@property(nonatomic, assign) BOOL cFlag;
@property(nonatomic, strong) NSArray *cList;
@property(nonatomic, strong) NSDictionary *cookie;

@end

@interface AFJCaseItemCell : GPJTableViewCell

@end


NS_ASSUME_NONNULL_END
