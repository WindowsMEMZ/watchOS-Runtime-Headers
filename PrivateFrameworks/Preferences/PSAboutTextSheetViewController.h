//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 5215.3.9.0.0
//
#ifndef PSAboutTextSheetViewController_h
#define PSAboutTextSheetViewController_h
@import Foundation;

#include "UIViewController.h"

@interface PSAboutTextSheetViewController : UIViewController
/* class methods */
+ (void)presentAboutSheetTitled:(id)titled attributedText:(id)text fromViewController:(id)controller;

/* instance methods */
- (void)loadView;
- (void)setAttributedText:(id)text;
- (void)donePressed;
@end

#endif /* PSAboutTextSheetViewController_h */
