//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 37.5.0.0.0
//
#ifndef UIView_UIPrintFormatter_h
#define UIView_UIPrintFormatter_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "UIPrintPageRenderer.h"

@interface UIView (UIPrintFormatter)
/* instance methods */
- (Class)_printFormatterClass;
- (id)viewPrintFormatter;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect forViewPrintFormatter:(id)formatter;
@end

#endif /* UIView_UIPrintFormatter_h */
