//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIHealthSettingsDatePicker_h
#define FIUIHealthSettingsDatePicker_h
@import Foundation;

#include "UIDatePicker.h"

@interface FIUIHealthSettingsDatePicker : UIDatePicker

@property (copy, nonatomic) id /* block */ dateUpdateHandler;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (void)_dateDidChange:(id)change;
- (void)forceUpdate;
@end

#endif /* FIUIHealthSettingsDatePicker_h */
