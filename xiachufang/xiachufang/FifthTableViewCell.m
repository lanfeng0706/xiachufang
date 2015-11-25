//
//  FifthTableViewCell.m
//  xiachufang
//
//  Created by 臧其龙 on 15/11/25.
//  Copyright © 2015年 邓岚锋. All rights reserved.
//

#import "FifthTableViewCell.h"

static CGFloat const kImageViewAndTitleLabelPadding = 10.0f;
static CGFloat const kTitleLabelAndSummaryLabelPadding = 10.0f;
static CGFloat const kSummaryLabelAndBottomViewPadding = 10.0f;
static CGFloat const kRecieImageViewHeight = 190.0f;

@implementation FifthTableViewCell

- (void)awakeFromNib {
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

+ (CGFloat)calculateCellHeightWithRecipeModel:(HomePageRecipe *)recipe
{
  
    return 0;
}

@end
