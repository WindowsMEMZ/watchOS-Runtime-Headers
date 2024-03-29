//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2622.0.0.0.0
//
#ifndef RadiosPreferences_h
#define RadiosPreferences_h
@import Foundation;

@protocol OS_dispatch_queue, OS_os_log, RadiosPreferencesDelegate;

@interface RadiosPreferences : NSObject {
  /* instance variables */
  struct __SCPreferences * _prefs;
  int _applySkipCount;
  BOOL _isCachedAirplaneModeValid;
  BOOL _cachedAirplaneMode;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  NSObject<OS_os_log> *radios_prefs_log;
}

@property (nonatomic) BOOL airplaneMode;
@property (nonatomic) NSObject<RadiosPreferencesDelegate> *delegate;
@property (nonatomic) BOOL notifyForExternalChangeOnly;

/* class methods */
+ (BOOL)shouldMirrorAirplaneMode;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (id)init;
- (void)release;
- (void)dealloc;
- (void)setAirplaneModeInNSS:(BOOL)nss;
- (void)setAirplaneModeWithoutMirroring:(BOOL)mirroring;
- (BOOL)telephonyStateWithBundleIdentifierOut:(id *)out;
- (void)setTelephonyState:(BOOL)state fromBundleID:(id)id;
- (void)refresh;
- (void)initializeSCPrefs:(id)scprefs;
- (void)notifyTarget:(unsigned int)target;
- (void)synchronize;
- (void *)getValueForKey:(id)key;
- (void *)getValueWithLockForKey:(id)key;
- (void)setValue:(void *)value forKey:(id)key;
- (void)setCallback:(undefined *)callback withContext:(struct { long long x0; void * x1; undefined * x2; undefined * x3; undefined * x4; } *)context;
@end

#endif /* RadiosPreferences_h */
