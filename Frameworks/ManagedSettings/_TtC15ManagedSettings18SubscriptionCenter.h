//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 140.0.0.0.0
//
#ifndef _TtC15ManagedSettings18SubscriptionCenter_h
#define _TtC15ManagedSettings18SubscriptionCenter_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"
#include "_TtP15ManagedSettings30ManagedSettingsSubscriberProxy_-Protocol.h"

@interface ManagedSettings.SubscriptionCenter : Swift._SwiftObject<ManagedSettings.ManagedSettingsSubscriberProxy> { // (Swift)
  /* instance variables */
   currentConnection;
   connectionLock;
   effectiveSubject;
   effectiveSubscriptions;
   subscriptionLock;
}

/* instance methods */
- (void)effectiveSettingsChangedForGroups:(id)groups;
@end

#endif /* _TtC15ManagedSettings18SubscriptionCenter_h */
