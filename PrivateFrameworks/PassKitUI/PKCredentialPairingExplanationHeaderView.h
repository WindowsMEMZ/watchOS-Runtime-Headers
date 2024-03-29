//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCredentialPairingExplanationHeaderView_h
#define PKCredentialPairingExplanationHeaderView_h
@import Foundation;

#include "UIView.h"
#include "PKSubcredentialPairingFlowControllerContext.h"

@class UIActivityIndicatorView, UIImageView, UIVisualEffectView;

@interface PKCredentialPairingExplanationHeaderView : UIView {
  /* instance variables */
  UIImageView *_imageView;
  PKSubcredentialPairingFlowControllerContext *_context;
  UIActivityIndicatorView *_spinner;
  UIVisualEffectView *_blurView;
}

@property (nonatomic) BOOL useCompactLayout;

/* instance methods */
- (id)initWithContext:(id)context;
- (void)layoutSubviews;
- (void)_loadPairingImage;
- (void)_showLoadingContent;
- (void)_setPairingImage:(id)image;
- (id)_fallbackPairingImage;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;
@end

#endif /* PKCredentialPairingExplanationHeaderView_h */
