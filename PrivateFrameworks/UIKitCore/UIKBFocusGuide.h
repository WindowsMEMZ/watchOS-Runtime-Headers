//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBFocusGuide_h
#define UIKBFocusGuide_h
@import Foundation;

#include "UIFocusGuide.h"
#include "UIKBFocusGuideDelegate-Protocol.h"

@interface UIKBFocusGuide : UIFocusGuide

@property (nonatomic) unsigned long long focusHeading;
@property (weak, nonatomic) NSObject<UIKBFocusGuideDelegate> *keyboardDelegate;

/* instance methods */
- (void)_didUpdateFocusToPreferredFocusedView;
- (BOOL)_isUnoccludable;
- (BOOL)_isUnclippable;
- (float)_focusPriority;
- (BOOL)_ignoresSpeedBumpEdges;
- (id)focusGuideRegion:(id)region preferredFocusEnvironmentsForMovementRequest:(id)request;
- (id)description;
@end

#endif /* UIKBFocusGuide_h */
