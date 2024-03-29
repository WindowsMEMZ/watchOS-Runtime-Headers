//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKBarcodeView_h
#define NPKBarcodeView_h
@import Foundation;

#include "UIView.h"

@class UIImageView, UILabel;

@interface NPKBarcodeView : UIView

@property (retain, nonatomic) UIImageView *barcodeImageView;
@property (retain, nonatomic) UILabel *barcodeLabel;

/* instance methods */
- (id)initWithBarcode:(id)barcode expired:(BOOL)expired denseBarcode:(BOOL)barcode;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)_needsHorizontalBarcodePadding;
@end

#endif /* NPKBarcodeView_h */
