//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassGroupViewVerticalPanAnimator_h
#define PKPassGroupViewVerticalPanAnimator_h
@import Foundation;

#include "PKPassGroupView.h"

@class UIPanGestureRecognizer, _UIDynamicValueAnimation;

@interface PKPassGroupViewVerticalPanAnimator : NSObject {
  /* instance variables */
  BOOL _recognizing;
  _UIDynamicValueAnimation *_dismissAnimation;
  struct _UIUpdateRequest { unsigned int flags; unsigned int minRate; unsigned int preferredRate; unsigned int maxRate; unsigned long long phase; unsigned long long load; } _updateRequest;
  unsigned int _updateReason;
  BOOL _invalidated;
  BOOL _updating;
  PKPassGroupView *_groupView;
  UIPanGestureRecognizer *_gestureRecognizer;
  id /* block */ _updater;
  double _panningViewTargetScale;
  struct CGPoint { double x; double y; } _panningViewStartPosition;
  struct CGPoint { double x; double y; } _panningViewTargetPosition;
}

/* instance methods */
- (id)init;
- (void)dealloc;
@end

#endif /* PKPassGroupViewVerticalPanAnimator_h */
