//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUICompositeAlertPresentationPolicy_h
#define WNUICompositeAlertPresentationPolicy_h
@import Foundation;

#include "WNUIAlertPresentationPolicy-Protocol.h"

@class NSArray, NSString;

@interface WNUICompositeAlertPresentationPolicy : NSObject<WNUIAlertPresentationPolicy> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) unsigned long long defaultRule;
@property (copy) NSArray *policies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithPolicies:(id)policies defaultRule:(unsigned long long)rule;
- (void)updatePoliciesWithBlock:(id /* block */)block;
- (unsigned long long)presentationRuleForExistingAlertItem:(id)item incomingAlertItem:(id)item;
- (unsigned long long)dismissalRuleForAlertItem:(id)item;
@end

#endif /* WNUICompositeAlertPresentationPolicy_h */
