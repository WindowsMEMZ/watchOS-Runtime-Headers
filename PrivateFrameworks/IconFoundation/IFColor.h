//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 597.5.2.1.0
//
#ifndef IFColor_h
#define IFColor_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class CIColor, NSUUID;

@interface IFColor : NSObject<NSSecureCoding>

@property (readonly, @dynamic) struct CGColor * cgColor;
@property (readonly) CIColor *ciColor;
@property (readonly) NSUUID *digest;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)black;
+ (id)white;
+ (struct CGColorSpace *)deviceRGBColorSpace;
+ (struct CGColorSpace *)deviceGreyColorSpace;

/* instance methods */
- (id)initWithRed:(double)red green:(double)green blue:(double)blue alpha:(double)alpha;
- (id)initWithWhite:(double)white alpha:(double)alpha;
- (id)initWithCGColor:(struct CGColor *)cgcolor;
- (id)initWithCIColor:(id)cicolor;
- (id)initWithSystemColor:(long long)color;
- (id)initWithSystemColor:(long long)color appearance:(long long)appearance contrast:(long long)contrast vibrancy:(long long)vibrancy;
- (id)_initWithColorStr:(id)str appearance:(long long)appearance contrast:(long long)contrast vibrancy:(long long)vibrancy;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
@end

#endif /* IFColor_h */
