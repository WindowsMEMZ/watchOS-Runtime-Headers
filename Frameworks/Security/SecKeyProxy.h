//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef SecKeyProxy_h
#define SecKeyProxy_h
@import Foundation;

#include "NSXPCListenerDelegate-Protocol.h"

@class NSData, NSString, NSXPCListener, NSXPCListenerEndpoint;

@interface SecKeyProxy : NSObject<NSXPCListenerDelegate> {
  /* instance variables */
  id _key;
  NSData *_certificate;
  NSXPCListener *_listener;
  atomic long long _clientCount;
}

@property (readonly, nonatomic) NSXPCListenerEndpoint *endpoint;
@property (copy, nonatomic) id /* block */ clientConnectionHandler;
@property (copy, nonatomic) id /* block */ clientDisconnectionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)targetForKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)key error:(struct __CFError * *)error;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)createItemFromEndpoint:(id)endpoint certificate:(id *)certificate error:(id *)error;
+ (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)createKeyFromEndpoint:(id)endpoint error:(id *)error;
+ (struct __SecIdentity *)createIdentityFromEndpoint:(id)endpoint error:(id *)error;

/* instance methods */
- (id)initWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)key certificate:(id)certificate;
- (id)initWithKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; atomic  x1; unsigned long long x2; } x0; struct __SecKeyDescriptor * x1; void * x2; } *)key;
- (id)initWithIdentity:(struct __SecIdentity *)identity;
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
- (void)invalidate;
- (void)dealloc;
@end

#endif /* SecKeyProxy_h */
