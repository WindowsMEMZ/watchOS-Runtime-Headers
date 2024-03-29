//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPTopicBlocklist_h
#define PPTopicBlocklist_h
@import Foundation;

#include "PPTrialWrapper.h"

@class _PASCFBurstTrie;
@protocol TRINotificationToken;

@interface PPTopicBlocklist : NSObject {
  /* instance variables */
  _PASCFBurstTrie *_blocklistTrie;
  PPTrialWrapper *_trialWrapper;
  NSObject<TRINotificationToken> *_trialToken;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)initWithTrialWrapper:(id)wrapper;
- (void)dealloc;
- (BOOL)shouldBlock:(id)block;
- (id)indicesOfBlockedTopicsInRecordArray:(id)array;
- (id)indicesOfBlockedTopicsInScoredTopicArray:(id)array;
@end

#endif /* PPTopicBlocklist_h */
