//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCEndpointConnection_h
#define FCEndpointConnection_h
@import Foundation;

#include "FCCoreConfigurationObserving-Protocol.h"
#include "FCEndpointConnectionType-Protocol.h"
#include "FCNetworkBehaviorMonitor.h"
#include "NSURLSessionDelegate-Protocol.h"

@class NFLazy, NSString;

@interface FCEndpointConnection : NSObject<NSURLSessionDelegate, FCCoreConfigurationObserving, FCEndpointConnectionType>

@property (retain, nonatomic) NFLazy *lazySession;
@property (readonly, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)errorForStatus:(long long)status url:(id)url;

/* instance methods */
- (id)init;
- (id)initWithSourceApplicationBundleIdentifier:(id)identifier;
- (id)initWithNetworkBehaviorMonitor:(id)monitor;
- (id)initWithSourceApplicationBundleIdentifier:(id)identifier networkBehaviorMonitor:(id)monitor;
- (id)session;
- (void)performHTTPRequestWithURL:(id)url method:(id)method data:(id)data contentType:(id)type priority:(float)priority requiresMescalSigning:(BOOL)signing callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)performHTTPRequestWithURL:(id)url method:(id)method data:(id)data contentType:(id)type priority:(float)priority requiresMescalSigning:(BOOL)signing networkEventType:(int)type callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)performHTTPRequestWithURL:(id)url valuesByHTTPHeaderField:(id)field method:(id)method data:(id)data contentType:(id)type priority:(float)priority requiresMescalSigning:(BOOL)signing callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)performHTTPRequestWithURL:(id)url valuesByHTTPHeaderField:(id)field method:(id)method data:(id)data contentType:(id)type priority:(float)priority requiresMescalSigning:(BOOL)signing networkEventType:(int)type callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)performHTTPRequestWithURL:(id)url valuesByHTTPHeaderField:(id)field method:(id)method data:(id)data contentType:(id)type priority:(float)priority requiresMescalSigning:(BOOL)signing requiresAuthKitHeaders:(BOOL)headers networkEventType:(int)type callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)performAuthenticatedHTTPRequestWithURL:(id)url valuesByHTTPHeaderField:(id)field method:(id)method data:(id)data contentType:(id)type priority:(float)priority reauthenticateIfNeeded:(BOOL)needed callbackQueue:(id)queue completion:(id /* block */)completion;
- (void)performAuthenticatedHTTPRequestWithURL:(id)url valuesByHTTPHeaderField:(id)field method:(id)method data:(id)data contentType:(id)type priority:(float)priority reauthenticateIfNeeded:(BOOL)needed networkEventType:(int)type callbackQueue:(id)queue completion:(id /* block */)completion;
@end

#endif /* FCEndpointConnection_h */
