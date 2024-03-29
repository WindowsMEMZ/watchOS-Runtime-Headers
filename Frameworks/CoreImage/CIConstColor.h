//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1420.3.0.0.0
//
#ifndef CIConstColor_h
#define CIConstColor_h
@import Foundation;

#include "CIColor.h"

@interface CIConstColor : CIColor
/* class methods */
+ (id)alloc;

/* instance methods */
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)retain;
- (void)release;
- (id)autorelease;
- (unsigned long long)numberOfComponents;
- (const double *)components;
- (double)red;
- (double)green;
- (double)blue;
- (double)alpha;
- (struct CGColorSpace *)colorSpace;
- (struct CGColor *)rgbColor;
- (struct CGColor *)cgColor;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* CIConstColor_h */
