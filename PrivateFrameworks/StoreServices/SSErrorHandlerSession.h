//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSErrorHandlerSession_h
#define SSErrorHandlerSession_h
@import Foundation;

#include "SSXPCConnection.h"

@class NSDictionary;
@protocol OS_dispatch_queue;

@interface SSErrorHandlerSession : NSObject {
  /* instance variables */
  SSXPCConnection *_controlConnection;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  NSDictionary *_properties;
  long long _sessionID;
}

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)performDefaultHandling;
- (void)redirectToURL:(id)url;
- (void)retry;
- (id)valueForProperty:(id)property;
- (void)_setControlConnection:(id)connection;
- (void)_setErrorProperties:(id)properties;
- (void)_setSessionID:(long long)id;
@end

#endif /* SSErrorHandlerSession_h */
