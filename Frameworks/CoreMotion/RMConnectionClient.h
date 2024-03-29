//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2890.4.12.2.3
//
#ifndef RMConnectionClient_h
#define RMConnectionClient_h
@import Foundation;

#include "RMConnectionEndpoint.h"
#include "RMConnectionLifecycleDelegate-Protocol.h"
#include "RMConnectionStreamConsumingDelegate-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RMConnectionClient : NSObject<RMConnectionLifecycleDelegate, RMConnectionStreamConsumingDelegate> {
  /* instance variables */
  BOOL _valid;
  RMConnectionEndpoint *_endpoint;
  NSString *_serviceName;
  NSObject<OS_dispatch_queue> *_queue;
  id /* block */ _streamingDataCallback;
  id /* block */ _messageHandler;
  NSMutableArray *_messageCache;
  NSObject<OS_dispatch_source> *_connectionTimer;
  unsigned long long _connectionTimerDelay;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)endpointWasInterrupted:(id)interrupted;
- (void)endpointWasInvalidated:(id)invalidated;
- (void)endpoint:(id)endpoint didReceiveStreamedData:(id)data;
- (void)endpoint:(id)endpoint didReceiveMessage:(id)message withData:(id)data replyBlock:(id /* block */)block;
@end

#endif /* RMConnectionClient_h */
