//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUNeighborhoodActivityConduit_h
#define TUNeighborhoodActivityConduit_h
@import Foundation;

#include "TUConversationManager.h"
#include "TUNeighborhoodActivityConduitXPCClient.h"
#include "TUNeighborhoodActivityConduitXPCClientDelegate-Protocol.h"

@class NSMapTable, NSString;
@protocol TUConduitLifecycleController;

@interface TUNeighborhoodActivityConduit : NSObject<TUNeighborhoodActivityConduitXPCClientDelegate>

@property (retain, nonatomic) NSMapTable *delegates;
@property (readonly, nonatomic) TUNeighborhoodActivityConduitXPCClient *xpcClient;
@property (readonly, nonatomic) TUConversationManager *conversationManager;
@property (nonatomic) unsigned long long stateHandle;
@property (retain, nonatomic) NSObject<TUConduitLifecycleController> *conduitLifecycleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)isConduitAvailable;

/* instance methods */
- (id)initWithConversationManager:(id)manager;
- (void)dealloc;
- (id)_osStateDictionary;
- (void)addDelegate:(id)delegate queue:(id)queue;
- (void)addDelegate:(id)delegate;
- (void)removeDelegate:(id)delegate;
- (void)_requestInitialState;
- (void)_forEachDelegate:(id /* block */)delegate;
- (id)_findConversationForUUID:(id)uuid;
- (BOOL)_shouldReconnect;
- (void)connectionEstablishedForClient:(id)client;
- (void)connectionLostForClient:(id)client;
@end

#endif /* TUNeighborhoodActivityConduit_h */
