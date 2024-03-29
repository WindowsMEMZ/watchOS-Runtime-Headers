//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFFolderPickerTableViewCellLayoutManager_h
#define _SFFolderPickerTableViewCellLayoutManager_h
@import Foundation;

#include "UITableViewCellLayoutManagerValue1.h"

@interface _SFFolderPickerTableViewCellLayoutManager : UITableViewCellLayoutManagerValue1
/* class methods */
+ (double)indentationWidth;

/* instance methods */
- (void)layoutSubviewsOfCell:(id)cell;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_layoutMarginsForCell:(id)cell;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForCell:(id)cell rowWidth:(double)width forSizing:(BOOL)sizing;
@end

#endif /* _SFFolderPickerTableViewCellLayoutManager_h */
