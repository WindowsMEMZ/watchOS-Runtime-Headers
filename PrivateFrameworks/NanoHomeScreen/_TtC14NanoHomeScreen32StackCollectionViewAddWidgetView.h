//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef _TtC14NanoHomeScreen32StackCollectionViewAddWidgetView_h
#define _TtC14NanoHomeScreen32StackCollectionViewAddWidgetView_h
@import Foundation;

#include "UICollectionReusableView.h"

@interface NanoHomeScreen.StackCollectionViewAddWidgetView : UICollectionReusableView { // (Swift)
  /* instance variables */
   gestureRecognizer;
   addImageView;
   backgroundView;
   keylineView;
   action;
   dimmed;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)handleTap;
@end

#endif /* _TtC14NanoHomeScreen32StackCollectionViewAddWidgetView_h */
