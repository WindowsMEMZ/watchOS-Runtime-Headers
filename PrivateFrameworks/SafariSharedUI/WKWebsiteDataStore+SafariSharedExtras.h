//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WKWebsiteDataStore_SafariSharedExtras_h
#define WKWebsiteDataStore_SafariSharedExtras_h
@import Foundation;

@interface WKWebsiteDataStore (SafariSharedExtras)
/* class methods */
+ (id)safari_allDataTypes;
+ (void)safari_clearHSTSSuperCookies;
+ (void)safari_setCommonProperties:(id)properties;
+ (id)safari_nonPersistentDataStore;
+ (id)safari_defaultDataStore;
+ (id)safari_dataStoreWithConfiguration:(id)configuration;
@end

#endif /* WKWebsiteDataStore_SafariSharedExtras_h */
