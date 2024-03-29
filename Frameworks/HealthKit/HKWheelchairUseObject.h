//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKWheelchairUseObject_h
#define HKWheelchairUseObject_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface HKWheelchairUseObject : NSObject<NSCopying, NSSecureCoding>

@property (readonly) long long wheelchairUse;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithWheelchairUse:(long long)use;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* HKWheelchairUseObject_h */
