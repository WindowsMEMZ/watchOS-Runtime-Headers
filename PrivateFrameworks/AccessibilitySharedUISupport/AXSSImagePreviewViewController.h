//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 452.0.6.0.0
//
#ifndef AXSSImagePreviewViewController_h
#define AXSSImagePreviewViewController_h
@import Foundation;

#include "UIViewController.h"
#include "AXSSImagePreviewViewControllerDelegate-Protocol.h"
#include "UIGestureRecognizerDelegate-Protocol.h"
#include "UIScrollViewDelegate-Protocol.h"

@class NSString, UIPinchGestureRecognizer, UIScrollView, UISwipeGestureRecognizer, UITapGestureRecognizer, UIView;

@interface AXSSImagePreviewViewController : UIViewController<UIGestureRecognizerDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) UIView *contentSnapshot;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer;
@property BOOL isManualZoomActive;
@property (weak, nonatomic) NSObject<AXSSImagePreviewViewControllerDelegate> *delegate;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } edgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContentSnapshot:(id)snapshot;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)appear;
- (void)viewWillDisappear:(BOOL)disappear;
- (id)viewForZoomingInScrollView:(id)view;
- (void)scrollViewDidZoom:(id)zoom;
- (void)scrollViewDidScroll:(id)scroll;
- (void)_doubleTapGestureRecognized:(id)recognized;
- (void)_pinchGestureRecognized:(id)recognized;
- (void)_swipeGestureRecognized:(id)recognized;
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)recognizer;
- (BOOL)_canShowWhileLocked;
- (BOOL)_isSnapshotViewAttached;
- (void)_toggleManualZoomMode;
- (struct CGSize { double x0; double x1; })_scrollViewClippedSize;
- (void)_fitImageIfNeeded:(BOOL)needed;
- (void)_zoomImageToBestScaleIfNeeded:(BOOL)needed;
- (void)_centerImageIfNeeded;
- (void)_zoomImage:(double)image withContentOffset:(struct CGPoint { double x0; double x1; })offset animated:(BOOL)animated;
- (void)_stopScrollViewAnimations;
- (void)_imagePreviewViewControllerSetupUI;
- (void)_addGestureRecognizers;
- (void)_removeGestureRecognizers;
- (void)_viewShouldExpand;
@end

#endif /* AXSSImagePreviewViewController_h */
