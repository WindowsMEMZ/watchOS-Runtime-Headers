//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 827.9.0.0.0
//
#ifndef NCNotificationAction_h
#define NCNotificationAction_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol NCNotificationActionRunner;

@interface NCNotificationAction : NSObject<BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *iconImageName;
@property (readonly, copy, nonatomic) NSString *iconImageBundlePath;
@property (readonly, nonatomic) unsigned long long activationMode;
@property (readonly, copy, nonatomic) NSURL *launchURL;
@property (readonly, copy, nonatomic) NSString *launchBundleID;
@property (readonly, nonatomic) unsigned long long behavior;
@property (readonly, copy, nonatomic) NSDictionary *behaviorParameters;
@property (readonly, nonatomic) NSObject<NCNotificationActionRunner> *actionRunner;
@property (readonly, nonatomic) BOOL systemAction;
@property (readonly, nonatomic) BOOL requiresAuthentication;
@property (readonly, nonatomic) BOOL destructiveAction;
@property (readonly, nonatomic) BOOL shouldDismissNotification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNotificationAction:(id)action;
- (BOOL)isSystemAction;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (BOOL)isDestructiveAction;
@end

#endif /* NCNotificationAction_h */
