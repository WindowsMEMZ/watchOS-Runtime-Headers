//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.5.0.0.0
//
#ifndef EAEmergencyAlertCenter_h
#define EAEmergencyAlertCenter_h
@import Foundation;

@class UNUserNotificationCenter;

@interface EAEmergencyAlertCenter : NSObject {
  /* instance variables */
  UNUserNotificationCenter *_userNotificationCenter;
}

/* instance methods */
- (id)init;
- (id)initWithUserNotificationCenter:(id)center;
- (void)replaceContentForRequestWithRequestID:(id)id replacementContent:(id)content completionHandler:(id /* block */)handler;
- (id)getUpdatedNotificationForAppleSafetyAlert:(id)alert withMessageDictionary:(id)dictionary;
- (void)handleAppleSafetyAlertMessage:(id)message;
- (id)handleCellBroadcastMessage:(id)message withCompletionHandler:(id /* block */)handler;
- (void)handleRawCellBroadcastMessage:(id)message withCompletionHandler:(id /* block */)handler;
- (unsigned long long)currentAudioAndVideoCallCount;
- (void)addNotificationRequest:(id)request withCompletionHandler:(id /* block */)handler;
@end

#endif /* EAEmergencyAlertCenter_h */
