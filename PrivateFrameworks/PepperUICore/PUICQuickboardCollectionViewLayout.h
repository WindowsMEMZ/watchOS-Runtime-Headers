//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICQuickboardCollectionViewLayout_h
#define PUICQuickboardCollectionViewLayout_h
@import Foundation;

#include "PUICListCollectionViewLayout.h"

@class NSIndexPath;

@interface PUICQuickboardCollectionViewLayout : PUICListCollectionViewLayout

@property (nonatomic) long long layoutState;
@property (nonatomic) NSIndexPath *selectedIndexPath;
@property (nonatomic) double destinationYForSelectedItem;

/* instance methods */
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForItemAtIndexPath:(id)path;
- (id)_updateAttributesForAnimation:(id)animation;
@end

#endif /* PUICQuickboardCollectionViewLayout_h */
