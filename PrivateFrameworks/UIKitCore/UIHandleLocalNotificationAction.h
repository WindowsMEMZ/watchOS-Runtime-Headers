//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIHandleLocalNotificationAction_h
#define UIHandleLocalNotificationAction_h
@import Foundation;

#include "BSAction.h"
#include "UILocalNotification.h"

@class NSDictionary, NSString;

@interface UIHandleLocalNotificationAction : BSAction

@property (readonly, copy, nonatomic) UILocalNotification *notification;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSDictionary *userResponse;

/* instance methods */
- (id)_initWithNotification:(id)notification action:(id)action userResponse:(id)response type:(long long)type withHandler:(id /* block */)handler;
- (id)initWithNotification:(id)notification;
- (id)initWithNotification:(id)notification withHandler:(id /* block */)handler;
- (id)initWithNotification:(id)notification action:(id)action withHandler:(id /* block */)handler;
- (id)initWithNotification:(id)notification action:(id)action userResponse:(id)response withHandler:(id /* block */)handler;
- (id)initWithInfo:(id)info timeout:(double)timeout forResponseOnQueue:(id)queue withHandler:(id /* block */)handler;
- (long long)UIActionType;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* UIHandleLocalNotificationAction_h */
