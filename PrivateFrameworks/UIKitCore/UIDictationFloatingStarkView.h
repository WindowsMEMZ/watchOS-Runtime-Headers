//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDictationFloatingStarkView_h
#define UIDictationFloatingStarkView_h
@import Foundation;

#include "UIDictationView.h"
#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSString;

@interface UIDictationFloatingStarkView : UIDictationView<UIGestureRecognizerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)finishReturnToKeyboard;
- (void)prepareForReturnToKeyboard;
- (void)setState:(int)state;
- (void)setInputViewsHiddenForDictation:(BOOL)dictation;
- (void)dimmingViewWasTapped:(id)tapped;
- (void)returnToKeyboard;
- (struct CGPoint { double x0; double x1; })positionForShow;
- (void)show;
- (void)endpointButtonPressed;
@end

#endif /* UIDictationFloatingStarkView_h */
