//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIActionSheetiOSDismissActionView_h
#define UIActionSheetiOSDismissActionView_h
@import Foundation;

#include "_UIAlertControlleriOSActionSheetCancelBackgroundView.h"
#include "UIActionSheetPresentationControllerDismissActionView-Protocol.h"
#include "UIButton.h"

@class NSString;

@interface UIActionSheetiOSDismissActionView : _UIAlertControlleriOSActionSheetCancelBackgroundView<UIActionSheetPresentationControllerDismissActionView>

@property (retain, nonatomic) UIButton *dismissButton;
@property (nonatomic) BOOL usesShortCompactVerticalLayout;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithContinuousCornerRadius:(double)radius;
- (void)_setupDismissButton;
- (double)_heightForTraitCollection:(id)collection;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
@end

#endif /* UIActionSheetiOSDismissActionView_h */
