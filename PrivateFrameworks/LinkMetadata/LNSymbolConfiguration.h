//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 146.60.7.1.1
//
#ifndef LNSymbolConfiguration_h
#define LNSymbolConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface LNSymbolConfiguration : NSObject<NSSecureCoding, NSCopying>

@property (readonly, nonatomic) double pointSize;
@property (readonly, nonatomic) long long scale;
@property (readonly, nonatomic) long long weight;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPointSize:(double)size scale:(long long)scale weight:(long long)weight;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* LNSymbolConfiguration_h */
