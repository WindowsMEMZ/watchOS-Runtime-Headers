//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1158.1.1.0.0
//
#ifndef ICSMultiValueProperty_h
#define ICSMultiValueProperty_h
@import Foundation;

#include "ICSProperty.h"

@interface ICSMultiValueProperty : ICSProperty
/* instance methods */
- (void)_setParsedValues:(id)values type:(unsigned long long)type;
- (void)_ICSStringWithOptions:(unsigned long long)options appendingToString:(id)string;
- (id)initWithValue:(id)value type:(unsigned long long)type;
- (BOOL)isMultiValued;
- (id)value;
- (void)setValue:(id)value type:(unsigned long long)type;
- (id)values;
- (void)setValues:(id)values valueType:(unsigned long long)type;
@end

#endif /* ICSMultiValueProperty_h */
