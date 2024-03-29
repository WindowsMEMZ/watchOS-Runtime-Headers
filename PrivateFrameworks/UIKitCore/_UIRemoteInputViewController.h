//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIRemoteInputViewController_h
#define _UIRemoteInputViewController_h
@import Foundation;

#include "_UIRemoteViewController.h"

@interface _UIRemoteInputViewController : _UIRemoteViewController
/* class methods */
+ (BOOL)__shouldHostRemoteTextEffectsWindow;

/* instance methods */
- (BOOL)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)error;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForServiceSize:(struct CGSize { double x0; double x1; })size;
- (void)viewDidInvalidateIntrinsicContentSize;
@end

#endif /* _UIRemoteInputViewController_h */
