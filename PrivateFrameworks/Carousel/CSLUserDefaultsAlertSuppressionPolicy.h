//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUserDefaultsAlertSuppressionPolicy_h
#define CSLUserDefaultsAlertSuppressionPolicy_h
@import Foundation;

#include "WNUIAlertSuppressionPolicy.h"

@class NSSet, NSUserDefaults;

@interface CSLUserDefaultsAlertSuppressionPolicy : WNUIAlertSuppressionPolicy {
  /* instance variables */
  NSUserDefaults *_userDefaults;
  NSSet *_allowedIdentities;
  BOOL _shouldSuppress;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (unsigned long long)suppressionRuleForActivatingAlertItem:(id)item withModel:(id)model;
- (id)suppressedIdentitiesForAlertModel:(id)model;
- (BOOL)_shouldSuppress:(id)suppress;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
- (void)setShouldSupressForTest:(BOOL)test;
@end

#endif /* CSLUserDefaultsAlertSuppressionPolicy_h */
