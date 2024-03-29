//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKBEmojiSnapshotSizingView_h
#define UIKBEmojiSnapshotSizingView_h
@import Foundation;

#include "UIView.h"
#include "UIView.h"

@interface UIKBEmojiSnapshotSizingView : UIView {
  /* instance variables */
  struct CGSize { double width; double height; } _snapshotSize;
}

@property (readonly, nonatomic) UIView *snapshotView;

/* instance methods */
- (id)initWithSnapshotView:(id)view;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
@end

#endif /* UIKBEmojiSnapshotSizingView_h */
