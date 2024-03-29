//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef CKProgressView_h
#define CKProgressView_h
@import Foundation;

#include "UIProgressView.h"

@class UIView;

@interface CKProgressView : UIProgressView

@property (retain, nonatomic) UIView *__ck_progressView;
@property (retain, nonatomic) UIView *__ck_trackView;

/* instance methods */
- (id)initWithProgressViewStyle:(long long)style;
- (void)_createInternalTrackView;
- (void)_createInternalProgressBar;
- (void)layoutSubviews;
- (void)setTintColor:(id)color;
- (void)setTrackTintColor:(id)color;
@end

#endif /* CKProgressView_h */
