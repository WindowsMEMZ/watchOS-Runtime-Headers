//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPeerPaymentHeroBubbleView_h
#define PKPeerPaymentHeroBubbleView_h
@import Foundation;

#include "UIImageView.h"
#include "PKPeerPaymentBubbleView.h"

@class UILabel, UIView;

@interface PKPeerPaymentHeroBubbleView : UIImageView {
  /* instance variables */
  PKPeerPaymentBubbleView *_peerPaymentBubbleView;
  unsigned long long _bubbleState;
}

@property (readonly, nonatomic) UILabel *bubbleAmountLabel;
@property (readonly, nonatomic) UIView *pluginBalloonView;

/* instance methods */
- (id)initWithCurrencyAmount:(id)amount regitrationFlowState:(unsigned long long)state;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)_bubbleAmountLabelTextWithAmount:(id)amount;
- (id)_bubbleAmountLabelTextAttributes;
- (unsigned long long)_bubbleStateForRegistrationState:(unsigned long long)state;
@end

#endif /* PKPeerPaymentHeroBubbleView_h */
