//
//  AFJResultsTableController.m
//  AFJ-iOS
//
//  Created by Alfred on 2022/8/12.
//

#import "AFJResultsTableController.h"
#import "AFJProduct.h"

@implementation AFJResultsTableController

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    return self.filteredProducts.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = (UITableViewCell *) [self.tableView dequeueReusableCellWithIdentifier:kAFJCellIdentifier];

    AFJProduct *product = self.filteredProducts[indexPath.row];
    [self configureCell:cell forProduct:product];

    return cell;
}

@end
