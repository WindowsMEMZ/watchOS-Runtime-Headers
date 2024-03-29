//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 359.4.1.2.1
//
#ifndef CDPUIPasscodeProcessingViewController_h
#define CDPUIPasscodeProcessingViewController_h
@import Foundation;

#include "CUISPasscodeViewController.h"

@class NSString;

@interface CDPUIPasscodeProcessingViewController : CUISPasscodeViewController

@property (readonly, copy, nonatomic) NSString *snarfedPasscode;

/* instance methods */
- (void)setChangingPasscode:(id)passcode;
@end

#endif /* CDPUIPasscodeProcessingViewController_h */
