//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFSetAnnounceNotificationsIntentHandling_Protocol_h
#define WFSetAnnounceNotificationsIntentHandling_Protocol_h
@import Foundation;

@protocol WFSetAnnounceNotificationsIntentHandling <NSObject>
/* instance methods */
- (void)handleSetAnnounceNotifications:(id)notifications completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmSetAnnounceNotifications:(id)notifications completion:(id /* block */)completion;
@end

#endif /* WFSetAnnounceNotificationsIntentHandling_Protocol_h */
