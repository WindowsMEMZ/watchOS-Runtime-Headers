//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassFrontFaceView_h
#define PKPassFrontFaceView_h
@import Foundation;

#include "PKPassFaceView.h"
#include "PKBarcodeStickerView.h"
#include "PKLinkedAppIconView.h"

@class UILabel, UIView;

@interface PKPassFrontFaceView : PKPassFaceView {
  /* instance variables */
  UILabel *_logoLabel;
  UIView *_bottomRightItemView;
}

@property (readonly, nonatomic) PKBarcodeStickerView *barcodeView;
@property (nonatomic) BOOL showsLinkedApp;
@property (nonatomic) long long bottomRightItem;
@property (nonatomic) BOOL showsBarcodeView;
@property (nonatomic) BOOL showsLiveBalance;
@property (readonly, nonatomic) PKLinkedAppIconView *linkedApp;

/* instance methods */
- (id)initWithStyle:(long long)style;
- (void)dealloc;
- (void)insertContentView:(id)view ofType:(long long)type;
- (void)setShowsBarcodeView:(BOOL)view animated:(BOOL)animated;
- (struct CGSize { double x0; double x1; })contentSize;
- (id)passFaceTemplate;
- (id)headerTemplate;
- (id)templateForLayoutMode:(long long)mode;
- (id)templateForHeaderBucket;
- (void)createHeaderContentViews;
- (void)createBodyContentViews;
- (id)createContactlessLogoView;
- (id)createExpiredLabel;
- (void)updateValidity;
- (void)layoutSubviews;
- (void)_positionBarcodeView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })barcodeFrame;
- (id)_rebucketAuxiliaryFields:(id)fields;
- (id)_relevantBuckets;
@end

#endif /* PKPassFrontFaceView_h */
