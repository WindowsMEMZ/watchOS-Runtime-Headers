//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1481.40.16.0.0
//
#ifndef OSLogPreferencesSubsystem_h
#define OSLogPreferencesSubsystem_h
@import Foundation;

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface OSLogPreferencesSubsystem : NSObject {
  /* instance variables */
  NSDictionary *_systemPrefs;
  NSString *_internalPrefsFile;
  NSDictionary *_internalPrefs;
  NSString *_prefsFile;
  NSMutableDictionary *_prefs;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) long long effectiveEnabledLevel;
@property (readonly, nonatomic) long long effectivePersistedLevel;
@property (nonatomic) long long enabledLevel;
@property (nonatomic) long long persistedLevel;

/* instance methods */
- (id)initWithName:(id)name;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;
- (void)reset;
- (void)resetAll;
- (long long)_defaultEnabledLevelForCategory:(id)category;
- (long long)_defaultPersistedLevelForCategory:(id)category;
- (long long)_enabledLevelForCategory:(id)category;
- (long long)_persistedLevelForCategory:(id)category;
- (BOOL)_signpostEnabledForCategory:(id)category;
- (BOOL)_signpostPersistedForCategory:(id)category;
- (BOOL)_signpostBacktracesEnabledForCategory:(id)category;
- (BOOL)_signpostAllowStreamingForCategory:(id)category;
- (id)_prefsForCategory:(id)category;
- (id)_levelPrefsForCategory:(id)category;
- (void)_setEnabledLevel:(long long)level forCategory:(id)category;
- (void)_setPersistedLevel:(long long)level forCategory:(id)category;
- (void)_setSignpostEnabled:(BOOL)enabled forCategory:(id)category;
- (void)_setSignpostPersisted:(BOOL)persisted forCategory:(id)category;
- (void)_setSignpostBacktracesEnabled:(BOOL)enabled forCategory:(id)category;
- (void)_setSignpostAllowStreaming:(BOOL)streaming forCategory:(id)category;
- (void)_resetCategory:(id)category;
@end

#endif /* OSLogPreferencesSubsystem_h */
