//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardKeyplaneSnapshotView_h
#define UIKeyboardKeyplaneSnapshotView_h
@import Foundation;

#include "UIView.h"
#include "UIImageView.h"

@interface UIKeyboardKeyplaneSnapshotView : UIView {
  /* instance variables */
  UIImageView *_fgView;
  UIImageView *_bgView;
}

/* instance methods */
- (id)initWithKeyplaneView:(id)view;
- (id)snapshotFromView:(id)view;
- (void)setAlpha:(double)alpha;
@end

#endif /* UIKeyboardKeyplaneSnapshotView_h */
