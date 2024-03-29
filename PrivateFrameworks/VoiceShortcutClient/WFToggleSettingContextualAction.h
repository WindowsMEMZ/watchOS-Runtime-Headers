//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFToggleSettingContextualAction_h
#define WFToggleSettingContextualAction_h
@import Foundation;

#include "WFContextualAction.h"

@interface WFToggleSettingContextualAction : WFContextualAction

@property (readonly, nonatomic) unsigned long long setting;
@property (readonly, nonatomic) unsigned long long operation;

/* class methods */
+ (id)spotlightDomainIdentifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithSetting:(unsigned long long)setting operation:(unsigned long long)operation;
- (id)initWithSetting:(unsigned long long)setting operation:(unsigned long long)operation unconfigured:(BOOL)unconfigured;
- (id)settingBiomeStreamIdentifier;
- (id)uniqueIdentifier;
- (BOOL)isReversible;
- (id)associatedSettingsPreference;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFToggleSettingContextualAction_h */
