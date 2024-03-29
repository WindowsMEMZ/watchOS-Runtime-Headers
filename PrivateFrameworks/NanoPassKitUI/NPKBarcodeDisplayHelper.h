//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKBarcodeDisplayHelper_h
#define NPKBarcodeDisplayHelper_h
@import Foundation;

#include "NPKListCollectionViewController.h"
#include "NPKPassDetailBarcodeInstructionBackgroundView.h"
#include "NPKUIAssertion.h"

@class NSIndexPath, NSTimer, PKPass, UIScrollView;

@interface NPKBarcodeDisplayHelper : NSObject {
  /* instance variables */
  BOOL _initialPrefersStatusBarHidden;
  NSTimer *_analyticsTimer;
}

@property (weak, nonatomic) NPKListCollectionViewController *currentViewController;
@property (retain, nonatomic) PKPass *currentPass;
@property (retain, nonatomic) UIScrollView *currentScrollView;
@property (retain, nonatomic) NPKPassDetailBarcodeInstructionBackgroundView *barcodeBackgroundView;
@property (retain, nonatomic) NPKUIAssertion *brightnessAssertion;
@property (retain, nonatomic) NSIndexPath *barcodeIndexPath;

/* instance methods */
- (id)initWithViewController:(id)controller scrollView:(id)view pass:(id)pass;
- (void)requestSetInternalPrefersStatusBarHidden:(BOOL)hidden;
- (void)updateBarcodeBackgroundViewVisibility;
- (void)removeBackgroundViewForBarcode;
- (id)visibleIndexPath;
- (struct CGPoint { double x0; double x1; })_visiblePointInCollectionView;
- (struct CGPoint { double x0; double x1; })visiblePointInCollectionViewWithContentOffset:(struct CGPoint { double x0; double x1; })offset;
- (void)snapToBarcodeCellIfNecessary;
- (void)scrollToIndexPath:(id)path;
- (double)contentOffsetForIndexPath:(id)path;
- (void)showBackgroundViewForBarcodeAtIndexPath:(id)path;
- (void)hideBackgroundViewForBarcode;
@end

#endif /* NPKBarcodeDisplayHelper_h */
