//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKFitzpatrickSkinTypeObject_h
#define HKFitzpatrickSkinTypeObject_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface HKFitzpatrickSkinTypeObject : NSObject<NSCopying, NSSecureCoding>

@property (readonly) long long skinType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithSkinType:(long long)type;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* HKFitzpatrickSkinTypeObject_h */
