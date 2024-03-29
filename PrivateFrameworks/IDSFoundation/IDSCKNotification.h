//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSCKNotification_h
#define IDSCKNotification_h
@import Foundation;

@class NSString;

@interface IDSCKNotification : NSObject

@property (readonly, nonatomic) long long notificationType;
@property (readonly, copy, nonatomic) NSString *subscriptionID;

/* class methods */
+ (Class)__class;
+ (id)notificationFromRemoteNotificationDictionary:(id)dictionary;

/* instance methods */
@end

#endif /* IDSCKNotification_h */
