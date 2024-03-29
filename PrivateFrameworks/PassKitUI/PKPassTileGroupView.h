//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPassTileGroupView_h
#define PKPassTileGroupView_h
@import Foundation;

#include "UIView.h"
#include "PKPassTileGroupViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, PKPass;

@interface PKPassTileGroupView : UIView {
  /* instance variables */
  struct CGSize { double width; double height; } _boundsSize;
  BOOL _selectable;
  NSArray *_contentByRows;
  BOOL _effectiveSelectable;
  NSArray *_effectiveContentByRows;
  NSMutableArray *_itemViewsByRows;
  BOOL _animated;
  BOOL _deferringUpdate;
  BOOL _deferredSubviewUpdate;
}

@property (readonly, nonatomic) PKPass *pass;
@property (readonly, copy, nonatomic) NSArray *content;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentInset;
@property (nonatomic) unsigned long long maximumRows;
@property (weak, nonatomic) NSObject<PKPassTileGroupViewDelegate> *delegate;

/* class methods */
+ (void)extractSupportedVehicleFunction:(id *)function action:(id *)action forTile:(id)tile applicationIdentifier:(id)identifier keyIdentifier:(id)identifier;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)init;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)performBatchUpdates:(id /* block */)updates animated:(BOOL)animated;
- (void)layoutIfNeededAnimated:(BOOL)animated;
- (void)prepareForReuse;
- (void)setPass:(id)pass content:(id)content animated:(BOOL)animated;
- (void)setMaximumRows:(unsigned long long)rows animated:(BOOL)animated;
- (void)_tileViewTapped:(id)tapped;
@end

#endif /* PKPassTileGroupView_h */
