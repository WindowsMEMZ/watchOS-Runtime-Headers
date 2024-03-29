//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2AccessoryServerCoordinator_h
#define HAP2AccessoryServerCoordinator_h
@import Foundation;

#include "HAP2LoggingObject.h"
#include "HAP2AccessoryServerBrowserPrivate-Protocol.h"
#include "HAP2AccessoryServerControllerFactory-Protocol.h"
#include "HAP2AccessoryServerCoordinator-Protocol.h"
#include "HAP2AccessoryServerCoordinatorDelegate-Protocol.h"
#include "HAP2AccessoryServerCoordinatorPrivate-Protocol.h"
#include "HAP2AccessoryServerDiscovery-Protocol.h"
#include "HAP2AccessoryServerDiscoveryDelegate-Protocol.h"
#include "HAP2AccessoryServerEncodingFactory-Protocol.h"
#include "HAP2AccessoryServerPairingFactory-Protocol.h"
#include "HAP2AccessoryServerSecureTransportFactory-Protocol.h"
#include "HAP2AccessoryServerTransportFactory-Protocol.h"
#include "HAP2PropertyLock.h"
#include "HAP2SerializedOperationQueue.h"

@class NSMutableDictionary, NSOperationQueue, NSString;

@interface HAP2AccessoryServerCoordinator : HAP2LoggingObject<HAP2AccessoryServerDiscoveryDelegate, HAP2AccessoryServerCoordinatorPrivate, HAP2AccessoryServerCoordinator>

@property (readonly, weak, nonatomic) NSObject<HAP2AccessoryServerBrowserPrivate> *browser;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerDiscovery> *discovery;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerPairingFactory> *pairingFactory;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerTransportFactory> *transportFactory;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerSecureTransportFactory> *secureTransportFactory;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerEncodingFactory> *encodingFactory;
@property (readonly, nonatomic) NSObject<HAP2AccessoryServerControllerFactory> *controllerFactory;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (readonly, nonatomic) NSOperationQueue *localOperationQueue;
@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (nonatomic) BOOL discovering;
@property (nonatomic) BOOL startDiscoveringPending;
@property (nonatomic) BOOL stopDiscoveringPending;
@property (readonly, nonatomic) NSMutableDictionary *discoveredAccessoryServers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerCoordinatorDelegate> *delegate;

/* instance methods */
- (id)initWithDiscovery:(id)discovery pairingFactory:(id)factory transportFactory:(id)factory secureTransportFactory:(id)factory encodingFactory:(id)factory controllerFactory:(id)factory;
- (void)setBrowser:(id)browser operationQueue:(id)queue;
- (BOOL)isDiscovering;
- (BOOL)isStartDiscoveringPending;
- (BOOL)isStopDiscoveringPending;
- (void)startDiscovering;
- (void)stopDiscovering;
- (void)resurfaceDiscoveryInfoForDeviceID:(id)id;
- (void)discovery:(id)discovery didStartDiscoveringWithError:(id)error;
- (void)discovery:(id)discovery didStopDiscoveringWithError:(id)error;
- (void)discovery:(id)discovery didDiscoverAccessory:(id)accessory;
- (void)discovery:(id)discovery didLoseAccessory:(id)accessory error:(id)error;
- (void)_startDiscovering;
- (void)_stopDiscovering;
- (void)_didStartDiscoveringWithError:(id)error;
- (void)_didStopDiscoveringWithError:(id)error;
- (void)_didDiscoverAccessory:(id)accessory completion:(id /* block */)completion;
- (void)_didDeterminePairingStateForAccessory:(id)accessory isPaired:(BOOL)paired completion:(id /* block */)completion;
- (void)_didLoseAccessory:(id)accessory error:(id)error;
- (void)_didDiscoverUnpairedAccessory:(id)accessory transport:(id)transport operationQueue:(id)queue completion:(id /* block */)completion;
- (void)_didDiscoverPairedAccessory:(id)accessory transport:(id)transport operationQueue:(id)queue completion:(id /* block */)completion;
- (id)_createMetadataForAccessoryServerWithAccessoryInfo:(id)info;
- (id)_createUnpairedAccessoryServerWithAccessoryInfo:(id)info transport:(id)transport operationQueue:(id)queue;
- (id)_createPairedAccessoryServerWithAccessoryInfo:(id)info transport:(id)transport operationQueue:(id)queue;
@end

#endif /* HAP2AccessoryServerCoordinator_h */
