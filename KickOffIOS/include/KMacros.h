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


#endif /* __KMacros __*/

