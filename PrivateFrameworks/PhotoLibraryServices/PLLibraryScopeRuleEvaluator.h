//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLLibraryScopeRuleEvaluator_h
#define PLLibraryScopeRuleEvaluator_h
@import Foundation;

#include "PLLibraryScopeRuleInterpreter.h"

@class NSArray;

@interface PLLibraryScopeRuleEvaluator : NSObject

@property (retain, nonatomic) PLLibraryScopeRuleInterpreter *interpreter;
@property (retain, nonatomic) NSArray *rules;

/* instance methods */
- (id)initWithRules:(id)rules andInterpreter:(id)interpreter;
- (id)description;
- (id)evaluateObjects:(id)objects withResultEnumerationBlock:(id /* block */)block;
@end

#endif /* PLLibraryScopeRuleEvaluator_h */
