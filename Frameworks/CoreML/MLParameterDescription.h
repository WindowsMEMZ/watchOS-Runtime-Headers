//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLParameterDescription_h
#define MLParameterDescription_h
@import Foundation;

#include "MLNumericConstraint.h"
#include "MLParameterKey.h"
#include "NSSecureCoding-Protocol.h"

@interface MLParameterDescription : NSObject<NSSecureCoding>

@property (retain, nonatomic) MLParameterKey *key;
@property (retain, nonatomic) id defaultValue;
@property (retain, nonatomic) MLNumericConstraint *numericConstraint;

/* class methods */
+ (id)parameterDescriptionForKey:(id)key int64ParameterSpec:(const void *)spec;
+ (id)parameterDescriptionForKey:(id)key doubleParameterSpec:(const void *)spec;
+ (id)parameterDescriptionForKey:(id)key stringParameterSpec:(const void *)spec;
+ (id)parameterDescriptionForKey:(id)key boolParameterSpec:(const void *)spec;
+ (id)parameterDescriptionForKey:(id)key defaultValue:(id)value numericConstraint:(id)constraint;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* MLParameterDescription_h */
