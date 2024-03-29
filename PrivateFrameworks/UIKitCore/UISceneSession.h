//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UISceneSession_h
#define UISceneSession_h
@import Foundation;

#include "BSDebugDescriptionProviding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "UICanvas.h"
#include "UIScene.h"
#include "UISceneConfiguration.h"

@class NSDictionary, NSString, NSUserActivity;

@interface UISceneSession : NSObject<NSCopying, NSMutableCopying, BSDebugDescriptionProviding, NSSecureCoding> {
  /* instance variables */
  struct { unsigned int x :1 _userInfoIsCurrent; unsigned int x :1 _stateRestorationActivityIsDirty; unsigned int x :1 _stateRestorationActivityIsCurrent; unsigned int x :1 _trackingSessionRequest; unsigned int x :1 _configurationIsDirty; unsigned int x :1 _userInfoIsDirty; unsigned int x :1 _isInternal; } _sessionFlags;
}

@property (readonly, nonatomic) UICanvas *representedCanvas;
@property (readonly, nonatomic) long long systemType;
@property (readonly, nonatomic) Class canvasSubclass;
@property (readonly, nonatomic) BOOL _internal;
@property (readonly, nonatomic) BOOL _configurationNeedsReevalulation;
@property (nonatomic) BOOL _trackingRefreshRequest;
@property (nonatomic) BOOL _configurationIsDirty;
@property (nonatomic) BOOL _userInfoIsDirty;
@property (nonatomic) BOOL _stateRestorationActivityIsDirty;
@property (readonly, weak, nonatomic) UIScene *scene;
@property (readonly, nonatomic) NSString *role;
@property (readonly, copy, nonatomic) UISceneConfiguration *configuration;
@property (readonly, nonatomic) NSString *persistentIdentifier;
@property (retain, nonatomic) NSUserActivity *stateRestorationActivity;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultCanvasRepresentation;
+ (id)canvasRepresentationForSystemType:(long long)type;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (Class)delegateClass;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)_init;
- (id)_initWithPersistentIdentifier:(id)identifier sessionRole:(id)role configurationName:(id)name;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)debugDescriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (BOOL)isEqual:(id)equal;
- (void)_setScene:(id)scene;
- (BOOL)_isInternal;
- (void)_updateConfiguration:(id)configuration;
- (void)_resetStateRestorationToActivity:(id)activity;
- (void)_setTrackingRefreshRequest:(BOOL)request;
- (void)_setConfigurationIsDirty:(BOOL)dirty;
- (void)_setUserInfoIsDirty:(BOOL)dirty;
- (void)_setStateRestorationActivityIsDirty:(BOOL)dirty;
- (void)_clearAllDirtyFlags;
- (void)_loadUserInfo;
- (void)_loadStateRestorationActivityIfNeeded;
- (id)_copyWithoutUserInfo;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* UISceneSession_h */
