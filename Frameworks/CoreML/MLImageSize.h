//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLImageSize_h
#define MLImageSize_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface MLImageSize : NSObject<NSSecureCoding>

@property (readonly) long long pixelsWide;
@property (readonly) long long pixelsHigh;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPixelsWide:(long long)wide pixelsHigh:(long long)high;
- (unsigned long long)hash;
- (BOOL)isEqualToImageSize:(id)size;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MLImageSize_h */
