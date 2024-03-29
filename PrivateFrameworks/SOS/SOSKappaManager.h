//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 498.300.11.0.0
//
#ifndef SOSKappaManager_h
#define SOSKappaManager_h
@import Foundation;

#include "SOSClientProtocol-Protocol.h"
#include "SOSInternalClientProtocol-Protocol.h"

@class NSHashTable, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface SOSKappaManager : NSObject<SOSInternalClientProtocol, SOSClientProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (nonatomic) int connectionRequestNotificationToken;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;
+ (BOOL)isKappaEnabled;
+ (id)currentSOSStatus;
+ (unsigned long long)mapServerResponseToKappaResponse:(long long)response;
+ (long long)mapSOSFlowStateToKappaState:(long long)state;

/* instance methods */
- (id)init;
- (id)initWithQueue:(id)queue;
- (void)dealloc;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)triggerKappaWithCompletion:(id /* block */)completion;
- (void)detectedAnomalyWithElectedDevice:(unsigned long long)device completion:(id /* block */)completion;
- (void)setSendingLocationUpdate:(BOOL)update;
- (void)updateClientCurrentSOSInitiationState:(long long)state;
- (void)updateClientCurrentSOSInteractiveState:(long long)state;
- (void)updateClientCurrentSOSButtonPressState:(id)state;
- (void)dismissClientSOSWithCompletion:(id /* block */)completion;
- (void)didDismissClientSOSBeforeSOSCall:(long long)soscall;
- (void)didUpdateSOSStatus:(id)sosstatus;
- (void)updateObserversWithKappaStatus:(id)status;
- (void)forceStartConnection;
@end

#endif /* SOSKappaManager_h */
