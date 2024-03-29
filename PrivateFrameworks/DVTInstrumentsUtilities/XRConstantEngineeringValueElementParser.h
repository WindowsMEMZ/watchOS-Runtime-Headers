//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef XRConstantEngineeringValueElementParser_h
#define XRConstantEngineeringValueElementParser_h
@import Foundation;

#include "XRXMLSimpleStringElementParser.h"
#include "XRConstantEngineeringValue.h"

@class NSMutableArray;

@interface XRConstantEngineeringValueElementParser : XRXMLSimpleStringElementParser {
  /* instance variables */
  NSMutableArray *_fields;
}

@property (readonly, nonatomic) XRConstantEngineeringValue *parsedValue;

/* class methods */
+ (id)_elementNameToClassMap;

/* instance methods */
- (void)setValue:(id)value forElementName:(id)name;
- (void)_handleCompletion;
@end

#endif /* XRConstantEngineeringValueElementParser_h */
