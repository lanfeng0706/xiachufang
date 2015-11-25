//
//  FifthTableViewCell.h
//  xiachufang
//
//  Created by 臧其龙 on 15/11/25.
//  Copyright © 2015年 邓岚锋. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "HomePageRecipe.h"

@interface FifthTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *recipeImageView;
@property (weak, nonatomic) IBOutlet UILabel *recipeTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *recipeSummaryLabel;
@property (weak, nonatomic) IBOutlet UIImageView *userAvatarImageView;
@property (weak, nonatomic) IBOutlet UILabel *countLabel;

+ (CGFloat)calculateCellHeightWithRecipeModel:(HomePageRecipe *)recipe;

@end
