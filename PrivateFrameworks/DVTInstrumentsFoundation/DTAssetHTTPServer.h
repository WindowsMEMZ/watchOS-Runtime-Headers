//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 64562.3.1.1.0
//
#ifndef DTAssetHTTPServer_h
#define DTAssetHTTPServer_h
@import Foundation;

#include "GCDAsyncSocketDelegate-Protocol.h"
#include "_DT_GCDAsyncSocket.h"

@class DTXChannel, NSSet;
@protocol OS_dispatch_queue;

@interface DTAssetHTTPServer : NSObject<GCDAsyncSocketDelegate>

@property (retain) _DT_GCDAsyncSocket *socket;
@property (retain) NSObject<OS_dispatch_queue> *socketDelegateQueue;
@property (readonly) unsigned long long port;
@property (retain) DTXChannel *channel;
@property (retain, nonatomic) NSSet *allowedResources;

/* instance methods */
- (BOOL)startListeningWithError:(id *)error;
- (void)stopListening;
- (void)socket:(id)socket didAcceptNewSocket:(id)socket;
@end

#endif /* DTAssetHTTPServer_h */
