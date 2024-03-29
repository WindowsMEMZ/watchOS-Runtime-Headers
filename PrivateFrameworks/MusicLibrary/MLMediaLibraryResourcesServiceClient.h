//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.6.0.0
//
#ifndef MLMediaLibraryResourcesServiceClient_h
#define MLMediaLibraryResourcesServiceClient_h
@import Foundation;

#include "MLMediaLibraryAccountChangeObserver-Protocol.h"
#include "MLMediaLibraryResourcesServiceProtocol-Protocol.h"

@class NSOperationQueue, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface MLMediaLibraryResourcesServiceClient : NSObject<MLMediaLibraryAccountChangeObserver, MLMediaLibraryResourcesServiceProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSXPCConnection *xpcClientConnection;
@property (retain, nonatomic) NSObject<MLMediaLibraryAccountChangeObserver> *accountChangeObserver;
@property (retain, nonatomic) NSOperationQueue *accountChangeOperationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedService;

/* instance methods */
- (id)libraryContainerPathWithError:(id *)error;
- (id)musicContainerPathWithError:(id *)error;
- (id)_initWithAccountChangeObserver:(id)observer;
- (id)_musicContainerPathWithError:(id *)error;
- (id)_libraryContainerPathWithError:(id *)error;
- (void)_performOnServerObjectWithMaxRetries:(long long)retries error:(id *)error remoteObjectBlock:(id /* block */)block;
- (void)performDatabasePathChange:(id)change completion:(id /* block */)completion;
- (void)emergencyDisconnectWithCompletion:(id /* block */)completion;
- (void)terminateForFailureToPerformDatabasePathChange;
- (id)connectionWithListenerEndpoint:(id)endpoint;
@end

#endif /* MLMediaLibraryResourcesServiceClient_h */
