//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSimulatedWatchView_h
#define HKSimulatedWatchView_h
@import Foundation;

#include "UIView.h"

@class UIView;

@interface HKSimulatedWatchView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *watchScreenView;

/* instance methods */
- (id)initWithWatchView:(id)view;
- (id)initWithIconImage:(id)image titleText:(id)text detailText:(id)text tintColor:(id)color;
- (void)layoutSubviews;
@end

#endif /* HKSimulatedWatchView_h */
