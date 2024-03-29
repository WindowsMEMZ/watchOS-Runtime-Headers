//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITableViewSeparatorView_h
#define _UITableViewSeparatorView_h
@import Foundation;

#include "UIView.h"
#include "UITableView.h"
#include "UITableViewCell.h"

@interface _UITableViewSeparatorView : UIView {
  /* instance variables */
  UITableViewCell *_tableCell;
  UITableView *_table;
}

/* instance methods */
- (id)initWithTableCell:(id)cell;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame withTable:(id)table;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* _UITableViewSeparatorView_h */
