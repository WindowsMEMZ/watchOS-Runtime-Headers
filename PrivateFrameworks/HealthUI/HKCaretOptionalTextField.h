//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKCaretOptionalTextField_h
#define HKCaretOptionalTextField_h
@import Foundation;

#include "UITextField.h"

@interface HKCaretOptionalTextField : UITextField

@property (nonatomic) BOOL allowsSelection;
@property (nonatomic) BOOL disableActions;

/* instance methods */
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })caretRectForPosition:(id)position;
- (double)actualMinimumFontSize;
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;
@end

#endif /* HKCaretOptionalTextField_h */
