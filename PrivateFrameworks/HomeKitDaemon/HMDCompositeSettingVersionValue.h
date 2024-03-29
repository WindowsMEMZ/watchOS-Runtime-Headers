//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCompositeSettingVersionValue_h
#define HMDCompositeSettingVersionValue_h
@import Foundation;

#include "HMDCompositeSettingValue.h"
#include "HMDCompositeSettingsVersionValueProviding-Protocol.h"

@class HMFVersion;

@interface HMDCompositeSettingVersionValue : HMDCompositeSettingValue<HMDCompositeSettingsVersionValueProviding>

@property (readonly, copy) HMFVersion *version;
@property (readonly) long long type;

/* instance methods */
- (id)initWithVersion:(id)version type:(long long)type;
- (id)attributeDescriptions;
@end

#endif /* HMDCompositeSettingVersionValue_h */
