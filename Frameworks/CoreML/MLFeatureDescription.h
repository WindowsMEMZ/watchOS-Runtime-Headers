//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLFeatureDescription_h
#define MLFeatureDescription_h
@import Foundation;

#include "MLDictionaryConstraint.h"
#include "MLImageConstraint.h"
#include "MLMultiArrayConstraint.h"
#include "MLSequenceConstraint.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface MLFeatureDescription : NSObject<NSCopying, NSSecureCoding>

@property (retain) NSDictionary *valueConstraints;
@property (readonly, nonatomic) MLMultiArrayConstraint *multiArrayConstraintCached;
@property (readonly, nonatomic) MLImageConstraint *imageConstraintCached;
@property (readonly, nonatomic) MLDictionaryConstraint *dictionaryConstraintCached;
@property (readonly, nonatomic) MLSequenceConstraint *sequenceConstraintCached;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) BOOL optional;

/* class methods */
+ (id)featureDescriptionWithName:(id)name type:(long long)type optional:(BOOL)optional constraints:(id)constraints;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)debugQuickLookObject;
- (id)initWithName:(id)name type:(long long)type optional:(BOOL)optional contraints:(id)contraints;
- (BOOL)isAllowedValue:(id)value;
- (BOOL)isAllowedValue:(id)value error:(id *)error;
- (id)multiArrayConstraint;
- (id)imageConstraint;
- (id)dictionaryConstraint;
- (id)sequenceConstraint;
- (BOOL)allowsValuesWithDescription:(id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (BOOL)isOptional;
@end

#endif /* MLFeatureDescription_h */
