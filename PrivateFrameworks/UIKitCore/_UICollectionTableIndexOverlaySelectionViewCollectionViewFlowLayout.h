//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout_h
#define _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout_h
@import Foundation;

#include "UICollectionViewFlowLayout.h"

@interface _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout : UICollectionViewFlowLayout

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frameForDoneButton;
@property (nonatomic) double rightMarginForDoneButton;

/* class methods */
+ (Class)layoutAttributesClass;

/* instance methods */
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* _UICollectionTableIndexOverlaySelectionViewCollectionViewFlowLayout_h */
