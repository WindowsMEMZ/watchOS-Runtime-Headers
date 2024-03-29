//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1502.1.1.3.0
//
#ifndef CALNXPCActivityScheduler_h
#define CALNXPCActivityScheduler_h
@import Foundation;

#include "CALNActivityScheduler-Protocol.h"
#include "CALNActivitySchedulerDelegate-Protocol.h"

@class NSString;
@protocol OS_xpc_object;

@interface CALNXPCActivityScheduler : NSObject<CALNActivityScheduler> {
  /* instance variables */
  NSString *_activityIdentifier;
  NSObject<OS_xpc_object> *_otherCriteria;
}

@property (weak, nonatomic) NSObject<CALNActivitySchedulerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithActivityIdentifier:(id)identifier otherCriteria:(id)criteria;
- (void)unschedule;
- (void)scheduleWithTimeInterval:(long long)interval gracePeriod:(long long)period;
@end

#endif /* CALNXPCActivityScheduler_h */
