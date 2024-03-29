//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5.2.12.0.0
//
#ifndef WatchGestureActionBridgingManager_h
#define WatchGestureActionBridgingManager_h
@import Foundation;

@interface WatchGestureActionBridgingManager : NSObject
/* class methods */
+ (BOOL)deviceSupportsElton;
+ (id)primaryGestureInteractionWithHighlightedViewProvider:(id /* block */)provider scrollView:(id)view activationBlock:(id /* block */)block frameProvider:(id /* block */)provider requiresHighlightedViewBlock:(id /* block */)block;
+ (id)primaryGestureInteractionWithScrollView:(id)view activationBlock:(id /* block */)block;
+ (BOOL)isPerformingPrimaryGestureAction;
@end

#endif /* WatchGestureActionBridgingManager_h */
