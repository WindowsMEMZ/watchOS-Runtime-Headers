//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKMessageTableCell_h
#define PKMessageTableCell_h
@import Foundation;

#include "PKTableViewCell.h"

@class UIButton, UIListContentView;

@interface PKMessageTableCell : PKTableViewCell {
  /* instance variables */
  UIListContentView *_listContentView;
  UIButton *_dismissButton;
  id /* block */ _actionOnDismiss;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (void)_dismissButtonPressed;
- (void)setContent:(id)content;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)setActionOnDismiss:(id /* block */)dismiss;
- (void)prepareForReuse;
- (void)layoutSubviews;
@end

#endif /* PKMessageTableCell_h */
