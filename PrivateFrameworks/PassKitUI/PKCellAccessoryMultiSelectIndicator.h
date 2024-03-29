//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKCellAccessoryMultiSelectIndicator_h
#define PKCellAccessoryMultiSelectIndicator_h
@import Foundation;

#include "UIView.h"

@class UIImageView;

@interface PKCellAccessoryMultiSelectIndicator : UIView {
  /* instance variables */
  UIImageView *_imageView;
}

/* class methods */
+ (id)accessoryWithSelected:(BOOL)selected;

/* instance methods */
- (id)initWithSelected:(BOOL)selected;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
@end

#endif /* PKCellAccessoryMultiSelectIndicator_h */
