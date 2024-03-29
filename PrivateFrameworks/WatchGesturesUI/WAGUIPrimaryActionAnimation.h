//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 114.2.2.0.0
//
#ifndef WAGUIPrimaryActionAnimation_h
#define WAGUIPrimaryActionAnimation_h
@import Foundation;

#include "CSLPIButtonObserver-Protocol.h"
#include "WAGUIPrimaryActionDeactiveAnimation.h"
#include "WAGUISpringClientSideAnimation.h"

@class CSLSButtonTapAssertion, NSString, NSTimer;

@interface WAGUIPrimaryActionAnimation : NSObject<CSLPIButtonObserver> {
  /* instance variables */
  WAGUISpringClientSideAnimation *_highlightingAnimation;
  WAGUIPrimaryActionDeactiveAnimation *_unhighlightingAnimation;
  double _initialHighlightingViewProgress;
  double _initialOverlayViewHighlightingProgress;
  double _initialOverlayViewRingProgress;
  double _currentHighlightingViewProgress;
  double _currentOverlayViewHighlightingProgress;
  double _currentOverlayViewRingProgress;
  BOOL _highlightingAnimationCompleted;
  BOOL _isContinuous;
  NSTimer *_actionDelayTimer;
  CSLSButtonTapAssertion *_buttonAssertion;
}

@property (copy, nonatomic) id /* block */ didUpdateStateBlock;
@property (copy, nonatomic) id /* block */ highlightingViewProgressUpdate;
@property (copy, nonatomic) id /* block */ overlayHighlightingProgressUpdate;
@property (copy, nonatomic) id /* block */ overallProgressUpdate;
@property (copy, nonatomic) id /* block */ isActiveCallback;
@property (readonly, nonatomic) double highlightingViewProgress;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)createSpringAnimationWithType:(unsigned long long)type;

/* instance methods */
- (void)dealloc;
- (void)beginWithIsContinuous:(BOOL)continuous;
- (void)cancel;
- (void)stop;
- (void)reset;
- (void)_startHighlightingAnimation;
- (void)_startCancellingAnimation;
- (void)_setViewProgressWithHighlightingViewProgress:(double)progress overlayViewHighlightingProgress:(double)progress isReversed:(BOOL)reversed;
- (void)_snapshotAnimationStates;
- (void)_checkIfAnimationHasCompleted;
- (void)_triggerAction;
- (void)_startCompletionAnimation;
- (void)_startMonitoringCrownPressEvent;
- (void)_stopMonitoringCrownPressEvent;
- (void)buttonWillPost:(unsigned long long)post eventType:(unsigned long long)type firstDownTime:(unsigned long long)time lastUpTime:(unsigned long long)time;
@end

#endif /* WAGUIPrimaryActionAnimation_h */
