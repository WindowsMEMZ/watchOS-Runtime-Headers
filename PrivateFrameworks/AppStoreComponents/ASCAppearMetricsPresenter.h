//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 6.2.9.0.0
//
#ifndef ASCAppearMetricsPresenter_h
#define ASCAppearMetricsPresenter_h
@import Foundation;

#include "ASCMetrics.h"
#include "ASCMetricsActivity.h"
#include "ASCMetricsScrollObserver.h"
#include "ASCMetricsScrollObserverDelegate-Protocol.h"
#include "ASCViewModel-Protocol.h"

@class NSNotificationCenter, NSString, UIView;

@interface ASCAppearMetricsPresenter : NSObject<ASCMetricsScrollObserverDelegate>

@property (readonly, nonatomic) ASCMetrics *metrics;
@property (nonatomic) BOOL appeared;
@property (nonatomic) BOOL settingModel;
@property (retain, nonatomic) ASCMetricsScrollObserver *scrollObserver;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (nonatomic) BOOL enteringBackground;
@property (nonatomic) BOOL enteringForeground;
@property (readonly, nonatomic) BOOL canAppear;
@property (readonly, nonatomic) BOOL canDisappear;
@property (readonly, weak, nonatomic) UIView *view;
@property (copy, nonatomic) ASCMetricsActivity *activity;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSObject<ASCViewModel> *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)log;

/* instance methods */
- (id)initWithView:(id)view metrics:(id)metrics notificationCenter:(id)center;
- (id)initWithView:(id)view;
- (void)dealloc;
- (void)hostDidEnterBackground;
- (void)hostWillEnterForeground;
- (void)viewDidMoveToWindow;
- (void)viewDidSetHidden;
- (void)viewDidAction;
- (void)viewDidEndRenderWithPredicate:(id)predicate;
- (void)viewDidFailRequest:(id)request withError:(id)error;
- (void)viewDidRetryFailedRequest;
- (void)appearIfNeeded;
- (void)disappearIfNeeded;
- (void)scrollViewDidScroll:(id)scroll;
- (BOOL)isEnabled;
- (BOOL)isAppeared;
- (BOOL)isSettingModel;
- (BOOL)isEnteringBackground;
- (BOOL)isEnteringForeground;
@end

#endif /* ASCAppearMetricsPresenter_h */
