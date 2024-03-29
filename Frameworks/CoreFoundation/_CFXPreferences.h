//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2202.0.0.0.0
//
#ifndef _CFXPreferences_h
#define _CFXPreferences_h
@import Foundation;

@protocol OS_xpc_object;

@interface _CFXPreferences : NSObject {
  /* instance variables */
  struct __CFDictionary * _sources;
  struct __CFDictionary * _namedVolatileSources;
  struct __CFDictionary * _searchLists;
  NSObject<OS_xpc_object> *_daemonConnection;
  NSObject<OS_xpc_object> *_directConnection;
  unsigned int _launchdUID;
  unsigned int _euid;
  atomic char _userHomeDirectoryState;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sourcesLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _searchListsLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _namedVolatileSourcesLock;
  struct __CFSet * _groupContainersForCurrentUser;
}

/* class methods */
+ (id)copyDefaultPreferences;

/* instance methods */
- (void)assertEquivalence:(BOOL)equivalence ofIdentifiers:(struct __CFArray *)identifiers containers:(struct __CFArray *)containers cloudConfigurationURLs:(struct __CFArray *)urls;
- (void)assertEquivalence:(BOOL)equivalence ofIdentifiers:(struct __CFArray *)identifiers users:(struct __CFArray *)users hosts:(struct __CFArray *)hosts containers:(struct __CFArray *)containers managedFlags:(struct __CFArray *)flags cloudFlags:(struct __CFArray *)flags;
- (id)init;
- (void)unregisterUserDefaultsInstance:(id)instance;
- (void)registerUserDefaultsInstance:(id)instance configurationURL:(struct __CFURL *)url;
- (void)setDaemonCacheEnabled:(BOOL)enabled identifier:(struct __CFString *)identifier user:(struct __CFString *)user host:(struct __CFString *)host container:(struct __CFString *)container;
- (void)simulateTimerSynchronizeForTestingForUser:(struct __CFString *)user;
- (void)setValue:(void *)value forKey:(struct __CFString *)key appIdentifier:(struct __CFString *)identifier container:(struct __CFString *)container configurationURL:(struct __CFURL *)url;
- (void *)copyValueForKey:(struct __CFString *)key identifier:(struct __CFString *)identifier user:(struct __CFString *)user host:(struct __CFString *)host container:(struct __CFString *)container;
- (void *)copyAppValueForKey:(struct __CFString *)key identifier:(struct __CFString *)identifier container:(struct __CFString *)container configurationURL:(struct __CFURL *)url;
- (void)registerDefaultValues:(struct __CFDictionary *)values;
- (void)resetPreferences:(BOOL)preferences;
- (void)dealloc;
- (void)generateKVONotificationsForIdentifier:(struct __CFString *)identifier withOldValues:(id)values newValues:(id)values;
@end

#endif /* _CFXPreferences_h */
