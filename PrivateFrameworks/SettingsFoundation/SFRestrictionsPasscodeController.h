//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1061.4.0.0.0
//
#ifndef SFRestrictionsPasscodeController_h
#define SFRestrictionsPasscodeController_h
@import Foundation;

@interface SFRestrictionsPasscodeController : NSObject
/* class methods */
+ (void)_migrateRestrictionsPasscodeIfNeeded;
+ (void)migrateRestrictionsPasscode;
+ (void)setPIN:(id)pin;
+ (BOOL)settingEnabled;
+ (BOOL)validatePIN:(id)pin;
+ (void)_removeKeychainPasswordForRestrictions;
+ (id)_keychainPasswordForRestrictions;
+ (void)_setKeychainPasswordForRestrictions:(id)restrictions;
+ (BOOL)hasHashAndSaltLegacyPassword;
+ (id)pinFromHashAndSaltLegacyPassword;
+ (BOOL)legacyRestrictionsInEffect;
+ (id)_generateSalt;
+ (id)newHashDataForPassword:(id)password andSalt:(id)salt;
+ (id)saltForHashAndSaltLegacyRestrictions;
+ (id)hashForHashAndSaltLegacyRestrictions;
+ (void)removePasswordForHashAndSaltLegacyRestrictions;
@end

#endif /* SFRestrictionsPasscodeController_h */
