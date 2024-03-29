//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSServerDataCacheService_h
#define AMSServerDataCacheService_h
@import Foundation;

@class NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSServerDataCacheService : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* class methods */
+ (BOOL)_serverDataCacheFeatureEnabled;

/* instance methods */
- (id)init;
- (id)proxyWithErrorHandler:(id /* block */)handler;
- (void)dealloc;
- (id)_makeRemoteConnectionInterface;
- (id)_newRemoteConnection;
- (void)_removeRemoteConnection;
- (id)reminderEventsForAccount:(id)account service:(id)service eventType:(id)type networkPolicy:(long long)policy;
- (id)granularNotificationSettingsForAccountDSID:(id)dsid bundleID:(id)id networkPolicy:(long long)policy;
- (id)dataForAccountDSID:(id)dsid cacheTypeID:(id)id networkPolicy:(long long)policy;
- (id)setUpCacheForAccount:(id)account;
- (id)setUpCacheForAccountDSID:(id)dsid;
- (id)tearDownCacheForAccountDSID:(id)dsid;
- (id)updateCacheForAccountDSID:(id)dsid withCachePayload:(id)payload;
- (id)updateCacheForAccountDSID:(id)dsid withCacheTypeIDs:(id)ids;
@end

#endif /* AMSServerDataCacheService_h */
