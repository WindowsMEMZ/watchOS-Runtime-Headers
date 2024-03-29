//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REHTTPServer_h
#define REHTTPServer_h
@import Foundation;

#include "REHTTPConnectionDelegate-Protocol.h"
#include "REHTTPServerDelegate-Protocol.h"

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface REHTTPServer : NSObject<REHTTPConnectionDelegate> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  struct _CFHTTPServer * _server;
  NSMutableArray *_connections;
}

@property (readonly, nonatomic) unsigned short port;
@property (readonly, nonatomic) NSObject<REHTTPServerDelegate> *delegate;

/* instance methods */
- (id)initWithPort:(unsigned short)port delegate:(id)delegate;
- (void)dealloc;
- (void)invalidate;
- (BOOL)_valid;
- (void)invalidated;
- (void)didRecievedError:(id)error;
- (void)didOpenConnection:(struct _CFHTTPServerConnection *)connection;
- (void)didCloseConnection:(struct _CFHTTPServerConnection *)connection;
- (void)connection:(id)connection didReceiveRequest:(id)request completion:(id /* block */)completion;
@end

#endif /* REHTTPServer_h */
