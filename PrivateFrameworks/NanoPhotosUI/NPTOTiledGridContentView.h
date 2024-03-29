//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.200.1.0.0
//
#ifndef NPTOTiledGridContentView_h
#define NPTOTiledGridContentView_h
@import Foundation;

#include "UIView.h"

@class CATiledLayer;

@interface NPTOTiledGridContentView : UIView

@property (readonly, nonatomic) CATiledLayer *tiledLayer;
@property (nonatomic) struct CGSize { double x0; double x1; } itemSize;
@property (nonatomic) double itemSpacing;
@property (nonatomic) long long numberOfItems;
@property (nonatomic) long long totalExpectedNumberOfItems;
@property (copy, nonatomic) id /* block */ imageProviderBlock;
@property (nonatomic) long long numberOfColumns;

/* class methods */
+ (Class)layerClass;

/* instance methods */
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)reloadData;
- (void)insertItemsAtIndexes:(id)indexes;
- (void)deleteItemsAtIndexes:(id)indexes;
- (void)reloadItemsAtIndexes:(id)indexes;
- (void)moveItemAtIndex:(unsigned long long)index toIndex:(unsigned long long)index;
- (long long)_indexForItemAtPoint:(struct CGPoint { double x0; double x1; })point validate:(BOOL)validate;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForItemAtIndex:(long long)index;
- (void)drawLayer:(id)layer inContext:(struct CGContext *)context;
@end

#endif /* NPTOTiledGridContentView_h */
