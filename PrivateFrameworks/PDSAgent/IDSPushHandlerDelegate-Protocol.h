//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSPushHandlerDelegate_Protocol_h
#define IDSPushHandlerDelegate_Protocol_h
@import Foundation;

@protocol IDSPushHandlerDelegate <NSObject>
@optional
/* instance methods */
- (void)handler:(id)handler pushTokenChanged:(id)changed;
- (void)handler:(id)handler didReceiveMessage:(id)message forTopic:(id)topic fromID:(id)id messageContext:(id)context;
- (void)handler:(id)handler didReceiveMessage:(id)message forUnknownTopic:(id)topic messageContext:(id)context;
- (void)handler:(id)handler receivedOfflineMessagePendingForTopic:(id)topic messageContext:(id)context;
- (void)handler:(id)handler receivedNoStorageResponseForTopic:(id)topic messageContext:(id)context;
- (void)handler:(id)handler isConnectedChanged:(BOOL)changed;
@end

#endif /* IDSPushHandlerDelegate_Protocol_h */
