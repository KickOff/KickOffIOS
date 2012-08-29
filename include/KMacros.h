#ifndef __KMacros__
#define __KMacros__

// fast make
#define ccr		CGRectMake
#define ccp		CGPointMake
#define ccs		CGSizeMake

// fast creation
#define IMG(name)                        [UIImage imageNamed:(name)]
#define IMG_VIEW(name)		    [[UIImageView alloc] initWithImage:[UIImage imageNamed:(name)]]
#define FONT(size)                        [UIFont systemFontOfSize:(size)]
#define BFONT(size)                     [UIFont boldSystemFontOfSize:(size)]
#define BUNDLE(name)               [[NSBundle mainBundle] pathForResource:(name)


#endif /* __KMacros __*/

