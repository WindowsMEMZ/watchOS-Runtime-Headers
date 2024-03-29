//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXRVoiceOverTouchPadView_h
#define AXRVoiceOverTouchPadView_h
@import Foundation;

#include "UIView.h"
#include "AXRVoiceOverTouchPadViewDelegate-Protocol.h"

@interface AXRVoiceOverTouchPadView : UIView

@property (weak, nonatomic) NSObject<AXRVoiceOverTouchPadViewDelegate> *delegate;

/* instance methods */
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityGesturePracticeRegion;
- (void)_accessibilitySetCurrentGesture:(id)gesture;
@end

#endif /* AXRVoiceOverTouchPadView_h */
