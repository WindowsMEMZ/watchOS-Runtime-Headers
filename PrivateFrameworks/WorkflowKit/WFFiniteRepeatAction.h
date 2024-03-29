//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFFiniteRepeatAction_h
#define WFFiniteRepeatAction_h
@import Foundation;

#include "WFRepeatAction.h"

@interface WFFiniteRepeatAction : WFRepeatAction {
  /* instance variables */
  unsigned long long _numberOfLoops;
}

/* instance methods */
- (BOOL)shouldRepeatWithVariableSource:(id)source;
- (void)resetEvaluationCriteriaWithVariableSource:(id)source;
- (void)runWithInput:(id)input userInterface:(id)interface runningDelegate:(id)delegate variableSource:(id)source workQueue:(id)queue completionHandler:(id /* block */)handler;
- (id)outputVariableWithVariableProvider:(id)provider UUIDProvider:(id)uuidprovider;
- (id)repeatInputVariableName;
- (id)repeatCountVariableName;
- (void)setRepeatInput:(id)input withVariableSource:(id)source;
- (id)repeatInputWithVariableSource:(id)source;
- (void)setRepeatCount:(long long)count withVariableSource:(id)source;
- (long long)repeatCountWithVariableSource:(id)source;
- (void)runWithInput:(id)input error:(id *)error;
- (unsigned long long)numberOfLoops;
@end

#endif /* WFFiniteRepeatAction_h */
