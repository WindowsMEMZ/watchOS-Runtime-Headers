//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassPaymentCardFrontFaceView_h
#define PKPassPaymentCardFrontFaceView_h
@import Foundation;

#include "PKPassFrontFaceView.h"
#include "PKBackdropView.h"
#include "PKBarcodeStickerView.h"

@class NSMutableArray, UIButton, UIImageView, UILabel, UIView;

@interface PKPassPaymentCardFrontFaceView : PKPassFrontFaceView {
  /* instance variables */
  UILabel *_balanceLabel;
  UIView *_scrimView;
  PKBackdropView *_backdropView;
  PKBarcodeStickerView *_topBarcodeView;
  PKBarcodeStickerView *_bottomBarcodeView;
  NSMutableArray *_oldTopBarcodeViews;
  NSMutableArray *_oldBottomBarcodeViews;
  UIButton *_fullScreenButton;
  UIImageView *_compactBankLogoView;
  BOOL _accountIsActive;
  BOOL _accountSupportsTopUp;
}

/* instance methods */
- (id)initWithStyle:(long long)style;
- (void)dealloc;
- (id)templateForHeaderBucket;
- (id)templateForLayoutMode:(long long)mode;
- (id)_filterSecondaryField:(id)field;
- (id)_filterAuxiliaryField:(id)field;
- (BOOL)showsShare;
- (void)createHeaderContentViews;
- (void)createBodyContentViews;
- (void)_initializeBalanceLabelWithTextColor:(id)color;
- (void)setShowsLiveBalance:(BOOL)balance;
- (void)setModallyPresented:(BOOL)presented;
- (struct CGSize { double x0; double x1; })contentSize;
- (void)traitCollectionDidChange:(id)change;
- (void)_updateBalanceLabelFontSize;
- (void)layoutSubviews;
- (void)_showFullScreenBarcodeForButton:(id)button;
- (void)_updateBalanceWithAmount:(id)amount;
- (void)_handleAccountChanged:(id)changed;
- (void)_updateStateForAccount:(id)account animated:(BOOL)animated;
- (void)_updateAccountBalanceVisibilityAnimated:(BOOL)animated;
- (void)_handlePeerPaymentAccountChanged:(id)changed;
- (void)setViewExpanded:(BOOL)expanded;
- (void)setDynamicBarcodeData:(id)data;
- (double)_barcodePadding;
- (struct CGSize { double x0; double x1; })_barcodeSize;
@end

#endif /* PKPassPaymentCardFrontFaceView_h */
