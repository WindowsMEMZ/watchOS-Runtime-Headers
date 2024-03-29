//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIImmediateEdgeSwipeGestureRecognizer_h
#define UIImmediateEdgeSwipeGestureRecognizer_h
@import Foundation;

#include "UIGestureRecognizer.h"

@interface UIImmediateEdgeSwipeGestureRecognizer : UIGestureRecognizer
/* instance methods */
- (void)_processTouches:(id)touches withEvent:(id)event;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
@end

#endif /* UIImmediateEdgeSwipeGestureRecognizer_h */
