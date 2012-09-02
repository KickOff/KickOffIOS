//
//  UIButton+KAddition.m
//  KickOffIOS
//
//  Created by guoyu wang on 12-8-30.
//  Copyright (c) 2012年 Baidu. All rights reserved.
//

#import "UIButton+KAddition.h"
@implementation UIButton (KAddition)

+(UIButton*)buttonWithImageName:(NSString*)imgName hlImageName:(NSString*)hlImgName onTapBlock:(ButtonActionBlock)block
{
    UIImage* image = IMG(imgName);
    KUIButton* btn = [[KUIButton alloc] initWithFrame:ccr(0, 0, image.size.width, image.size.height)];
    [btn setBackgroundImage:image forState:UIControlStateNormal];
    [btn setBackgroundImage:IMG(hlImgName) forState:UIControlStateSelected];
    [btn addTarget:btn action:@selector(onTouchUp) forControlEvents:UIControlEventTouchUpInside];
    btn.onTapBlock = block;
    return btn;
}
@end
