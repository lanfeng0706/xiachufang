//
//  HomePageRecipe.h
//  xiachufang
//
//  Created by 臧其龙 on 15/11/25.
//  Copyright © 2015年 邓岚锋. All rights reserved.
//

#import "MTLModel.h"

@interface HomePageRecipe : MTLModel

@property (nonatomic, readonly, copy) NSString * title;
@property (nonatomic, readonly, strong) NSURL * userPhotoURL;

@end
