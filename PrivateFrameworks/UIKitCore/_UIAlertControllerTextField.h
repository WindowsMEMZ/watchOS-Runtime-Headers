//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIAlertControllerTextField_h
#define _UIAlertControllerTextField_h
@import Foundation;

#include "UITextField.h"
#include "_UIAlertControllerTextFieldView.h"

@interface _UIAlertControllerTextField : UITextField

@property (nonatomic) _UIAlertControllerTextFieldView *textFieldView;

/* instance methods */
- (void)setSecureTextEntry:(BOOL)entry;
@end

#endif /* _UIAlertControllerTextField_h */
