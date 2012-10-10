//
//  UIDevice+deviceModel.h
//  edaijia
//
//  Created by Zhicheng Wei on 10/10/12.
//
//

#import <UIKit/UIKit.h>

#define AUTO_RESIZE_TO_IPHONE5(r)	UIAutoResizeToPhone5(r)
#define AUTO_POS_TO_IPHONE5(r)		UIAutoPositionToPhone5(r)

typedef enum {
	UIDeviceModelPhone,
	UIDeviceModelPhone5,
	UIDeviceModelPad,
} UIDeviceModelType;

@interface UIDevice (deviceModel)

- (UIDeviceModelType)deviceModel;

@end

CGRect
UIAutoResizeToPhone5(CGRect rect);

CGRect
UIAutoPositionToPhone5(CGRect rect);
