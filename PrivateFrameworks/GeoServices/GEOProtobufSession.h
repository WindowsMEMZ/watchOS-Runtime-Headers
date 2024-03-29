//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOProtobufSession_h
#define GEOProtobufSession_h
@import Foundation;

#include "GEODataURLSession.h"

@interface GEOProtobufSession : NSObject {
  /* instance variables */
  GEODataURLSession *_dataSession;
}

/* class methods */
+ (id)sharedProtobufSession;
+ (id)sharedDelegateQueue;

/* instance methods */
- (id)taskWithRequestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })kind protobufRequest:(id)request URL:(id)url additionalHTTPHeaders:(id)httpheaders auditToken:(id)token traits:(id)traits delegate:(id)delegate delegateQueue:(id)queue requestCounterTicket:(id)ticket multipathServiceType:(unsigned long long)type multipathAlternatePort:(unsigned long long)port throttleToken:(id)token options:(unsigned long long)options;
- (id)init;
- (id)initWithDataURLSession:(id)urlsession;
- (id)taskWithRequest:(id)request requestTypeCode:(unsigned int)code responseClass:(Class)class delegate:(id)delegate delegateQueue:(id)queue;
@end

#endif /* GEOProtobufSession_h */
