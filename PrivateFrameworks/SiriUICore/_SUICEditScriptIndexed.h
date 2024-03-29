//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.25.1.0.0
//
#ifndef _SUICEditScriptIndexed_h
#define _SUICEditScriptIndexed_h
@import Foundation;

#include "_SUICEditScript.h"
#include "_SUICAtomIndexed.h"

@interface _SUICEditScriptIndexed : _SUICEditScript {
  /* instance variables */
  _SUICAtomIndexed *_currentScriptAtom;
}

/* class methods */
+ (id)editScriptFromArray:(id)array toArray:(id)array;
+ (id)editScriptFromArray:(id)array toArray:(id)array orderAtomsAscending:(BOOL)ascending operationPrecedence:(long long)precedence;

/* instance methods */
- (id)initWithOperationPrecedence:(long long)precedence dataClass:(Class)class fromArray:(id)array toArray:(id)array orderAtomsAscending:(BOOL)ascending;
- (id)applyToArray:(id)array;
- (void)initializeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)operation editIndex:(unsigned long long)index newText:(id)text indexInArrayB:(unsigned long long)b;
- (void)finalizeCurrentScriptAtom;
@end

#endif /* _SUICEditScriptIndexed_h */
