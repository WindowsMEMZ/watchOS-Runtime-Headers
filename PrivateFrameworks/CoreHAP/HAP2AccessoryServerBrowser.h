//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2AccessoryServerBrowser_h
#define HAP2AccessoryServerBrowser_h
@import Foundation;

#include "HAP2LoggingObject.h"
#include "HAP2AccessoryServerBrowser-Protocol.h"
#include "HAP2AccessoryServerBrowserDelegate-Protocol.h"
#include "HAP2AccessoryServerBrowserOperation.h"
#include "HAP2AccessoryServerBrowserPrivate-Protocol.h"
#include "HAP2AccessoryServerCoordinatorDelegate-Protocol.h"
#include "HAP2AccessoryServerDelegate-Protocol.h"
#include "HAP2PropertyLock.h"
#include "HAP2SerializedOperationQueue.h"
#include "HAP2StorageDelegate-Protocol.h"
#include "HAPAccessoryPairingRequest.h"
#include "HAPPowerManager.h"
#include "HAPPowerManagerProtocol-Protocol.h"

@class NSArray, NSMapTable, NSMutableArray, NSOperationQueue, NSString;
@protocol HAP2Storage, OS_dispatch_queue;

@interface HAP2AccessoryServerBrowser : HAP2LoggingObject<HAP2AccessoryServerCoordinatorDelegate, HAP2AccessoryServerDelegate, HAP2StorageDelegate, HAPPowerManagerProtocol, HAP2AccessoryServerBrowserPrivate, HAP2AccessoryServerBrowser>

@property (readonly, nonatomic) HAP2PropertyLock *propertyLock;
@property (readonly, nonatomic) NSArray *coordinatorInfo;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) HAP2SerializedOperationQueue *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchWorkQueue;
@property (retain, nonatomic) NSMutableArray *liveUnpairedAccessoryServers;
@property (retain, nonatomic) NSMutableArray *livePairedAccessoryServers;
@property (readonly, nonatomic) NSMapTable *weakOperationQueuesByDeviceID;
@property (readonly, nonatomic) NSMutableArray *browserOperationQueue;
@property (readonly, nonatomic) HAP2AccessoryServerBrowserOperation *currentOperation;
@property (nonatomic) BOOL discovering;
@property (nonatomic) BOOL confirming;
@property (retain, nonatomic) HAPPowerManager *powerManager;
@property (nonatomic) unsigned long long powerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HAPAccessoryPairingRequest *pairingRequest;
@property (readonly, nonatomic) NSObject<HAP2Storage> *storage;
@property (weak, nonatomic) NSObject<HAP2AccessoryServerBrowserDelegate> *delegate;
@property (readonly, copy, nonatomic) NSArray *unpairedAccessoryServers;
@property (readonly, copy, nonatomic) NSArray *pairedAccessoryServers;

/* class methods */
+ (id)new;

/* instance methods */
- (id)init;
- (id)initWithCoordinators:(id)coordinators storage:(id)storage;
- (BOOL)isDiscovering;
- (BOOL)isConfirming;
- (void)startDiscovering;
- (void)stopDiscovering;
- (void)startConfirmingPairedAccessoryReachability;
- (void)stopConfirmingPairedAccessoryReachability;
- (void)accessoryWithDeviceIDIsPaired:(id)paired completion:(id /* block */)completion;
- (void)retrieveLocalPairingIdentityForDeviceID:(id)id completion:(id /* block */)completion;
- (void)savePublicKey:(id)key forAccessoryWithID:(id)id completion:(id /* block */)completion;
- (void)removePublicKeyForAccessoryWithID:(id)id completion:(id /* block */)completion;
- (id)operationQueueForDeviceID:(id)id;
- (void)accessoryServerDidUpdateConnectionState:(id)state;
- (void)associateAccessoryWithControllerKeyUsingAccessoryPublicKey:(id)key;
- (void)initializeKeyBagIfNecessary;
- (BOOL)shouldRetryPVDueToAuthenticationError:(id)error;
- (id)currentIdentity;
- (void)associateAccessoryWithControllerKeyUsingAccessoryIdentifier:(id)identifier;
- (BOOL)onDemandConnectionsAreEnabled;
- (void)_enqueueOperation:(id)operation;
- (void)_beginOperation;
- (void)_finishOperation;
- (void)_startDiscovering;
- (void)_finishStartDiscovering;
- (void)_stopDiscovering;
- (void)_finishStopDiscovering;
- (void)_notifyCoordinatorsOfAccessoryWithDeviceID:(id)id;
- (id)_lookupPairedAccessoryServerWithDeviceID:(id)id;
- (id)_removeAccessoryServerFromArray:(id)array withDeviceID:(id)id;
- (void)_updateArraysForDiscoveredAccessoryServer:(id)server paired:(BOOL)paired lost:(id *)lost existing:(id *)existing;
- (void)coordinator:(id)coordinator didStartDiscoveringWithError:(id)error;
- (void)coordinator:(id)coordinator didStopDiscoveringWithError:(id)error;
- (void)coordinator:(id)coordinator didCreateUnpairedAccessoryServer:(id)server;
- (void)coordinator:(id)coordinator didCreatePairedAccessoryServer:(id)server;
- (void)coordinator:(id)coordinator didLoseAccessory:(id)accessory error:(id)error;
- (void)storage:(id)storage didRemoveKeyWithIdentifier:(id)identifier;
- (void)storage:(id)storage didSaveKeyWithIdentifier:(id)identifier;
- (void)devicePowerStateChanged:(unsigned long long)changed;
- (void)handleCurrentNetworkChangedNotification:(id)notification;
@end

#endif /* HAP2AccessoryServerBrowser_h */
