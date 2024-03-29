//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFForEachRepeatAction_h
#define WFForEachRepeatAction_h
@import Foundation;

#include "WFRepeatAction.h"

@interface WFForEachRepeatAction : WFRepeatAction {
  /* instance variables */
  unsigned long long _numberOfLoops;
}

/* instance methods */
- (BOOL)shouldRepeatWithVariableSource:(id)source;
- (void)resetEvaluationCriteriaWithVariableSource:(id)source;
- (void)setRepeatCollection:(id)collection withVariableSource:(id)source;
- (id)repeatCollectionWithVariableSource:(id)source;
- (void)runWithInput:(id)input error:(id *)error;
- (BOOL)shouldBeSuggestedAfterAction:(id)action inWorkflow:(id)workflow;
- (id)outputVariableWithVariableProvider:(id)provider UUIDProvider:(id)uuidprovider;
- (id)inheritedOutputContentClassesInWorkflow:(id)workflow context:(id)context;
- (id)itemVariableName;
- (id)itemVariableNameWithScopeLevel:(unsigned long long)level;
- (id)providedVariableNames;
- (unsigned long long)numberOfLoops;
@end

#endif /* WFForEachRepeatAction_h */
