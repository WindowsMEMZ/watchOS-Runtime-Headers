//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFAirQualityProviderAttributionManager_h
#define WFAirQualityProviderAttributionManager_h
@import Foundation;

#include "WFAirQualityProviderAttribution.h"

@class NSMutableDictionary;

@interface WFAirQualityProviderAttributionManager : NSObject

@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } dataSynchronizationLock;
@property (retain, nonatomic) NSMutableDictionary *attributionCache;
@property (readonly, nonatomic) WFAirQualityProviderAttribution *defaultProviderAttribution;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (void)registerProviderAttribution:(id)attribution;
- (id)cachedAttributionForProvider:(id)provider;
- (void)loadAttributionForProvider:(id)provider completion:(id /* block */)completion;
- (id)p_archivedDataForProviderAttribution:(id)attribution;
- (void)p_updateCacheWithProviderAttribution:(id)attribution;
@end

#endif /* WFAirQualityProviderAttributionManager_h */
