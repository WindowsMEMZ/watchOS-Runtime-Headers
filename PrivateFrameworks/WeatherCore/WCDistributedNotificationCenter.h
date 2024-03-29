//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 513.0.0.0.0
//
#ifndef WCDistributedNotificationCenter_h
#define WCDistributedNotificationCenter_h
@import Foundation;

@class NSHashTable;

@interface WCDistributedNotificationCenter : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } dataSynchronizationLock;
@property (retain, nonatomic) NSHashTable *observers;

/* class methods */
+ (id)defaultCenter;

/* instance methods */
- (id)init;
- (void)postWeatherSavedLocationsDidUpdateNotification;
- (void)postWeatherLocationAuthorizationDidUpdateNotification;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)weatherPrefsDidGetUpdated:(id)updated;
- (void)_notifyObserversOfPreferencesChange;
@end

#endif /* WCDistributedNotificationCenter_h */
