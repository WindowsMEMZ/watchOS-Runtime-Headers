//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDiscoveryCallToActionShelfView_h
#define PKDiscoveryCallToActionShelfView_h
@import Foundation;

#include "PKDiscoveryShelfView.h"
#include "PKContinuousButton.h"
#include "PKDiscoveryCardViewDelegate-Protocol.h"
#include "PKLinkedApplication.h"
#include "PKLinkedApplicationObserver-Protocol.h"

@class NSString, PKDiscoveryCallToAction, PKDiscoveryCallToActionShelf, PKDiscoveryMedia, UIImageView, UILabel;

@interface PKDiscoveryCallToActionShelfView : PKDiscoveryShelfView<PKLinkedApplicationObserver> {
  /* instance variables */
  PKDiscoveryCallToActionShelf *_ctaShelf;
  PKDiscoveryCallToAction *_callToAction;
  PKDiscoveryMedia *_icon;
  PKDiscoveryMedia *_wordmarkAsset;
  PKLinkedApplication *_linkedApplication;
  UILabel *_titleLabel;
  UILabel *_subtitleLabel;
  UIImageView *_iconImageView;
  UIImageView *_wordmarkImageView;
  PKContinuousButton *_button;
  struct CGSize { double width; double height; } _iconSize;
  struct CGSize { double width; double height; } _wordmarkAssetSize;
  BOOL _hasIcon;
  BOOL _hasWordmarkAsset;
  BOOL _hasButton;
  BOOL _hasTitle;
  BOOL _hasSubtitle;
}

@property (weak, nonatomic) NSObject<PKDiscoveryCardViewDelegate> *delegate;
@property (nonatomic) BOOL showActivityIndicator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithShelf:(id)shelf;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)setImage:(id)image animated:(BOOL)animated;
- (void)setWordmarkAsset:(id)asset animated:(BOOL)animated;
- (void)linkedApplicationDidChangeState:(id)state;
- (void)_buttonPressed:(id)pressed;
- (BOOL)_isFooterWordmarkOnly;
- (double)_desiredWordmarkAssetHeight;
- (struct CGSize { double x0; double x1; })_wordmarkAssetSize;
@end

#endif /* PKDiscoveryCallToActionShelfView_h */
