//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 707.0.47.0.0
//
#ifndef SRDebugInfoClient_h
#define SRDebugInfoClient_h
@import Foundation;

@class NSXPCConnection;

@interface SRDebugInfoClient : NSObject

@property (retain) NSXPCConnection *connection;
@property BOOL connectionDidInterrupt;

/* class methods */
+ (void)initialize;
+ (id)clientInterface;
+ (id)remoteInterface;
+ (id)connectionToDaemon;

/* instance methods */
- (id)init;
- (id)initWithConnection:(id)connection;
- (void)invalidate;
- (void)dealloc;
- (void)setupConnection;
- (void)listClientsWithReply:(id /* block */)reply;
- (void)dumpClientsWithReply:(id /* block */)reply;
- (void)dumpStateCacheWithReply:(id /* block */)reply;
- (void)datastoreListingWithReply:(id /* block */)reply;
- (void)dumpConfigurationsWithReply:(id /* block */)reply;
- (void)dumpDefaultsWithReply:(id /* block */)reply;
- (void)fetchEligibilityStatusForBundleIdentifier:(id)identifier sensor:(id)sensor reply:(id /* block */)reply;
@end

#endif /* SRDebugInfoClient_h */
