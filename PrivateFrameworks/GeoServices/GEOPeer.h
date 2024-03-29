//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOPeer_h
#define GEOPeer_h
@import Foundation;

#include "GEOApplicationAuditToken.h"
#include "GEODaemon.h"
#include "GEOXPCConnection.h"
#include "NSObject-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GEOPeer : NSObject {
  /* instance variables */
  GEODaemon *_daemon;
  NSMutableDictionary *_entitlementValueCache;
  NSObject<NSObject> *_peerTransaction;
  NSObject<NSObject> *_preloadingTransaction;
}

@property (copy, nonatomic) NSString *debugIdentifier;
@property (copy, nonatomic) NSString *serverIdentifier;
@property (nonatomic) unsigned long long handleRequestSignpost;
@property (readonly, nonatomic) GEOXPCConnection *connection;
@property (readonly, nonatomic) GEOApplicationAuditToken *auditToken;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *peerID;
@property (readonly, nonatomic) unsigned long long serverType;
@property (readonly, nonatomic) NSString *offlineCohortId;
@property (nonatomic) BOOL preloading;
@property (nonatomic) BOOL preloadingExclusively;
@property (readonly, nonatomic) BOOL isLocationd;

/* instance methods */
- (void)_handleEvent:(id)event;
- (id)initWithConnection:(id)connection daemon:(id)daemon;
- (void)dealloc;
- (id)description;
- (BOOL)isForServerIdentifier:(id)identifier;
- (BOOL)isForServerType:(unsigned long long)type;
- (id)valueForEntitlement:(id)entitlement;
- (BOOL)hasEntitlement:(id)entitlement;
@end

#endif /* GEOPeer_h */
