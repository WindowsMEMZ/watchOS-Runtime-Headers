//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFCompanionManager_h
#define SFCompanionManager_h
@import Foundation;

#include "SFCompanionServiceManagerClient-Protocol.h"
#include "SFCompanionServiceManagerProtocol-Protocol.h"
#include "SFCompanionXPCManagerObserver-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface SFCompanionManager : NSObject<SFCompanionServiceManagerClient, SFCompanionXPCManagerObserver>

@property (copy) NSString *identifier;
@property (retain) NSObject<SFCompanionServiceManagerProtocol> *managerProxy;
@property (copy) NSString *deviceID;
@property (copy) NSString *deviceIP;
@property (copy) NSString *deviceName;
@property (retain) NSMutableDictionary *services;
@property (retain) NSMutableDictionary *streamHandlers;
@property (retain) NSObject<OS_dispatch_queue> *serviceIdentifierQueue;
@property (retain) NSObject<OS_dispatch_semaphore> *managerSemaphore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)serviceManager;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)serviceForIdentifier:(id)identifier;
- (id)streamDataForIdentifier:(id)identifier;
- (void)retrieveManagerProxy;
- (void)signalSemaphore;
- (void)streamToService:(id)service withFileHandle:(id)handle acceptReply:(id /* block */)reply;
- (void)xpcManagerConnectionInterrupted;
- (void)xpcManagerDidInvalidate:(id)invalidate;
- (void)getStreamsForData:(id)data withStreamHandler:(id /* block */)handler;
- (void)supportStreamsWithIdentifier:(id)identifier withStreamHandler:(id /* block */)handler;
- (void)disableStreamSupportForIdentifier:(id)identifier;
- (void)streamsFromFileHandle:(id)handle withCompletionHandler:(id /* block */)handler;
@end

#endif /* SFCompanionManager_h */
