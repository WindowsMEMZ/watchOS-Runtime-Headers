//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIInputViewSetPlacementInvisible_h
#define UIInputViewSetPlacementInvisible_h
@import Foundation;

#include "UIInputViewSetPlacementWrapper.h"
#include "NSSecureCoding-Protocol.h"

@interface UIInputViewSetPlacementInvisible : UIInputViewSetPlacementWrapper<NSSecureCoding>
/* class methods */
+ (id)placementWithPlacement:(id)placement;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (BOOL)isUndocked;
- (BOOL)isVisible;
- (BOOL)showsInputViews;
- (BOOL)showsKeyboard;
- (BOOL)showsInputOrAssistantViews;
- (BOOL)isInteractive;
- (BOOL)inputViewWillAppear;
- (double)alpha;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (id)applicatorInfoForOwner:(id)owner;
@end

#endif /* UIInputViewSetPlacementInvisible_h */
