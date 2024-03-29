//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 756.0.0.0.0
//
#ifndef SLSystemConfigManager_h
#define SLSystemConfigManager_h
@import Foundation;

@class NSString;

@interface SLSystemConfigManager : NSObject {
  /* instance variables */
  void * _prefs;
  BOOL _notifyForExternalChangeOnly;
  int _applySkipCount;
  NSString *_serviceType;
}

/* class methods */
+ (id)sharedInstanceForServiceType:(id)type;
+ (id)sharedInstanceForCallbackWhileLocked:(void *)locked;

/* instance methods */
- (id)initWithServiceType:(id)type;
- (void)dealloc;
- (void)setCachedUsername:(id)username;
- (id)cachedUsername;
- (void)_refresh;
- (void)_initializeSystemConfigPrefs:(id)prefs;
- (void)_keepAlive;
- (void)_tearDown;
- (void)_notifyTarget:(unsigned int)target;
- (void)_synchronize;
- (void *)_getValueForKey:(id)key;
- (void)_setValue:(void *)value forKey:(id)key;
- (void)_setCallback:(undefined *)callback withContext:(struct { long long x0; void * x1; undefined * x2; undefined * x3; undefined * x4; } *)context;
@end

#endif /* SLSystemConfigManager_h */
