//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFNumberSubstitutableState_h
#define WFNumberSubstitutableState_h
@import Foundation;

#include "WFVariableSubstitutableParameterState.h"

@class NSNumber;

@interface WFNumberSubstitutableState : WFVariableSubstitutableParameterState

@property (readonly, nonatomic) NSNumber *number;

/* class methods */
+ (Class)processingValueClass;
+ (id)valueFromSerializedRepresentation:(id)representation variableProvider:(id)provider parameter:(id)parameter;
+ (id)serializedRepresentationFromValue:(id)value;
+ (id)serializedRepresentationFromNumber:(id)number;

/* instance methods */
- (void)processWithContext:(id)context userInputRequiredHandler:(id /* block */)handler valueHandler:(id /* block */)handler;
- (id)initWithNumber:(id)number;
@end

#endif /* WFNumberSubstitutableState_h */
