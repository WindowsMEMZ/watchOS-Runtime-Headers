//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef DMFConnection_h
#define DMFConnection_h
@import Foundation;

#include "CATTaskClientDelegate-Protocol.h"
#include "DMFTransportProvider-Protocol.h"

@class CATOperationQueue, CATTaskClient, NSString;

@interface DMFConnection : NSObject<CATTaskClientDelegate, DMFTransportProvider>

@property (readonly, weak, nonatomic) NSObject<DMFTransportProvider> *transportProvider;
@property (readonly, nonatomic) CATTaskClient *taskClient;
@property (readonly, nonatomic) CATOperationQueue *operationQueue;
@property (nonatomic) unsigned long long connectionState;
@property (nonatomic) BOOL isSystemConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedConnection;
+ (id)systemConnection;
+ (id)currentUserConnection;
+ (id)connectionForUID:(unsigned int)uid;
+ (id)connectionForAppleID:(id)id;

/* instance methods */
- (id)initWithUserInfo:(id)info;
- (id)initWithTransportProvider:(id)provider userInfo:(id)info;
- (void)dealloc;
- (void)performRequest:(id)request completion:(id /* block */)completion;
- (id)prepareOperationForRequest:(id)request;
- (id)batchOperationToPerformOperations:(id)operations;
- (void)invalidate;
- (id)makeNewTransport;
- (void)clientDidConnect:(id)connect;
- (void)clientDidDisconnect:(id)disconnect;
- (void)clientDidInvalidate:(id)invalidate;
- (void)client:(id)client didInterruptWithError:(id)error;
- (void)_operationDidFinish:(id)finish completion:(id /* block */)completion;
- (void)_reconnectTaskClient;
@end

#endif /* DMFConnection_h */
