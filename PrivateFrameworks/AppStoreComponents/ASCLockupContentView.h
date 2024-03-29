//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 6.2.9.0.0
//
#ifndef ASCLockupContentView_h
#define ASCLockupContentView_h
@import Foundation;

#include "UIControl.h"
#include "ASCArtworkView.h"
#include "ASCLockupDisplayContext.h"
#include "ASCLockupPresenterView-Protocol.h"
#include "ASCLockupTheme-Protocol.h"
#include "ASCOfferButton.h"
#include "ASCOfferButtonDelegate-Protocol.h"
#include "ASCOfferPresenterView-Protocol.h"
#include "ASCOfferTheme.h"
#include "ASCSkeletonLabel.h"

@class NSString, UIColor, UILabel, UIView;

@interface ASCLockupContentView : UIControl<ASCOfferButtonDelegate, ASCLockupPresenterView, ASCOfferPresenterView>

@property (readonly, nonatomic) BOOL isOfferButtonOnlyLockup;
@property (readonly, copy, nonatomic) ASCLockupDisplayContext *displayContext;
@property (readonly, nonatomic) ASCArtworkView *iconArtworkView;
@property (readonly, nonatomic) ASCSkeletonLabel *titleLabel;
@property (readonly, nonatomic) ASCSkeletonLabel *subtitleLabel;
@property (readonly, nonatomic) ASCOfferButton *offerButton;
@property (readonly, nonatomic) UILabel *headingLabelIfLoaded;
@property (readonly, nonatomic) UILabel *headingLabel;
@property (readonly, nonatomic) UILabel *offerStatusLabelIfLoaded;
@property (readonly, nonatomic) UILabel *offerStatusLabel;
@property (retain, nonatomic) UIView *badgeView;
@property (retain, nonatomic) NSString *size;
@property (copy, nonatomic) ASCOfferTheme *offerTheme;
@property (retain, nonatomic) NSObject<ASCLockupTheme> *lockupTheme;
@property (copy, nonatomic) UIColor *loadingColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredIconSize;

/* class methods */
+ (BOOL)isSmallOfferButtonLockupForSize:(id)size;
+ (BOOL)isOfferButtonFixedHeightForSize:(id)size;
+ (BOOL)offerButtonShouldTopAlignForSize:(id)size;
+ (double)offerButtonTopPaddingForSize:(id)size;
+ (BOOL)offerButtonShouldExpandBackgroundForSize:(id)size;

/* instance methods */
- (BOOL)isSmallOfferButtonOnlyLockup;
- (BOOL)isMiniLockup;
- (BOOL)shouldHideIconArtwork;
- (BOOL)shouldHideHeading;
- (BOOL)shouldHideTitle;
- (BOOL)shouldHideSubtitle;
- (BOOL)shouldHideOfferStatus;
- (BOOL)shouldHideBadge;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)setHighlighted:(BOOL)highlighted;
- (void)setSemanticContentAttribute:(long long)attribute;
- (id)makeLayout;
- (double)minimumLockupHeight;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)onPreferredContentSizeCategoryChange;
- (void)addOfferTarget:(id)target action:(SEL)action;
- (void)removeOfferTarget:(id)target action:(SEL)action;
- (void)setIconImage:(id)image withDecoration:(id)decoration;
- (void)setHeading:(id)heading;
- (void)setTitle:(id)title;
- (void)setSubtitle:(id)subtitle;
- (void)setBadge:(id)badge;
- (void)setPrefersRightToLeftLayout:(BOOL)layout;
- (void)setLoading:(BOOL)loading;
- (id)saveOfferState;
- (void)setOfferMetadata:(id)metadata;
- (void)setOfferEnabled:(BOOL)enabled;
- (void)setOfferInteractive:(BOOL)interactive;
- (void)setOfferStatus:(id)status;
- (void)beginOfferModalStateWithCancelBlock:(id /* block */)block;
- (void)endOfferModalState;
- (void)offerButton:(id)button willTransitionToMetadata:(id)metadata usingAnimator:(id)animator;
@end

#endif /* ASCLockupContentView_h */
