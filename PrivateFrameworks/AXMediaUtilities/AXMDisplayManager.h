//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 127.1.3.0.0
//
#ifndef AXMDisplayManager_h
#define AXMDisplayManager_h
@import Foundation;

#include "AXMDisplay.h"
#include "FBSDisplayObserving-Protocol.h"

@class FBSDisplayMonitor, NSString;
@protocol OS_dispatch_queue;

@interface AXMDisplayManager : NSObject<FBSDisplayObserving> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  AXMDisplay *_queue_CoreAnimationMainDisplay;
  AXMDisplay *_queue_FrontBoardMainDisplay;
  BOOL _initialized;
}

@property (retain, nonatomic) FBSDisplayMonitor *displayMonitor;
@property (nonatomic) double mobileGestaltOrientation;
@property (readonly, nonatomic) AXMDisplay *frontBoardMainDisplay;
@property (readonly, nonatomic) AXMDisplay *coreAnimationMainDisplay;
@property (readonly, nonatomic) BOOL isInitialized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCompletion:(id /* block */)completion;
- (id)initAndWaitForMainDisplayConfiguration;
- (void)dealloc;
- (id)_displayPropertiesFromMobileGestalt;
- (void)_updateDisplay:(id)display withCADisplay:(id)cadisplay;
- (long long)_discreteOrientationForOrientation:(double)orientation;
- (void)_updateDisplay:(id)display withConfiguration:(id)configuration;
- (void)_updateDisplayPropertiesWithConfiguration:(id)configuration;
- (void)displayMonitor:(id)monitor didConnectIdentity:(id)identity withConfiguration:(id)configuration;
- (void)displayMonitor:(id)monitor didUpdateIdentity:(id)identity withConfiguration:(id)configuration;
- (void)displayMonitor:(id)monitor willDisconnectIdentity:(id)identity;
@end

#endif /* AXMDisplayManager_h */
