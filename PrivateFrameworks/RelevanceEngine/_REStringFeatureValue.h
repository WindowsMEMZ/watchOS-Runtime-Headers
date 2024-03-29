//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef _REStringFeatureValue_h
#define _REStringFeatureValue_h
@import Foundation;

#include "REFeatureValue.h"

@class NSString;

@interface _REStringFeatureValue : REFeatureValue {
  /* instance variables */
  NSString *_value;
}

/* class methods */
+ (id)featureValueWithString:(id)string;

/* instance methods */
- (id)initWithValue:(id)value;
- (unsigned long long)type;
- (id)stringValue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)_integralFeatureValue;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* _REStringFeatureValue_h */
