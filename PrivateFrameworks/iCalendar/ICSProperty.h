//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef ICSProperty_h
#define ICSProperty_h
@import Foundation;

#include "ICSWriting-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary;

@interface ICSProperty : NSObject<NSSecureCoding, ICSWriting> {
  /* instance variables */
  NSMutableDictionary *_parameters;
  unsigned long long _type;
  id _value;
}

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)valueAndParameterClasses;

/* instance methods */
- (void)addParameter:(id)parameter withRawValue:(id)value options:(unsigned long long)options;
- (void)_setParsedValues:(id)values type:(unsigned long long)type;
- (void)setValueAsProperty:(id)property withRawValue:(const char *)value options:(unsigned long long)options;
- (void)_ICSStringWithOptions:(unsigned long long)options appendingToString:(id)string additionalParameters:(id)parameters;
- (void)_appendDateTimeInDate:(id)date asUTCToResult:(id)result;
- (void)_ICSStringWithOptions:(unsigned long long)options appendingToString:(id)string;
- (BOOL)isMultiValued;
- (unsigned long long)type;
- (id)value;
- (id)parameterValueForName:(id)name;
- (void)addParametersFromDictionary:(id)dictionary;
- (void)setParameters:(id)parameters;
- (void)setParameterValue:(id)value forName:(id)name;
- (void)removeParameterValueForName:(id)name;
- (id)ICSStringWithOptions:(unsigned long long)options;
- (void)ICSStringWithOptions:(unsigned long long)options appendingToString:(id)string;
- (id)propertiesToIncludeForChecksumVersion:(int)version;
- (id)parametersToIncludeForChecksumVersion:(int)version;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)version;
- (id)propertiesToObscure;
- (id)propertiesToHide;
- (BOOL)shouldObscureParameter:(id)parameter;
- (BOOL)shouldObscureValue;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)allParameters;
- (id)initWithValue:(id)value type:(unsigned long long)type;
- (void)setValue:(id)value type:(unsigned long long)type;
- (BOOL)alwaysHasParametersToSerialize;
- (id)parameters;
- (id)stringValue;
- (id)description;
@end

#endif /* ICSProperty_h */
