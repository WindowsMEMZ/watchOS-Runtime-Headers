//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMXPCClient_h
#define HMXPCClient_h
@import Foundation;

#include "HMFMessageTransport.h"
#include "HMFLogging-Protocol.h"
#include "HMFMessageTransportDelegate-Protocol.h"
#include "HMXPCMessageTransportConfiguration.h"

@class NSDictionary, NSMutableArray, NSString, NSUUID, NSXPCConnection;

@interface HMXPCClient : HMFMessageTransport<HMFMessageTransportDelegate, HMFLogging> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableArray *reconnectionHandlers;
@property (readonly, copy, nonatomic) NSString *logIdentifier;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (readonly, nonatomic) BOOL isAuthorizedForHomeDataAccess;
@property (nonatomic) unsigned long long homeDataAuthorizationStatus;
@property (nonatomic) int notifyRegisterToken;
@property (nonatomic) BOOL requiresCheckin;
@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) HMXPCMessageTransportConfiguration *configuration;
@property (readonly, copy) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)exportedInterface;
+ (id)remoteObjectInterface;
+ (id)logCategory;

/* instance methods */
- (id)init;
- (id)initWithConfiguration:(id)configuration;
- (id)initWithConfiguration:(id)configuration userInfo:(id)info;
- (void)dealloc;
- (void)registerReconnectionHandler:(id /* block */)handler;
- (void)sendMessage:(id)message completionHandler:(id /* block */)handler;
- (void)messageTransport:(id)transport didReceiveMessage:(id)message;
@end

#endif /* HMXPCClient_h */
