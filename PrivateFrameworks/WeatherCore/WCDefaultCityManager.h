//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 513.0.0.0.0
//
#ifndef WCDefaultCityManager_h
#define WCDefaultCityManager_h
@import Foundation;

@class NSArray;
@protocol OS_dispatch_queue;

@interface WCDefaultCityManager : NSObject

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } dataSynchronizationLock;
@property (retain, nonatomic) NSArray *defaultCities;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *reloadQueue;

/* class methods */
+ (BOOL)isGreenTea;

/* instance methods */
- (id)init;
- (id)defaultCityForLocalTimeZone;
- (id)reloadDefaultCities;
@end

#endif /* WCDefaultCityManager_h */
