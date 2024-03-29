//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardEmojiSplitCharacterPicker_h
#define UIKeyboardEmojiSplitCharacterPicker_h
@import Foundation;

#include "UIKeyboardEmojiCollectionInputView.h"
#include "UIKeyboardEmojiCategory.h"

@interface UIKeyboardEmojiSplitCharacterPicker : UIKeyboardEmojiCollectionInputView {
  /* instance variables */
  UIKeyboardEmojiCategory *_category;
}

/* class methods */
+ (BOOL)wantsScreenTraits;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame keyplane:(id)keyplane key:(id)key;
- (void)dealloc;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)view layout:(id)layout insetForSectionAtIndex:(long long)index;
- (double)collectionView:(id)view layout:(id)layout minimumLineSpacingForSectionAtIndex:(long long)index;
- (double)collectionView:(id)view layout:(id)layout minimumInteritemSpacingForSectionAtIndex:(long long)index;
- (void)scrollViewWillEndDragging:(id)dragging withVelocity:(struct CGPoint { double x0; double x1; })velocity targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)offset;
- (double)snappedYOffsetForOffset:(double)offset;
- (void)didMoveToWindow;
- (void)updateToCategory:(long long)category;
- (id)category;
- (void)setCategory:(id)category;
@end

#endif /* UIKeyboardEmojiSplitCharacterPicker_h */
