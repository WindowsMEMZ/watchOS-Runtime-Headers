//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBTutorialSinglePageView_h
#define UIKBTutorialSinglePageView_h
@import Foundation;

#include "UIView.h"
#include "UILabel.h"
#include "UIView.h"

@interface UIKBTutorialSinglePageView : UIView

@property (retain, nonatomic) UIView *visualDisplayView;
@property (retain, nonatomic) UILabel *textTitle;
@property (retain, nonatomic) UILabel *textBody;
@property (nonatomic) BOOL useAlertStyle;

/* instance methods */
- (id)initWithImageView:(id)view;
- (void)layoutSubviews;
- (void)configPageView;
@end

#endif /* UIKBTutorialSinglePageView_h */
