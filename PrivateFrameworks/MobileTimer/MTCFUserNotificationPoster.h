//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTCFUserNotificationPoster_h
#define MTCFUserNotificationPoster_h
@import Foundation;

@class NSMutableDictionary;

@interface MTCFUserNotificationPoster : NSObject

@property (retain, nonatomic) NSMutableDictionary *notifications;

/* class methods */
+ (id)sharedInstance;
+ (void)postNotificationWithIdentifier:(id)identifier title:(id)title message:(id)message defaultButtonTitle:(id)title otherButtonTitle:(id)title bypassDND:(BOOL)dnd handler:(id /* block */)handler;
+ (void)cancelNotificationsWithIdentifiers:(id)identifiers;

/* instance methods */
- (id)init;
@end

#endif /* MTCFUserNotificationPoster_h */
