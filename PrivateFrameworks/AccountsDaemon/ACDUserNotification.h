//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACDUserNotification_h
#define ACDUserNotification_h
@import Foundation;

@interface ACDUserNotification : NSObject
/* class methods */
+ (void)showUserNotificationWithTitle:(id)title message:(id)message cancelButtonTitle:(id)title otherButtonTitle:(id)title withCompletionBlock:(id /* block */)block;
+ (void)showUserNotificationWithTitle:(id)title message:(id)message cancelButtonTitle:(id)title otherButtonTitle:(id)title level:(unsigned long long)level withCompletionBlock:(id /* block */)block;
@end

#endif /* ACDUserNotification_h */
