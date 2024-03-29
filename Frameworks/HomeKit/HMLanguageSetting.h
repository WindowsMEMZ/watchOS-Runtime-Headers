//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMLanguageSetting_h
#define HMLanguageSetting_h
@import Foundation;

#include "HMImmutableSetting.h"
#include "HMSettingLanguageValue.h"

@interface HMLanguageSetting : HMImmutableSetting

@property (readonly) HMSettingLanguageValue *languageValue;

/* instance methods */
- (id)initWithKeyPath:(id)path readOnly:(BOOL)only languageValue:(id)value;
- (id)settingWithSettingValue:(id)value;
- (id)settingValue;
- (id)initWithProtoPayload:(id)payload;
- (id)protoPayload;
- (id)payloadCopy;
- (id)initWithKeyPath:(id)path readOnly:(BOOL)only payload:(id)payload;
- (id)attributeDescriptions;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
@end

#endif /* HMLanguageSetting_h */
