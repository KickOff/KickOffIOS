//
//  UIDevice+deviceModel.m
//  edaijia
//
//  Created by Zhicheng Wei on 10/10/12.
//
//

#import "UIDevice+model.h"

@implementation UIDevice (deviceModel)

- (UIDeviceModelType)deviceModel
{
	if ([self userInterfaceIdiom] == UIUserInterfaceIdiomPad)
		return UIDeviceModelPad;
	if ([self userInterfaceIdiom] == UIUserInterfaceIdiomPhone &&
		CGSizeEqualToSize(CGSizeMake(640, 1136),
						  [[UIScreen mainScreen] currentMode].size))
			return UIDeviceModelPhone5;
	return UIDeviceModelPhone;
}

@end


/* auto resize method */
CGRect
UIAutoResizeToPhone5(CGRect rect)
{
	if ([[UIDevice currentDevice] deviceModel] == UIDeviceModelPhone5)
		rect.size.height += 88;
	return rect;
}

CGRect
UIAutoPositionToPhone5(CGRect rect)
{
	if ([[UIDevice currentDevice] deviceModel] == UIDeviceModelPhone5)
		rect.origin.y += 88;
	return rect;
}
