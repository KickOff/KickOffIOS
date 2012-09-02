//
//  UIAlertView+KAddition.m
//  KickOffIOS
//
//  Created by guoyu wang on 12-9-1.
//  Copyright (c) 2012年 Baidu. All rights reserved.
//

#import "UIAlertView+KAddition.h"

@implementation UIAlertView (KAddition)

+(void)alertWithTitle:(NSString*)title message:(NSString*)message okBtnTitle:(NSString*)okTitle cancelBtnTitle:(NSString*)cancelTitle okBlock:(AlertActionBlock)block
{
    KUIAlertView* alertView = [[KUIAlertView alloc] initWithTitle:title message:message delegate:nil cancelButtonTitle:cancelTitle otherButtonTitles:okTitle, nil];
    alertView.delegate = alertView;
    alertView.okBlock = block;
    [alertView show];
}

@end
