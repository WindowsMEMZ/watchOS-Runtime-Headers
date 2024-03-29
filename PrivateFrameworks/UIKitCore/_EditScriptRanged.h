//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _EditScriptRanged_h
#define _EditScriptRanged_h
@import Foundation;

#include "_EditScript.h"
#include "_EditScriptRangedAtom.h"

@class NSString;

@interface _EditScriptRanged : _EditScript {
  /* instance variables */
  long long _options;
  _EditScriptRangedAtom *_currentScriptAtom;
}

@property (readonly, nonatomic) NSString *stringA;
@property (readonly, nonatomic) NSString *stringB;

/* class methods */
+ (id)editScriptFromString:(id)string toString:(id)string;
+ (id)editScriptFromString:(id)string toString:(id)string chunkSize:(long long)size orderAtomsAscending:(BOOL)ascending operationPrecedence:(long long)precedence options:(long long)options;
+ (id)editScriptForSmallestSingleEditFromString:(id)string toString:(id)string;

/* instance methods */
- (id)initWithOperationPrecedence:(long long)precedence dataClass:(Class)class chunkSize:(long long)size stringA:(id)a stringB:(id)b orderAtomsAscending:(BOOL)ascending options:(long long)options;
- (id)applyToString:(id)string;
- (void)initializeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)operation editIndex:(unsigned long long)index newText:(id)text indexInArrayB:(unsigned long long)b;
- (void)finalizeCurrentScriptAtom;
- (void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long *)difference andReverseIndexOfLastDifference:(long long *)difference shouldShortenFirstDifference:(BOOL)difference;
- (void)computeSmallestSingleEdit;
@end

#endif /* _EditScriptRanged_h */
