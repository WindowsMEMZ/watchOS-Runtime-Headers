//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIFocusUpdateRequest_h
#define _UIFocusUpdateRequest_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UIFocusAnimationCoordinator.h"
#include "UIFocusEnvironment-Protocol.h"
#include "UIFocusSystem.h"
#include "_UIFocusUpdateRequesting-Protocol.h"

@class NSString;

@interface _UIFocusUpdateRequest : NSObject<_UIFocusUpdateRequesting, NSCopying>

@property (readonly, nonatomic) BOOL isFocusRemovalRequest;
@property (nonatomic) BOOL shouldPlayFocusSound;
@property (nonatomic) BOOL allowsFocusingCurrentItem;
@property (nonatomic) BOOL allowsOverridingPreferedFocusEnvironments;
@property (retain, nonatomic) UIFocusAnimationCoordinator *animationCoordinator;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *environment;
@property (nonatomic) BOOL allowsDeferral;
@property (nonatomic) BOOL scrollIfNecessary;
@property (readonly, weak, nonatomic) UIFocusSystem *focusSystem;
@property (readonly, nonatomic) BOOL movementRequest;
@property (readonly, nonatomic) BOOL requiresNextFocusedItem;
@property (readonly, nonatomic) BOOL requiresEnvironmentValidation;
@property (readonly, nonatomic) BOOL shouldPerformHapticFeedback;
@property (readonly, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)requestForRemovingFocusInFocusSystem:(id)system;

/* instance methods */
- (id)init;
- (id)initWithEnvironment:(id)environment;
- (id)initWithFocusSystem:(id)system environment:(id)environment;
- (id)requestByRedirectingRequestToEnvironment:(id)environment;
- (id)requestByRedirectingRequestToNextContainerEnvironment;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)canMergeWithRequest:(id)request;
- (id)requestByMergingWithRequest:(id)request;
- (void)cacheCurrentFocusSystem;
- (BOOL)isValidInFocusSystem:(id)system;
- (BOOL)isMovementRequest;
- (BOOL)shouldScrollIfNecessary;
@end

#endif /* _UIFocusUpdateRequest_h */
