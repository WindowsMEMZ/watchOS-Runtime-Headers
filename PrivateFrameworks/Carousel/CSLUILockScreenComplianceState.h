//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUILockScreenComplianceState_h
#define CSLUILockScreenComplianceState_h
@import Foundation;

#include "CSLPasscodeComplianceViewControllerDelegate-Protocol.h"
#include "CSLUILockScreenState-Protocol.h"
#include "CSLUILockScreenStateTransitionDelegate-Protocol.h"

@class NSString, UIViewController;

@interface CSLUILockScreenComplianceState : NSObject<CSLPasscodeComplianceViewControllerDelegate, CSLUILockScreenState>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSLUILockScreenStateTransitionDelegate> *delegate;
@property (retain, nonatomic) UIViewController *contentViewController;

/* class methods */
+ (BOOL)isValid;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)complianceViewControllerDidFinish:(id)finish;
@end

#endif /* CSLUILockScreenComplianceState_h */
