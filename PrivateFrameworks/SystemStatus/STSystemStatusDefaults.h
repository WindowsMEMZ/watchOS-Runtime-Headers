//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 165.19.0.0.0
//
#ifndef STSystemStatusDefaults_h
#define STSystemStatusDefaults_h
@import Foundation;

#include "BSAbstractDefaultDomain.h"

@interface STSystemStatusDefaults : BSAbstractDefaultDomain

@property (@dynamic, nonatomic) BOOL shouldEnableInternalBundles;
@property (@dynamic, nonatomic) BOOL shouldEnableUnknownBundles;
@property (@dynamic, nonatomic) BOOL shouldEnableUnknownBackgroundActivities;
@property (@dynamic, nonatomic) BOOL shouldEnableUnknownStatusItems;

/* class methods */
+ (id)standardDefaults;

/* instance methods */
- (id)init;
- (void)_bindAndRegisterDefaults;
@end

#endif /* STSystemStatusDefaults_h */
