//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef UIActivityActionCell_h
#define UIActivityActionCell_h
@import Foundation;

#include "_UICollectionViewListCell.h"

@class UIView, UIVisualEffectView;

@interface UIActivityActionCell : _UICollectionViewListCell

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIView *fillView;
@property (nonatomic) BOOL disabled;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)highlighted;
- (void)traitCollectionDidChange:(id)change;
- (BOOL)isDisabled;
@end

#endif /* UIActivityActionCell_h */
