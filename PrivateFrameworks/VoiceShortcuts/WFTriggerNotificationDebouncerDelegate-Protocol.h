//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFTriggerNotificationDebouncerDelegate_Protocol_h
#define WFTriggerNotificationDebouncerDelegate_Protocol_h
@import Foundation;

@protocol WFTriggerNotificationDebouncerDelegate <NSObject>
/* instance methods */
- (void)postNotificationForTrigger:(id)trigger workflowReference:(id)reference pendingTriggerEventIDs:(id)ids;
@end

#endif /* WFTriggerNotificationDebouncerDelegate_Protocol_h */
