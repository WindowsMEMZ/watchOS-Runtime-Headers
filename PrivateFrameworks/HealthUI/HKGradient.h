//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKGradient_h
#define HKGradient_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSArray, UIColor;

@interface HKGradient : NSObject<NSCopying>

@property (retain, nonatomic) NSArray *colors;
@property (retain, nonatomic) NSArray *locations;
@property (readonly, nonatomic) UIColor *topColor;
@property (readonly, nonatomic) UIColor *bottomColor;

/* class methods */
+ (id)defaultGradient;

/* instance methods */
- (id)initWithColors:(id)colors locations:(id)locations;
- (id)initWithTopColor:(id)color bottomColor:(id)color;
- (BOOL)isEqualToHKGradient:(id)hkgradient;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HKGradient_h */
