//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 121.0.0.0.0
//
#ifndef SignpostSupportExactProcessNameBlacklist_h
#define SignpostSupportExactProcessNameBlacklist_h
@import Foundation;

#include "SignpostSupportExactProcessNameFilter.h"

@interface SignpostSupportExactProcessNameBlacklist : SignpostSupportExactProcessNameFilter
/* instance methods */
- (BOOL)_wantsNotEqual;
- (unsigned long long)_compoundPredicateType;
- (BOOL)passesProcessName:(id)name;
@end

#endif /* SignpostSupportExactProcessNameBlacklist_h */
