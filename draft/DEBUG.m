//
//  DEBUG.m
//  youpinapp2-ios
//
//  Created by Wei Zhicheng on 4/28/12.
//  Copyright (c) 2012 FZXY. All rights reserved.
//

#import "DEBUG.h"

#define CLEAR   [UIColor clearColor]
#define RED     [UIColor redColor]
#define GREEN   [UIColor greenColor]
#define BLUE    [UIColor blueColor]
#define YELLOW  [UIColor yellowColor]


UIColor *
DCOLOR()
{
    UIColor *color = CLEAR;
#ifndef NDEBUG
    static int choice = 0;
    switch (choice % 4) {
    case 0:
            color = RED;
            break;
    case 1:
            color = GREEN;
            break;
    case 2:
            color = BLUE;
            break;
    case 3:
            color = YELLOW;
            break;
    default:
            color = CLEAR;
    }
    choice += 1;
#endif
    return color;
}
