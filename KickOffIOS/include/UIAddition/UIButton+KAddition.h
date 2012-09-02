//
//  UIButton+KAddition.h
//  KickOffIOS
//
//  Created by guoyu wang on 12-8-30.
//  Copyright (c) 2012年 Baidu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KUIButton.h"

@interface UIButton (KAddition)

+(UIButton*)buttonWithImageName:(NSString*)imgName hlImageName:(NSString*)hlImgName onTapBlock:(ButtonActionBlock)block NS_AVAILABLE(10_6, 4_0);
@end
