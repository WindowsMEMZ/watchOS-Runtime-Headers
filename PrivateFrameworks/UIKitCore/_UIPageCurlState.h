//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIPageCurlState_h
#define _UIPageCurlState_h
@import Foundation;

#include "_UITransitionState.h"
#include "CAAnimationDelegate-Protocol.h"
#include "UIView.h"
#include "_UIPageCurl.h"

@class NSString;

@interface _UIPageCurlState : _UITransitionState<CAAnimationDelegate> {
  /* instance variables */
  long long _completionCount;
  BOOL _finished;
  BOOL _willComplete;
  id /* block */ _finally;
}

@property (readonly, nonatomic) _UIPageCurl *pageCurl;
@property (readonly, nonatomic) long long curlType;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } initialLocation;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } referenceLocation;
@property (readonly, nonatomic) UIView *frontPageView;
@property (readonly, nonatomic) UIView *backPageView;
@property (readonly, nonatomic) UIView *frontView;
@property (readonly, nonatomic) UIView *backView;
@property (readonly, nonatomic) long long curlState;
@property (readonly, nonatomic) BOOL pendingAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithPageCurl:(id)curl andCurlType:(long long)type fromLocation:(struct CGPoint { double x0; double x1; })location withReferenceLocation:(struct CGPoint { double x0; double x1; })location inDirection:(long long)direction withView:(id)view revealingView:(id)view completion:(id /* block */)completion finally:(id /* block */)finally;
- (void)dealloc;
- (void)invalidatePageCurl;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_pageViewFrame;
- (void)addFrontPageContent;
- (void)addBackPageContent;
- (void)setCurlState:(long long)state willComplete:(BOOL)complete;
- (BOOL)hasPendingAnimations;
- (void)incrementCompletionCount;
- (void)finally;
- (void)cleanupWithFinishedState:(BOOL)state completedState:(BOOL)state;
- (void)cleanup;
- (void)animationDidStop:(id)stop finished:(BOOL)finished;
- (long long)_effectiveTransitionDirection;
- (BOOL)isCompatibleWithCurlOfType:(long long)type inDirection:(long long)direction;
@end

#endif /* _UIPageCurlState_h */
