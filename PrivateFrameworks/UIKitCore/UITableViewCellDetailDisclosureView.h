//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UITableViewCellDetailDisclosureView_h
#define UITableViewCellDetailDisclosureView_h
@import Foundation;

#include "UIControl.h"
#include "UIButton.h"
#include "UIColor.h"
#include "UIImageView.h"
#include "UITableViewCell.h"

@interface UITableViewCellDetailDisclosureView : UIControl {
  /* instance variables */
  UIImageView *_disclosureView;
  UITableViewCell *_cell;
}

@property (readonly, nonatomic) UIButton *accessoryButton;
@property (retain, nonatomic) UIColor *accessoryTintColor;

/* instance methods */
- (id)initWithTarget:(id)target action:(SEL)action cell:(id)cell buttonType:(long long)type shouldReverseLayoutDirection:(BOOL)direction;
- (void)setSemanticContentAttribute:(long long)attribute;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)addTarget:(id)target action:(SEL)action forControlEvents:(unsigned long long)events;
- (void)removeTarget:(id)target action:(SEL)action forControlEvents:(unsigned long long)events;
- (void)_updateDisclosureChevronImage;
- (void)_dynamicUserInterfaceTraitDidChange;
@end

#endif /* UITableViewCellDetailDisclosureView_h */
