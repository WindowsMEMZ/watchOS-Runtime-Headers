//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef FIUIAppDisabledViewController_h
#define FIUIAppDisabledViewController_h
@import Foundation;

#include "UIViewController.h"
#include "FIUITextView.h"

@interface FIUIAppDisabledViewController : UIViewController {
  /* instance variables */
  FIUITextView *_textView;
}

/* instance methods */
- (id)initWithAppName:(id)name disabledReason:(unsigned long long)reason;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
@end

#endif /* FIUIAppDisabledViewController_h */
