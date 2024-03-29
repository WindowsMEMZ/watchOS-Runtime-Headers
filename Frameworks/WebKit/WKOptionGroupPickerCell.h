//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKOptionGroupPickerCell_h
#define WKOptionGroupPickerCell_h
@import Foundation;

#include "WKOptionPickerCell.h"

@interface WKOptionGroupPickerCell : WKOptionPickerCell
/* instance methods */
- (id)initWithOptionItem:(const void *)item;
- (double)labelWidthForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)layoutSubviews;
@end

#endif /* WKOptionGroupPickerCell_h */
