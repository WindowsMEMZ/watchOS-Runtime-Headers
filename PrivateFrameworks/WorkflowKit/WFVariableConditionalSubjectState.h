//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFVariableConditionalSubjectState_h
#define WFVariableConditionalSubjectState_h
@import Foundation;

#include "WFConditionalSubjectParameterState.h"
#include "WFVariable.h"
#include "WFVariableParameterState.h"
#include "WFVariableSupportingParameterState-Protocol.h"

@class NSString, WFContentProperty;

@interface WFVariableConditionalSubjectState : WFConditionalSubjectParameterState<WFVariableSupportingParameterState>

@property (readonly, nonatomic) WFVariableParameterState *variableState;
@property (readonly, nonatomic) WFContentProperty *effectiveContentProperty;
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)subjectType;

/* instance methods */
- (id)initWithVariableState:(id)state;
- (id)initWithVariable:(id)variable;
- (id)initWithSerializedRepresentation:(id)representation variableProvider:(id)provider parameter:(id)parameter;
- (id)serializedRepresentation;
- (BOOL)isEqual:(id)equal;
- (id)containedVariables;
- (void)getContentWithContext:(id)context completionHandler:(id /* block */)handler;
- (long long)contentType;
- (Class)contentClassProvidingContentProperty;
- (id)supportedComparisonOperators;
- (Class)effectiveContentClass;
- (BOOL)isCaseInsensitive;
- (id)unitType;
- (BOOL)isIrrational;
- (unsigned long long)tense;
- (unsigned long long)displayableTimeUnits;
- (unsigned long long)comparableTimeUnits;
- (BOOL)isEnumeration;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)handler;
- (id)localizedLabelForEnumerationPossibleState:(id)state;
@end

#endif /* WFVariableConditionalSubjectState_h */
