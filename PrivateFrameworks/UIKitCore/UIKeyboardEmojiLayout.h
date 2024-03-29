//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardEmojiLayout_h
#define UIKeyboardEmojiLayout_h
@import Foundation;

#include "UICollectionViewFlowLayout.h"

@class NSMutableArray, NSMutableDictionary;

@interface UIKeyboardEmojiLayout : UICollectionViewFlowLayout {
  /* instance variables */
  NSMutableDictionary *_attributes;
  NSMutableArray *_headerWidths;
}

/* class methods */
+ (Class)invalidationContextClass;

/* instance methods */
- (void)dealloc;
- (void)_setAttributes:(id)attributes forSection:(long long)section;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)context;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)kind atIndexPath:(id)path;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (BOOL)flipsHorizontallyInOppositeLayoutDirection;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })change;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)attributes withOriginalAttributes:(id)attributes;
- (id)invalidationContextForPreferredLayoutAttributes:(id)attributes withOriginalAttributes:(id)attributes;
@end

#endif /* UIKeyboardEmojiLayout_h */
