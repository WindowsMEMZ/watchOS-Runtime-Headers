//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUUserConfiguration_h
#define TUUserConfiguration_h
@import Foundation;

#include "TUConfiguration.h"

@interface TUUserConfiguration : TUConfiguration
/* class methods */
+ (id)registeredDefaults;
+ (id)userDefaults;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)synchronize;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* TUUserConfiguration_h */
