//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBulletinAlertPolicy_h
#define CSLBulletinAlertPolicy_h
@import Foundation;

#include "CUISAlertPolicy.h"

@interface CSLBulletinAlertPolicy : CUISAlertPolicy
/* instance methods */
- (BOOL)hasPresentationRuleForExistingAlertItem:(id)item incomingAlertItem:(id)item;
- (unsigned long long)presentationRuleForExistingAlertItem:(id)item incomingAlertItem:(id)item;
@end

#endif /* CSLBulletinAlertPolicy_h */
