//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 599.201.0.0.0
//
#ifndef SCNAvoidOccluderConstraint_h
#define SCNAvoidOccluderConstraint_h
@import Foundation;

#include "SCNConstraint.h"
#include "SCNNode.h"

@protocol SCNAvoidOccluderConstraintDelegate;

@interface SCNAvoidOccluderConstraint : SCNConstraint {
  /* instance variables */
  unsigned long long _categoryBitMask;
  float _offset;
}

@property (nonatomic) NSObject<SCNAvoidOccluderConstraintDelegate> *delegate;
@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) unsigned long long occluderCategoryBitMask;
@property (nonatomic) double bias;

/* class methods */
+ (id)avoidOccluderConstraint;
+ (id)avoidOccluderConstraintWithTarget:(id)target;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)_customEncodingOfSCNAvoidOccluderConstraint:(id)constraint;
- (void)_customDecodingOfSCNAvoidOccluderConstraint:(id)constraint;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* SCNAvoidOccluderConstraint_h */
