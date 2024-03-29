//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDContributorManager_h
#define HDContributorManager_h
@import Foundation;

#include "HDProfile.h"

@interface HDContributorManager : NSObject {
  /* instance variables */
  HDProfile *_profile;
}

/* instance methods */
- (id)initWithProfile:(id)profile;
- (id)contributorForReference:(id)reference error:(id *)error;
- (id)defaultContributorReference;
- (id)insertOrLookupContributorEntityWithReference:(id)reference transaction:(id)transaction error:(id *)error;
- (id)_primaryAppleAccount;
- (id)_imPreferredAccount;
@end

#endif /* HDContributorManager_h */
