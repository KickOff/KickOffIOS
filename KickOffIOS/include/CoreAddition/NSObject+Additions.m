//
//  NSObject+Additions.m
//  KickOffIOS
//
//  Created by Zhicheng Wei on 9/11/12.
//  Copyright (c) 2012 Baidu. All rights reserved.
//

#import "NSObject+Additions.h"

#include "Swizzle.h"

@implementation NSObject (Additions)

- (void)replaceMethodFrom:(SEL)oldSEL to:(SEL)newSEL
{
	Swizzle([self class], oldSEL, newSEL);
}


@end
