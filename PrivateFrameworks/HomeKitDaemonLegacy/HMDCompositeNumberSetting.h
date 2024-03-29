//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCompositeNumberSetting_h
#define HMDCompositeNumberSetting_h
@import Foundation;

#include "HMDCompositeSetting.h"
#include "HMDCompositeSettingsNumberValueProviding-Protocol.h"

@class NSNumber;

@interface HMDCompositeNumberSetting : HMDCompositeSetting<HMDCompositeSettingsNumberValueProviding>

@property (readonly, copy) NSNumber *numberValue;

/* instance methods */
- (id)initWithValue:(id)value readVersion:(id)version writeVersion:(id)version;
- (BOOL)isEqualValue:(id)value;
- (BOOL)isEqual:(id)equal;
- (id)attributeDescriptions;
@end

#endif /* HMDCompositeNumberSetting_h */
