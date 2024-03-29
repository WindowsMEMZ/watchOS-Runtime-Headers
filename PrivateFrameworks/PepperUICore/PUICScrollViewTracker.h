//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICScrollViewTracker_h
#define PUICScrollViewTracker_h
@import Foundation;

#include "_UIScrollViewTracker_ForPUICOnly-Protocol.h"

@interface PUICScrollViewTracker : NSObject<_UIScrollViewTracker_ForPUICOnly>
/* class methods */
+ (void)startTrackingScrollViews;
+ (void)stopTrackingScrollViews;

/* instance methods */
- (void)_scrollViewDidBecomeFirstResponder:(id)responder;
- (void)_scrollViewDidResignFirstResponder:(id)responder;
- (void)_scrollView:(id)view willMoveToWindow:(id)window;
- (void)_addDetentsToScrollView:(id)view;
- (void)_removeDetentsFromScrollView:(id)view;
@end

#endif /* PUICScrollViewTracker_h */
