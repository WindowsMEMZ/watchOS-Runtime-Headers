//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NSMutableDictionary_FCAccountActionQueue_h
#define NSMutableDictionary_FCAccountActionQueue_h
@import Foundation;

#include "FCPersistentDictionary.h"

@interface NSMutableDictionary (FCAccountActionQueue)
/* instance methods */
- (void)fc_safelySetObject:(id)object forKey:(id)key;
- (void)fc_transformValuesWithKeyAndValueBlock:(id /* block */)block;
- (void)fc_safelySetObjectAllowingNil:(id)nil forKeyAllowingNil:(id)nil;
- (void)fc_safelySetObjectAllowingNil:(id)nil forKey:(id)key;
- (void)fc_removeObjectsForKeysNotInArray:(id)array;
- (void)fc_removeObjectsForKeysNotInSet:(id)set;
- (void)fc_removeObjectsForKeysPassingTest:(id /* block */)test;
- (void)fc_mergeWithDictionary:(id)dictionary withValueCombiner:(id /* block */)combiner;
- (void)fc_enqueueTransaction:(id)transaction withMaxTransactionCount:(unsigned long long)count;
- (id)fc_dequeueTransactions;
- (void)fc_setLocalDataHintIfNeeded:(BOOL)needed;
- (BOOL)fc_enqueueActionType:(long long)type;
- (void)fc_popActionTypesUpToCount:(unsigned long long)count;
@end

#endif /* NSMutableDictionary_FCAccountActionQueue_h */
