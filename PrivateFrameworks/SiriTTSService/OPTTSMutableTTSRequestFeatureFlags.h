//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.19.1.2.1
//
#ifndef OPTTSMutableTTSRequestFeatureFlags_h
#define OPTTSMutableTTSRequestFeatureFlags_h
@import Foundation;

#include "OPTTSTTSRequestFeatureFlags.h"

@interface OPTTSMutableTTSRequestFeatureFlags : OPTTSTTSRequestFeatureFlags

@property (nonatomic) BOOL fe_feature;
@property (nonatomic) BOOL fe_feature_only;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* OPTTSMutableTTSRequestFeatureFlags_h */
