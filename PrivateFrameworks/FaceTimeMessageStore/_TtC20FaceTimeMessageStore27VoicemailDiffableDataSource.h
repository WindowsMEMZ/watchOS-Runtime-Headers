//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef _TtC20FaceTimeMessageStore27VoicemailDiffableDataSource_h
#define _TtC20FaceTimeMessageStore27VoicemailDiffableDataSource_h
@import Foundation;

#include "_TtCs12_SwiftObject.h"

@interface FaceTimeMessageStore.VoicemailDiffableDataSource : Swift._SwiftObject { // (Swift)
  /* instance variables */
   voicemailsInserted;
   voicemailsDeleted;
   voicemailsChanged;
   voicemailDataSource;
   queue;
   isPerformingDiff;
   notificationsReceived;
}

/* instance methods */
- (void)voicemailsChangedHandlerWithNotification:(id)notification;
@end

#endif /* _TtC20FaceTimeMessageStore27VoicemailDiffableDataSource_h */
