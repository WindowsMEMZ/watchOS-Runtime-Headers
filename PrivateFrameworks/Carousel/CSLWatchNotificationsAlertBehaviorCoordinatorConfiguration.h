//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLWatchNotificationsAlertBehaviorCoordinatorConfiguration_h
#define CSLWatchNotificationsAlertBehaviorCoordinatorConfiguration_h
@import Foundation;

#include "CSLClockAssertion.h"
#include "CSLClockFaceStatusViewServer.h"
#include "CSLHangTracer.h"
#include "IOSSHLWorkspace.h"
#include "NSCopying-Protocol.h"

@class CUISEventFocusManager, FBMainDisplayLayoutPublisher, UIApplicationSceneDeactivationManager;

@interface CSLWatchNotificationsAlertBehaviorCoordinatorConfiguration : NSObject<NSCopying>

@property (retain, nonatomic) CUISEventFocusManager *focusManager;
@property (retain, nonatomic) FBMainDisplayLayoutPublisher *layoutPublisher;
@property (nonatomic) long long layoutElementLevel;
@property (retain, nonatomic) IOSSHLWorkspace *workspace;
@property (retain, nonatomic) CSLHangTracer *hangTracer;
@property (retain, nonatomic) CSLClockAssertion *alertContainerClockAssertion;
@property (retain, nonatomic) UIApplicationSceneDeactivationManager *sceneDeactivationManager;
@property (weak, nonatomic) id carouselAlertManager;
@property (retain, nonatomic) CSLClockFaceStatusViewServer *statusViewServer;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CSLWatchNotificationsAlertBehaviorCoordinatorConfiguration_h */
