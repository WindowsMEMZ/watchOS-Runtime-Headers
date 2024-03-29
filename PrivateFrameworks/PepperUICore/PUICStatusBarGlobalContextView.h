//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICStatusBarGlobalContextView_h
#define PUICStatusBarGlobalContextView_h
@import Foundation;

#include "UIView.h"
#include "PUICRemoteStatusBarGlobalContextDelegate-Protocol.h"
#include "PUICStatusBarGlobalContext-Protocol.h"

@class NSString, UITapGestureRecognizer;
@protocol OS_dispatch_source;

@interface PUICStatusBarGlobalContextView : UIView<PUICRemoteStatusBarGlobalContextDelegate, PUICStatusBarGlobalContext> {
  /* instance variables */
  BOOL _tookAssertion;
  BOOL _receivedGlobalContextID;
  BOOL _timeIsHidden;
  BOOL _indicatorsAreHidden;
  BOOL _networkActivity;
  NSString *_overrideTime;
  UITapGestureRecognizer *_tapGestureRecognizer;
  NSObject<OS_dispatch_source> *_timer;
}

@property (nonatomic) unsigned long long layoutBehavior;
@property (nonatomic) unsigned long long timeStyle;
@property (nonatomic) BOOL needsPhoneConnectivity;
@property (nonatomic) BOOL suppressAirplaneModeIndicator;
@property (nonatomic) BOOL suppressDisconnectedIndicator;
@property (nonatomic) BOOL suppressChargingIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleFrame;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)_willMoveToWindow:(id)window;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (void)_activityIndicatorChanged:(id)changed;
- (void)_handleStatusBarTap:(id)tap;
- (void)remoteStatusBar:(id)bar receivedNewWidth:(double)width;
- (void)remoteStatusBar:(id)bar receivedStatusBarIsTappable:(BOOL)tappable;
- (void)remoteStatusBarRequestsStateRefresh:(id)refresh;
- (BOOL)isTimeHidden;
- (void)setTimeHidden:(BOOL)hidden animated:(BOOL)animated completion:(id /* block */)completion;
- (BOOL)areIndicatorsHidden;
- (void)setIndicatorsHidden:(BOOL)hidden animated:(BOOL)animated completion:(id /* block */)completion;
- (BOOL)isAirplaneModeIndicatorSuppressed;
- (BOOL)isDisconnectedIndicatorSuppressed;
- (BOOL)isChargingIndicatorSuppressed;
- (void)setHidden:(BOOL)hidden;
- (void)willMoveToSuperview:(id)superview;
- (void)_takeVisibleAssertion;
- (void)_releaseVisibleAssertion;
- (id)properties;
@end

#endif /* PUICStatusBarGlobalContextView_h */
