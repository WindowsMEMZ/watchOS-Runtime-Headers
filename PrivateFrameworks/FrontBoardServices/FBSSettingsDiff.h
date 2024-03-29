//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSSettingsDiff_h
#define FBSSettingsDiff_h
@import Foundation;

#include "BSSettingDescriptionProvider-Protocol.h"
#include "BSXPCCoding-Protocol.h"

@class BSSettingsDiff, NSString;

@interface FBSSettingsDiff : NSObject<BSXPCCoding, BSSettingDescriptionProvider> {
  /* instance variables */
  BSSettingsDiff *_diff;
  BSSettingsDiff *_legacyDiff;
  BSSettingsDiff *_localDiff;
  BSSettingsDiff *_legacyLocalDiff;
  Class _settingsClass;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)diffFromSettings:(id)settings toSettings:(id)settings;
+ (Class)_settingsClass;

/* instance methods */
- (id)initWithChangesFromSettings:(id)settings toSettings:(id)settings;
- (id)init;
- (void)evaluateWithInspector:(id)inspector context:(void *)context;
- (BOOL)containsProperty:(SEL)property;
- (BOOL)containsSettingNamed:(id)named;
- (BOOL)containsPropertyFromExtension:(Class)extension;
- (BOOL)_isSignifcant;
- (void)inspectChangesWithBlock:(id /* block */)block;
- (void)inspectOtherChangesWithBlock:(id /* block */)block;
- (id)settingsByApplyingToMutableCopyOfSettings:(id)settings;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithXPCDictionary:(id)xpcdictionary;
- (id)settings:(id)settings keyDescriptionForSetting:(unsigned long long)setting;
- (id)settings:(id)settings valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
- (id)keyDescriptionForSetting:(unsigned long long)setting;
- (id)valueDescriptionForFlag:(long long)flag object:(id)object ofSetting:(unsigned long long)setting;
@end

#endif /* FBSSettingsDiff_h */
