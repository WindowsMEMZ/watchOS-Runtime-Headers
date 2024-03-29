//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCategoryVisualizationMagnitude_h
#define PKCategoryVisualizationMagnitude_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface PKCategoryVisualizationMagnitude : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *passUniqueIdentifier;
@property (nonatomic) long long bucket;
@property (nonatomic) double magnitude;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* PKCategoryVisualizationMagnitude_h */
