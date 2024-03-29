//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSAppleCareDaemonResponseListener_h
#define IDSAppleCareDaemonResponseListener_h
@import Foundation;

#include "IDSDaemonListenerProtocol-Protocol.h"
#include "IDSDaemonRequestTimer.h"

@class NSString;

@interface IDSAppleCareDaemonResponseListener : NSObject<IDSDaemonListenerProtocol> {
  /* instance variables */
  IDSDaemonRequestTimer *_requestTimer;
  id /* block */ _disconnectedBlock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithRequestTimer:(id)timer;
- (id)initWithDisconnectedBlockAndNoTimeout:(id /* block */)timeout;
- (void)applecareResponseForRequestID:(id)id withError:(id)error;
- (void)daemonDisconnected;
@end

#endif /* IDSAppleCareDaemonResponseListener_h */
