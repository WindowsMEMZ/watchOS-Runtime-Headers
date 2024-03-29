//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1228.300.81.0.0
//
#ifndef CXCallControllerHostConnection_h
#define CXCallControllerHostConnection_h
@import Foundation;

#include "CXCallControllerHostConnectionDelegate-Protocol.h"
#include "CXCallControllerHostProtocol-Protocol.h"
#include "CXCallControllerVendorProtocol-Protocol.h"

@class NSSet, NSString, NSURL, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CXCallControllerHostConnection : NSObject<CXCallControllerHostProtocol, CXCallControllerVendorProtocol>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) BOOL hasPushToTalkBackgroundMode;
@property (nonatomic) BOOL hasVoIPBackgroundMode;
@property (copy, nonatomic) NSString *applicationIdentifier;
@property (copy, nonatomic) NSURL *bundleURL;
@property (copy, nonatomic) NSSet *capabilities;
@property (readonly, nonatomic) NSObject<CXCallControllerVendorProtocol> *remoteObjectProxy;
@property (readonly, nonatomic) BOOL entitledForPublicAPI;
@property (readonly, nonatomic) BOOL entitledForPrivateAPI;
@property (readonly, nonatomic) BOOL callTransactionRequestPermitted;
@property (readonly, nonatomic) BOOL channelTransactionRequestPermitted;
@property (weak, nonatomic) NSObject<CXCallControllerHostConnectionDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithConnection:(id)connection serialQueue:(id)queue;
- (void)dealloc;
- (BOOL)isPermittedToUsePublicAPI;
- (BOOL)isPermittedToUsePrivateAPI;
- (BOOL)isCallTransactionRequestPermitted;
- (BOOL)isChannelTransactionRequestPermitted;
- (void)addOrUpdateCall:(id)call;
- (void)removeCall:(id)call;
- (void)requestCalls:(id /* block */)calls;
- (void)requestTransaction:(id)transaction reply:(id /* block */)reply;
@end

#endif /* CXCallControllerHostConnection_h */
