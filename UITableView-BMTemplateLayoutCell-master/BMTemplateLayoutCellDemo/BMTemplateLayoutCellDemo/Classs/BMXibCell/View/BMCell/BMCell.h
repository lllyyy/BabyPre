//
//  BMCell.h
//  BMTemplateLayoutCellDemo
//
//  Created by __liangdahong on 2017/8/17.
//  Copyright © 2017年 ___liangdahong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BMModel.h"

@interface BMCell : UITableViewCell

@property (strong, nonatomic) BMModel *model;

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *iconImageView;
@property (weak, nonatomic) IBOutlet UILabel *descLabel;


@end
