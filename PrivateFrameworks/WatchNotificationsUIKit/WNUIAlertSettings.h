//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertSettings_h
#define WNUIAlertSettings_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"

@class NSString;

@interface WNUIAlertSettings : NSObject<BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) long long activationState;
@property (readonly, nonatomic) BOOL suppressed;
@property (readonly, nonatomic) BOOL screenOn;
@property (readonly, nonatomic) BOOL alertOccluded;
@property (readonly, nonatomic) unsigned long long lastSentLifecycleAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)settingsForAlertWithIdentity:(id)identity inModel:(id)model systemState:(id)state;

/* instance methods */
- (id)initWithSettings:(id)settings;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (BOOL)isSuppressed;
- (BOOL)isScreenOn;
- (BOOL)isAlertOccluded;
@end

#endif /* WNUIAlertSettings_h */
