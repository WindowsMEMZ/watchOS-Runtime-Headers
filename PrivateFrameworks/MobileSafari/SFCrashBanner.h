//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef SFCrashBanner_h
#define SFCrashBanner_h
@import Foundation;

#include "SFPinnableBanner.h"

@class NSString, UIButton, UILabel, UIVisualEffectView;

@interface SFCrashBanner : SFPinnableBanner {
  /* instance variables */
  UIVisualEffectView *_contentEffectView;
  UILabel *_label;
  struct CGSize { double width; double height; } _cachedLabelLayoutSize;
}

@property (retain, nonatomic) UIButton *closeButton;
@property (copy, nonatomic) NSString *backdropGroupName;
@property (nonatomic) unsigned long long messageType;
@property (readonly, nonatomic) NSString *bannerText;
@property (readonly, nonatomic) NSString *manuallyWrappedBannerText;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)_shouldUseManuallyWrappedCrashMessageForWidth:(double)width;
- (struct CGSize { double x0; double x1; })_labelLayoutSizeForWidth:(double)width;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setBannerText:(id)text manuallyWrappedBannerText:(id)text;
@end

#endif /* SFCrashBanner_h */
