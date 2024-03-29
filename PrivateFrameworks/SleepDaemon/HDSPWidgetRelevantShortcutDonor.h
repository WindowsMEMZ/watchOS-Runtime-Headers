//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSPWidgetRelevantShortcutDonor_h
#define HDSPWidgetRelevantShortcutDonor_h
@import Foundation;

#include "HDSPWidgetRelevanceDonor-Protocol.h"

@class INRelevantShortcutStore;

@interface HDSPWidgetRelevantShortcutDonor : NSObject<HDSPWidgetRelevanceDonor> {
  /* instance variables */
  INRelevantShortcutStore *_store;
}

/* instance methods */
- (id)init;
- (void)donateRelevanceForWidgetState:(long long)state;
- (void)_setRelevantShortcuts:(id)shortcuts;
@end

#endif /* HDSPWidgetRelevantShortcutDonor_h */
