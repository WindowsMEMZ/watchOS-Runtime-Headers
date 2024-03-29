//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 186.2.2.0.0
//
#ifndef QLTAnalyticsManager_h
#define QLTAnalyticsManager_h
@import Foundation;

@interface QLTAnalyticsManager : NSObject
/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)_eventsQueue;
- (void)_sendEvent:(id)event;
- (void)sendCacheSizeEventWithCacheSize:(unsigned long long)size;
@end

#endif /* QLTAnalyticsManager_h */
