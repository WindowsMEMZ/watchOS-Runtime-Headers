//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSBaseMemoryGrant_h
#define RBSBaseMemoryGrant_h
@import Foundation;

#include "RBSGrant.h"

@class NSString;

@interface RBSBaseMemoryGrant : RBSGrant

@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, nonatomic) unsigned char strength;

/* class methods */
+ (id)grantWithCategory:(id)category strength:(unsigned char)strength;
+ (id)grantWithActiveLimit;
+ (BOOL)supportsRBSXPCSecureCoding;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
- (id)description;
@end

#endif /* RBSBaseMemoryGrant_h */
