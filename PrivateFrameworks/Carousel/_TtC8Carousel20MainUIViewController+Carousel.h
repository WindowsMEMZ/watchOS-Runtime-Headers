//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef _TtC8Carousel20MainUIViewController_Carousel_h
#define _TtC8Carousel20MainUIViewController_Carousel_h
@import Foundation;

#include "UISystemShellApplication.h"
#include "CSLAppSwitcherViewController.h"
#include "CSLApplicationLibraryProviding-Protocol.h"
#include "CSLApplicationServices.h"
#include "CSLBacklightFirstObserver.h"
#include "CSLClockViewController.h"
#include "CSLClockViewControllerProvider-Protocol.h"
#include "CSLControlCenterControlling-Protocol.h"
#include "CSLDefaults.h"
#include "CSLHIDUISensorModeManager.h"
#include "CSLHangTracer.h"
#include "CSLInactiveBacklightSessionManager.h"
#include "CSLKeyWindowFixer.h"
#include "CSLLauncherViewController.h"
#include "CSLMainUIEventHandling-Protocol.h"
#include "CSLMainUIEventLogger.h"
#include "CSLMainUIPolicyHandling-Protocol.h"
#include "CSLMainUISceneVisibilityPolicy.h"
#include "CSLMainUIState.h"
#include "CSLMainUIStateProviding-Protocol.h"
#include "CSLMainUITransforming-Protocol.h"
#include "CSLModalAppManager.h"
#include "CSLNavigationServer.h"
#include "CSLPIButtonHandlerProtocol-Protocol.h"
#include "CSLPICarouselApp-Protocol.h"
#include "CSLPPTCoordinating-Protocol.h"
#include "CSLPresentationBinderCoordinator.h"
#include "CSLSSystemNavigating-Protocol.h"
#include "CSLScreenOffIdleNavigator.h"
#include "CSLScreenOffIdleNavigatorDelegate-Protocol.h"
#include "CSLStartupEvent.h"
#include "CSLSystemStateManager.h"
#include "CSLUIFinalButtonHandler.h"
#include "CSLUIStandardButtonHandler.h"
#include "CSLUIStateProviding-Protocol.h"
#include "CSLWorkspaceRequestHandling-Protocol.h"
#include "CUISScenePresentationCoordinator-Protocol.h"
#include "IOSSHLUIDelegate-Protocol.h"
#include "IOSSHLWorkspaceTransitionRequestValidator-Protocol.h"
#include "IOSSHLWorkspaceUIDelegate-Protocol.h"
#include "UIApplicationDelegate-Protocol.h"
#include "WAGUIHighlightingEffectContextDelegate-Protocol.h"

@class BLSHService, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UIWindow, UIWindowScene, _TtC8Carousel26TransitionRequestGenerator, _TtC8Carousel6MainUI;

@interface Carousel.MainUIViewController (Carousel) <CSLMainUIViewControllerProviding, CSLMainUIStateProviding, CSLMainUIDoSiDoStateProviding, CSLUIStateProviding, CSLMainUIPolicyHandling, CSLMainUITransitioning, CSLPIButtonHandlerOverride, CSLPIButtonHandlerProtocol, CSLLauncherViewControllerDelegate, CSLAppSwitcherViewControllerDelegate, CSLMainUITransitionHosting>
/* instance methods */
- (BOOL)isTransitioning;
- (void)appSwitcherViewController:(id)controller didTapPlatterWithBundleIdentifier:(id)identifier;
- (void)appSwitcherViewControllerDidSwipePastThreshold:(id)threshold;
- (void)appSwitcherViewController:(id)controller didRemoveItemWithBundleIdentifier:(id)identifier;
- (void)launcherViewController:(id)controller tappedItemWithBundleIdentifier:(id)identifier;
- (void)launcherViewController:(id)controller zoomingItemWithBundleIdentifier:(id)identifier withScrollEvent:(id)event;
- (void)launcherViewController:(id)controller warpingToItemWithBundleIdentifier:(id)identifier;
- (void)launcherViewController:(id)controller didUpdateViewMode:(long long)mode;
- (void)launcherViewControllerDismissingToHome:(id)home;
- (void)_wheelChangedWithEvent:(id)event;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type firstDownTime:(unsigned long long)time lastUpTime:(unsigned long long)time;
- (BOOL)handleButton:(unsigned long long)button eventType:(unsigned long long)type;
- (BOOL)preHandleButton:(unsigned long long)button eventType:(unsigned long long)type firstDownTime:(unsigned long long)time lastUpTime:(unsigned long long)time;
- (BOOL)postHandleButton:(unsigned long long)button eventType:(unsigned long long)type firstDownTime:(unsigned long long)time lastUpTime:(unsigned long long)time;
- (void)transitionToState:(id)state forReason:(unsigned long long)reason animated:(BOOL)animated;
- (void)addPolicy:(id)policy;
- (void)removePolicy:(id)policy;
- (void)populateUIState:(id)uistate;
- (id)doSiDoState;
- (id)preSwitcherState;
- (void)setPreSwitcherState:(id)state;
- (id)currentState;
- (id)currentHomeState;
- (id)previousState;
- (id)previousApplicationState;
- (id)mainViewController;
- (id)clockViewController;
- (id)appSwitcherViewController;
- (id)applicationViewControllerCache;
- (id)launcherViewController;
@end

#endif /* _TtC8Carousel20MainUIViewController_Carousel_h */
