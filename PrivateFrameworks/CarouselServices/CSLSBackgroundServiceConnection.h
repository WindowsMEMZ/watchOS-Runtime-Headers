//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSBackgroundServiceConnection_h
#define CSLSBackgroundServiceConnection_h
@import Foundation;

#include "CSLSBackgroundServiceConnectionProviding-Protocol.h"
#include "CSLSBackgroundServiceDelegate-Protocol.h"

@class NSString, NSXPCConnection;

@interface CSLSBackgroundServiceConnection : NSObject<CSLSBackgroundServiceConnectionProviding>

@property (retain, nonatomic) NSXPCConnection *connection;
@property (weak, nonatomic) NSObject<CSLSBackgroundServiceDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)_attemptConnect;
- (void)_attemptReconnect;
- (id)asynchronousRemoteObjectProxyWithRetryHandler:(id /* block */)handler errorHandler:(id /* block */)handler;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)handler;
@end

#endif /* CSLSBackgroundServiceConnection_h */
