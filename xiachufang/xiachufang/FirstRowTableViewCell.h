//
//  FirstRowTableViewCell.h
//  xiachufang
//
//  Created by 臧其龙 on 15/11/25.
//  Copyright © 2015年 邓岚锋. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FirstRowTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UIImageView *leftImageView;
@property (weak, nonatomic) IBOutlet UILabel *leftLabel;
@property (weak, nonatomic) IBOutlet UIImageView *rightImageView;
@property (weak, nonatomic) IBOutlet UIButton *rightButton;

@end
