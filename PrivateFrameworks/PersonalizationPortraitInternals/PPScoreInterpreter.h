//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPScoreInterpreter_h
#define PPScoreInterpreter_h
@import Foundation;

#include "PPBaseScoreInputSet.h"
#include "PPScoreInterpreterBytecode.h"

@class _PASLock;

@interface PPScoreInterpreter : NSObject {
  /* instance variables */
  PPScoreInterpreterBytecode *_bytecode;
  PPBaseScoreInputSet *_scoreInputSet;
  _PASLock *_reusableContext;
}

/* class methods */
+ (id)scoreInterpreterFromAsset:(id)asset;
+ (id)scoreInterpreterFromFactorName:(id)name namespaceName:(id)name;

/* instance methods */
- (id)init;
- (id)initWithParseRoot:(id)root scalarSubscoreCount:(unsigned long long)count arraySubscoreCount:(unsigned long long)count objectSubscoreCount:(unsigned long long)count;
- (id)initWithBytecode:(id)bytecode;
- (id)initWithBytecode:(id)bytecode scoreInputSet:(id)set;
- (void)evaluateWithPreviousStageSubscores:(id)subscores scoreInputInitializationBlock:(id /* block */)block scoreInputAssignmentBlock:(id /* block */)block outputBlock:(id /* block */)block;
- (void)cleanupReusableComponents;
- (id)evaluateWithScoreInputs:(id)inputs previousSubscores:(id)subscores;
- (id)evaluateWithScoreInputs:(id)inputs;
@end

#endif /* PPScoreInterpreter_h */
