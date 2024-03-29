//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassShareActivationExternalKeyEducationView_h
#define PKPassShareActivationExternalKeyEducationView_h
@import Foundation;

#include "UIView.h"
#include "PKContinuousButton.h"
#include "PKPassShareActivationExternalKeyEducationViewDelegate-Protocol.h"

@class UIImage, UIImageView;

@interface PKPassShareActivationExternalKeyEducationView : UIView {
  /* instance variables */
  NSObject<PKPassShareActivationExternalKeyEducationViewDelegate> *_delegate;
  UIImageView *_educationImageView;
  PKContinuousButton *_nextButton;
}

@property (retain, nonatomic) UIImage *educationImage;

/* instance methods */
- (id)init;
- (id)initWithContinueButtonText:(id)text delegate:(id)delegate;
- (void)_nextButtonPressed;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* PKPassShareActivationExternalKeyEducationView_h */
