//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOMapDataSubscriptionPersistence_Protocol_h
#define GEOMapDataSubscriptionPersistence_Protocol_h
@import Foundation;

@protocol GEOMapDataSubscriptionPersistence <NSObject>
/* instance methods */
- (void)fetchSubscriptionsWithIdentifiers:(id)identifiers callbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)fetchExpiredSubscriptionsWithIdentifiers:(id)identifiers callbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)addSubscriptionWithIdentifier:(id)identifier auditToken:(id)token dataTypes:(unsigned long long)types policy:(long long)policy region:(id)region displayName:(id)name expirationDate:(id)date callbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)removeSubscriptionWithIdentifier:(id)identifier callbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)fetchSubscriptionsForSyncToWatchWithCallbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)setCompanionSubscriptionInfo:(id)info callbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)fetchCompanionSubscriptionsWithIdentifiers:(id)identifiers callbackQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)calculateTotalSizeOfOfflineSubscriptionsWithCallbackQueue:(id)queue completionHandler:(id /* block */)handler;
@optional
/* instance methods */
- (id)companionSubscriptionInfo;
@end

#endif /* GEOMapDataSubscriptionPersistence_Protocol_h */
