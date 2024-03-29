//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1454.2.1.0.0
//
#ifndef BlockableScrollView_h
#define BlockableScrollView_h
@import Foundation;

#include "UIScrollView.h"
#include "BlockableScrollViewDelegate-Protocol.h"

@interface BlockableScrollView : UIScrollView

@property (weak, nonatomic) NSObject<BlockableScrollViewDelegate> *blockableDelegate;
@property (nonatomic) BOOL isResizing;

/* instance methods */
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (BOOL)gestureRecognizerShouldBegin:(id)begin;
@end

#endif /* BlockableScrollView_h */
