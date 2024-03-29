//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLStatusBarSpacerView_h
#define CSLStatusBarSpacerView_h
@import Foundation;

#include "UIView.h"

@interface CSLStatusBarSpacerView : UIView

@property (nonatomic) struct CGSize { double x0; double x1; } spacerContentSize;

/* class methods */
+ (id)pillSpacerWithAttributes:(struct CSLStatusBarContextViewLayoutAttributes { double x0; double x1; double x2; double x3; double x4; double x5; })attributes;

/* instance methods */
- (id)initWithContentSize:(struct CGSize { double x0; double x1; })size;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
@end

#endif /* CSLStatusBarSpacerView_h */
