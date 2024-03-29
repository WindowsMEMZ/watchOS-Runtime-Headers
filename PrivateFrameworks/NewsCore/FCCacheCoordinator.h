//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCCacheCoordinator_h
#define FCCacheCoordinator_h
@import Foundation;

#include "FCCacheCoordinatorDelegate-Protocol.h"
#include "FCCacheCoordinatorFlushPolicy.h"
#include "FCCacheCoordinatorLocking-Protocol.h"
#include "FCOperationThrottler-Protocol.h"
#include "FCOperationThrottlerDelegate-Protocol.h"
#include "FCThreadSafeMutableDictionary.h"

@class NFUnfairLock, NSCountedSet, NSMutableSet, NSSet, NSString;

@interface FCCacheCoordinator : NSObject<FCOperationThrottlerDelegate> {
  /* instance variables */
  BOOL _flushingEnabled;
  NSMutableSet *_storedKeys;
  NSCountedSet *_interestedKeys;
  FCThreadSafeMutableDictionary *_cacheHintsByKey;
  NFUnfairLock *_interestLock;
  NSObject<FCCacheCoordinatorLocking> *_underlyingLock;
  NSObject<FCOperationThrottler> *_flushThrottler;
  FCCacheCoordinatorFlushPolicy *_flushPolicy;
}

@property (weak, nonatomic) NSObject<FCCacheCoordinatorDelegate> *delegate;
@property (readonly, nonatomic) NSSet *keysWithZeroInterest;
@property (readonly, nonatomic) NSSet *keysWithNonZeroInterest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)setupWithInitialKeys:(id)keys;
- (void)setupWithInitialKeys:(id)keys persistedHints:(id)hints;
- (id)holdTokenForKey:(id)key;
- (id)holdTokenForKeys:(id)keys;
- (id)holdTokensForKeys:(id)keys;
- (void)performCacheRead:(id /* block */)read;
- (void)performCacheWrite:(id /* block */)write;
- (BOOL)cacheContainsKey:(id)key;
- (void)didInsertKeyIntoCache:(id)cache;
- (void)didInsertKeyIntoCache:(id)cache withLifetimeHint:(long long)hint;
- (void)didInsertKeysIntoCache:(id)cache withLifetimeHints:(id)hints;
- (void)didRemoveKeysFromCache:(id)cache;
- (id)persistableHints;
- (void)enableFlushingWithPolicy:(id)policy;
- (void)operationThrottlerPerformOperation:(id)operation;
@end

#endif /* FCCacheCoordinator_h */
