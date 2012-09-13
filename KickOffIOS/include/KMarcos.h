#ifndef __KMacros__
#define __KMacros__

// fast make
#define ccp(__X__,__Y__) CGPointMake(__X__,__Y__)
#define ccr(__A__,__B__,__C__,__D__) CGRectMake(__A__, __B__, __C__, __D__)
#define ccs(__X__,__Y__) CGSizeMake(__X__,__Y__)


// fast creation
#define IMG(name)       [UIImage imageNamed:(name)]
#define IMG_VIEW(name)  [[UIImageView alloc] initWithImage:[UIImage imageNamed:(name)]]
#define FONT(size)      [UIFont systemFontOfSize:(size)]
#define BFONT(size)     [UIFont boldSystemFontOfSize:(size)]
#define BUNDLE(name)    [[NSBundle mainBundle] pathForResource:(name)

// Components size
#define kSizeScreenWidth         [[UIScreen mainScreen] bounds].size.width
#define kSizeScreenHeight        [[UIScreen mainScreen] bounds].size.height
#define kSizeNaviBarHeight       44
#define kSizeTabBarHeight        49
#define kSizeStatusBarHeight     20

// Device detect
#define  TARGET_iDEVICE_5 [[UIScreen mainScreen] bounds].size.height==568 //@todo need test

/* color helper */
#define RGBACOLOR(c)			\
	[UIColor colorWithRed:((c>>24)&0xFF)/255.0	\
		green:((c>>16)&0xFF)/255.0	\
		blue:((c>>8)&0xFF)/255.0	\
		alpha:((c)&0xFF)/255.0]


/* number helper */
#define INT(a)		[NSNumber numberWithInt:(a)]
#define STR(a)		[NSString stringWithFormat:@"%@", (a)]
#define FLOAT(a)	[NSNumber numberWithFloat:(a)]

#define NUMBER_OR_NIL(a)	\
	(((a) && [(a) isKindOfClass:[NSNumber class]]) ? (a) : nil)

#define STRING_OR_NIL(a)	\
	(((a) && [(a) isKindOfClass:[NSString class]]) ? (a) : nil)

#define STRING_OR_EMPTY(a)	\
	(((a) && [(a) isKindOfClass:[NSString class]]) ? (a) : @"")


#endif /* __KMacros __*/

