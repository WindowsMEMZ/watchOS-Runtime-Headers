//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKDiscoveryLayout_h
#define PKDiscoveryLayout_h
@import Foundation;

#include "UICollectionViewLayout.h"

@class NSMutableDictionary;

@interface PKDiscoveryLayout : UICollectionViewLayout {
  /* instance variables */
  NSMutableDictionary *_attributesPerIndexPath;
  NSMutableDictionary *_headersPerIndexPath;
  struct CGSize { double width; double height; } _currentSize;
}

@property (nonatomic) double interimSpacing;
@property (nonatomic) double lineSpacing;
@property (nonatomic) BOOL isScrollable;

/* instance methods */
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (void)prepareLayout;
- (void)_adjustItems:(id)items withLateralMove:(double)move;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
@end

#endif /* PKDiscoveryLayout_h */
