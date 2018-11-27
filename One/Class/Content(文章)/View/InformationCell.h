//
//  InformationCell.h
//  米琪新闻
//
//  Created by tarena on 15/12/29.
//  Copyright © 2015年 tarena. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "InformationModel.h"


@interface InformationCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageUrl1;
@property (weak, nonatomic) IBOutlet UILabel *titleLable;

@property (weak, nonatomic) IBOutlet UILabel *fuZhuLable;

- (void)showDataWithModel:(InformationModel *)model andIndexPath:(NSIndexPath *)indexPath;
@end
