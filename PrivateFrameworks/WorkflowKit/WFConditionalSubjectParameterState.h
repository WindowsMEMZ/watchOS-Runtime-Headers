//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFConditionalSubjectParameterState_h
#define WFConditionalSubjectParameterState_h
@import Foundation;

#include "WFVariable.h"
#include "WFVariableSupportingParameterState-Protocol.h"

@class NSNumber, NSString;

@interface WFConditionalSubjectParameterState : NSObject<WFVariableSupportingParameterState>

@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) NSNumber *maximumLength;
@property (readonly, nonatomic) BOOL caseInsensitive;
@property (readonly, nonatomic) NSNumber *minimumValue;
@property (readonly, nonatomic) NSNumber *maximumValue;
@property (readonly, nonatomic) NSNumber *stepValue;
@property (readonly, nonatomic) BOOL irrational;
@property (readonly, nonatomic) unsigned long long tense;
@property (readonly, nonatomic) unsigned long long displayableTimeUnits;
@property (readonly, nonatomic) unsigned long long comparableTimeUnits;
@property (readonly, nonatomic) NSString *unitType;
@property (readonly, nonatomic) BOOL enumeration;
@property (copy, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) WFVariable *variable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)subjectClasses;
+ (id)subjectType;
+ (Class)processingValueClass;

/* instance methods */
- (id)initWithVariable:(id)variable;
- (id)initWithHomeIdentifier:(id)identifier;
- (id)initWithSerializedRepresentation:(id)representation variableProvider:(id)provider parameter:(id)parameter;
- (id)serializedRepresentation;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)containedVariables;
- (void)getContentWithContext:(id)context completionHandler:(id /* block */)handler;
- (void)processWithContext:(id)context userInputRequiredHandler:(id /* block */)handler valueHandler:(id /* block */)handler;
- (id)supportedComparisonOperators;
- (void)getEnumerationPossibleStatesWithCompletionHandler:(id /* block */)handler;
- (id)localizedLabelForEnumerationPossibleState:(id)state;
- (BOOL)isCaseInsensitive;
- (BOOL)isIrrational;
- (BOOL)isEnumeration;
@end

#endif /* WFConditionalSubjectParameterState_h */
