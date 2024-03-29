//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProvisionableCredentialMessageBubbleContentView_h
#define NPKProvisionableCredentialMessageBubbleContentView_h
@import Foundation;

#include "UIView.h"
#include "NPKProvisionableCredentialMessageBubbleContentViewDelegate-Protocol.h"
#include "NPKProvisionableCredentialMessageBubbleContentViewModel.h"

@class NSLayoutConstraint, PUICButton, UIGestureRecognizer, UIImageView, UILabel, UIStackView, UIView;

@interface NPKProvisionableCredentialMessageBubbleContentView : UIView

@property (retain, nonatomic) UIImageView *cardArtImageView;
@property (retain, nonatomic) NSLayoutConstraint *cardArtImageViewHeightConstraint;
@property (nonatomic) BOOL shouldDimPass;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) PUICButton *actionButton;
@property (retain, nonatomic) UIView *actionButtonContainerView;
@property (retain, nonatomic) UIStackView *bottomContentStackView;
@property (retain, nonatomic) UIGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) NSObject<NPKProvisionableCredentialMessageBubbleContentViewDelegate> *delegate;
@property (retain, nonatomic) NPKProvisionableCredentialMessageBubbleContentViewModel *viewModel;

/* class methods */
+ (double)contentViewHeightForViewModel:(id)model withWidth:(double)width;
+ (id)_defaultFont;
+ (id)_actionFont;
+ (id)_defaultParagraphStyle;
+ (id)_attributedTextFromText:(id)text withFont:(id)font;
+ (double)_roundedTextHeightForAttributedText:(id)text withAvailableWidth:(double)width;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_setUpConstraints;
- (id)_makeVerticalConstraints;
- (id)_makeHorizontalConstraints;
- (id)_makeRelativeConstraints;
- (void)_setUpSubviews;
- (void)_setUpCardArtImageView;
- (void)_setUpTitleLabel;
- (void)_setUpDetailLabel;
- (void)_setUpActionButton;
- (void)_setUpBottomContentStackView;
- (void)_setUpTapGestureRecognizer;
- (void)_setUpAppearance;
- (void)_handleTap;
- (void)_updateViewForViewModel:(id)model;
@end

#endif /* NPKProvisionableCredentialMessageBubbleContentView_h */
