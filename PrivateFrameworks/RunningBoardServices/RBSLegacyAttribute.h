//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSLegacyAttribute_h
#define RBSLegacyAttribute_h
@import Foundation;

#include "RBSAttribute.h"

@interface RBSLegacyAttribute : RBSAttribute

@property (nonatomic) unsigned long long reason;
@property (readonly, nonatomic) unsigned long long requestedReason;
@property (readonly, nonatomic) unsigned long long flags;

/* class methods */
+ (id)attributeWithReason:(unsigned long long)reason flags:(unsigned long long)flags;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSLegacyAttribute_h */
