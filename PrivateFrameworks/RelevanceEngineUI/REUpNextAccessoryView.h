//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REUpNextAccessoryView_h
#define REUpNextAccessoryView_h
@import Foundation;

#include "UIView.h"

@class CLKUIColoringLabel, REAccessoryDescription;

@interface REUpNextAccessoryView : UIView {
  /* instance variables */
  REAccessoryDescription *_accessoryDescription;
  CLKUIColoringLabel *_label;
}

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)configureWithDescription:(id)description;
- (void)setTextColor:(id)color;
- (id)viewForLastBaselineLayout;
@end

#endif /* REUpNextAccessoryView_h */
