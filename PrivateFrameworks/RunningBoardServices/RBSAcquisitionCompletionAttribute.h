//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSAcquisitionCompletionAttribute_h
#define RBSAcquisitionCompletionAttribute_h
@import Foundation;

#include "RBSAttribute.h"

@interface RBSAcquisitionCompletionAttribute : RBSAttribute

@property (readonly, nonatomic) unsigned long long policy;

/* class methods */
+ (id)attributeWithCompletionPolicy:(unsigned long long)policy;

/* instance methods */
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)rbsxpccoder;
- (id)initWithRBSXPCCoder:(id)rbsxpccoder;
@end

#endif /* RBSAcquisitionCompletionAttribute_h */
