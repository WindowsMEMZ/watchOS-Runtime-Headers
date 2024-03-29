//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 13.0.0.0.0
//
#ifndef SCRTokenBucketBudget_h
#define SCRTokenBucketBudget_h
@import Foundation;

#include "SCRGovernor-Protocol.h"

@class NSDate, NSString;

@interface SCRTokenBucketBudget : NSObject<SCRGovernor> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  double _capacity;
  double _singleTokenInterval;
  double _tokenCount;
  NSDate *_lastCountUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBucketCapacity:(double)capacity refreshInterval:(double)interval;
- (void)_simulateTimePassing:(double)passing;
- (void)_locked_updateTokenCountForTimeElapsed;
- (BOOL)taskAdministrator:(id)administrator isEligibleToPerformTask:(id)task eligiblityError:(id *)error;
- (void)taskAdministrator:(id)administrator willPerformTask:(id)task;
@end

#endif /* SCRTokenBucketBudget_h */
