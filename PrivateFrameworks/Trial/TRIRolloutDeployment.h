//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIRolloutDeployment_h
#define TRIRolloutDeployment_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface TRIRolloutDeployment : NSObject<NSCopying, NSSecureCoding>

@property (readonly, nonatomic) NSString *shortDesc;
@property (readonly, nonatomic) NSString *rolloutId;
@property (readonly, nonatomic) int deploymentId;

/* class methods */
+ (id)deploymentWithRolloutId:(id)id deploymentId:(int)id;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)taskTag;
- (id)initWithRolloutId:(id)id deploymentId:(int)id;
- (id)copyWithReplacementRolloutId:(id)id;
- (id)copyWithReplacementDeploymentId:(int)id;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqualToDeployment:(id)deployment;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)description;
- (id)init;
@end

#endif /* TRIRolloutDeployment_h */
