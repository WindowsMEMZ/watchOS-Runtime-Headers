//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLDuetEligibilityTracker_h
#define CSLDuetEligibilityTracker_h
@import Foundation;

#include "CSLBackgroundUpdatePolicy.h"
#include "CSLBackgroundUpdatePolicyObserver-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CSLDuetEligibilityTracker : NSObject<CSLBackgroundUpdatePolicyObserver> {
  /* instance variables */
  id _context;
  NSObject<OS_dispatch_queue> *_duetQueue;
}

@property (readonly, weak, nonatomic) CSLBackgroundUpdatePolicy *backgroundUpdatePolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithBackgroundUpdatePolicy:(id)policy;
- (id)init;
- (void)backgroundUpdatePolicyDidChange:(id)change allowed:(id)allowed disallowed:(id)disallowed changed:(id)changed;
- (void)backgroundUpdateForHealthKitWorkPolicyDidChange:(id)change enabled:(id)enabled disabled:(id)disabled changed:(id)changed;
@end

#endif /* CSLDuetEligibilityTracker_h */
