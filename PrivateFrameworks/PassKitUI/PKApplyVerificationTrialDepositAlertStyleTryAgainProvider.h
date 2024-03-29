//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKApplyVerificationTrialDepositAlertStyleTryAgainProvider_h
#define PKApplyVerificationTrialDepositAlertStyleTryAgainProvider_h
@import Foundation;

#include "PKApplyVerificationTrialDepositAlertStyleTryAgain.h"
#include "UIAlertControllerVisualStyleProviding-Protocol.h"

@class NSString;

@interface PKApplyVerificationTrialDepositAlertStyleTryAgainProvider : NSObject<UIAlertControllerVisualStyleProviding> {
  /* instance variables */
  PKApplyVerificationTrialDepositAlertStyleTryAgain *_visualStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)visualStyleForAlertControllerStyle:(long long)style traitCollection:(id)collection descriptor:(id)descriptor;
- (id)platformStyleViewForAlertController:(id)controller inIdiom:(long long)idiom;
@end

#endif /* PKApplyVerificationTrialDepositAlertStyleTryAgainProvider_h */
