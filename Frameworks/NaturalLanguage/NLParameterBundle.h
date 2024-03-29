//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 129.0.0.0.0
//
#ifndef NLParameterBundle_h
#define NLParameterBundle_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary;

@interface NLParameterBundle : NSObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) NSArray *parameters;
@property (readonly, copy, nonatomic) NSArray *parameterNames;
@property (readonly, copy, nonatomic) NSDictionary *parameterValues;
@property (readonly, copy, nonatomic) NSDictionary *metadata;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

/* class methods */
+ (id)parameterBundleWithParameters:(id)parameters values:(id)values metadata:(id)metadata;
+ (id)parameterBundleWithContentsOfURL:(id)url error:(id *)error;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithParameters:(id)parameters values:(id)values metadata:(id)metadata;
- (id)initWithDictionaryRepresentation:(id)representation error:(id *)error;
- (id)initWithContentsOfURL:(id)url error:(id *)error;
- (BOOL)writeToURL:(id)url error:(id *)error;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)parameterForName:(id)name;
- (id)parameterValueForName:(id)name;
- (BOOL)getContinuousParameterValueForName:(id)name value:(double *)value;
- (BOOL)getIntegralParameterValueForName:(id)name value:(long long *)value;
@end

#endif /* NLParameterBundle_h */
