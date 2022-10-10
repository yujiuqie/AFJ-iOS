//
//  AFJCaseItemData.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/11.
//

@implementation AFJCaseItemData

- (CGFloat)cellHeight {
    return 60.0f;
}

@end

@implementation AFJCaseItemCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        self.selectionStyle = UITableViewCellSelectionStyleNone;
    }
    return self;
}

- (void)configCell {
    AFJCaseItemData *data = self.data;
    self.textLabel.text = data.cName;
    self.accessoryType = data.cFlag ? UITableViewCellAccessoryCheckmark : UITableViewCellAccessoryNone;
    if ([data.cDetail length] > 0) {
        self.detailTextLabel.text = data.cDetail;
    }
}

@end
