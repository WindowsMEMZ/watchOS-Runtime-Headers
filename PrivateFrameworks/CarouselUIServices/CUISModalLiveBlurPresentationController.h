//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISModalLiveBlurPresentationController_h
#define CUISModalLiveBlurPresentationController_h
@import Foundation;

#include "UIPresentationController.h"
#include "CUISVisualEffectView.h"

@interface CUISModalLiveBlurPresentationController : UIPresentationController {
  /* instance variables */
  CUISVisualEffectView *_liveBlurView;
}

/* instance methods */
- (long long)presentationStyle;
- (void)presentationTransitionWillBegin;
- (void)dismissalTransitionDidEnd:(BOOL)end;
- (BOOL)shouldRemovePresentersView;
@end

#endif /* CUISModalLiveBlurPresentationController_h */
