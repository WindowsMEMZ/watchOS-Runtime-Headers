//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPAccessoryServerHAP2Adapter_h
#define HAPAccessoryServerHAP2Adapter_h
@import Foundation;

#include "HAPAccessoryServer.h"
#include "HAP2AccessoryDelegate-Protocol.h"
#include "HAP2AccessoryServerDelegate-Protocol.h"
#include "HAP2AccessorySessionInfo.h"
#include "HAP2Cancelable-Protocol.h"
#include "HAP2PairedAccessoryServer-Protocol.h"
#include "HAP2PairedAccessoryServerDelegate-Protocol.h"
#include "HAP2SerializedOperationQueue.h"
#include "HAP2UnpairedAccessoryServer-Protocol.h"
#include "HAP2UnpairedAccessoryServerDelegate-Protocol.h"
#include "HAP2UnpairedAccessoryServerPairDelegate-Protocol.h"
#include "HAPAccessory.h"
#include "HAPAccessoryPairingRequest.h"
#include "HMFTimerDelegate-Protocol.h"

@class HMFTimer, NSArray, NSString;

@interface HAPAccessoryServerHAP2Adapter : HAPAccessoryServer<HAP2AccessoryDelegate, HAP2PairedAccessoryServerDelegate, HAP2UnpairedAccessoryServerDelegate, HAP2UnpairedAccessoryServerPairDelegate, HMFTimerDelegate, HAP2AccessoryServerDelegate> {
  /* instance variables */
  HAPAccessory *_primaryAccessory;
  NSArray *_accessories;
}

@property (readonly, nonatomic) HAP2SerializedOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<HAP2UnpairedAccessoryServer> *unpairedServer;
@property (retain, nonatomic) NSObject<HAP2PairedAccessoryServer> *pairedServer;
@property (nonatomic) BOOL internallyPaired;
@property (retain, nonatomic) NSObject<HAP2Cancelable> *pairingSessionCancelable;
@property (copy, nonatomic) id /* block */ setupCodeCompletion;
@property (copy, nonatomic) id /* block */ userConsentCompletion;
@property (nonatomic) BOOL skipUserConsent;
@property (copy, nonatomic) id /* block */ authValidationCompletion;
@property (copy, nonatomic) id /* block */ softwareAuthFinishedCompletion;
@property (copy, nonatomic) id /* block */ authenticateUUIDCompletion;
@property (nonatomic) BOOL discoverAccessoriesOncePaired;
@property (retain, nonatomic) HMFTimer *connectionIdleTimer;
@property double disconnectOnIdleTimeout;
@property (retain, nonatomic) HAP2AccessorySessionInfo *sessionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) HAPAccessoryPairingRequest *pairingRequest;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithOperationQueue:(id)queue accessoryServer:(id)server;
- (id)initWithUnpairedServer:(id)server;
- (id)initWithPairedServer:(id)server;
- (void)setShouldBePaired:(BOOL)paired;
- (id)getSessionInfo;
- (void)setSessionInfoWithNumIPsResolved:(unsigned long long)resolved numIPsTried:(unsigned long long)tried numBonjourNames:(unsigned long long)names;
- (id)activeServer;
- (id)clientQueue;
- (BOOL)shouldSkipUserConsent;
- (BOOL)shouldDiscoverAccessoriesOncePaired;
- (void)updateActiveDisconnectOnIdleTimeout:(double)timeout;
- (void)_handleConnectionIdleTimeout;
- (void)_startConnectionIdleTimer;
- (void)_suspendConnectionIdleTimer;
- (void)_kickConnectionIdleTimer;
- (void)disconnectOnIdleUpdated;
- (BOOL)isPaired;
- (BOOL)isReachable;
- (id)category;
- (id)version;
- (id)setupHash;
- (unsigned long long)configNumber;
- (BOOL)hasAdvertisement;
- (id)reachabilityChangedReason;
- (id)accessories;
- (void)setAccessories:(id)accessories;
- (long long)linkLayerType;
- (long long)linkType;
- (id)primaryAccessory;
- (void)setPrimaryAccessory:(id)accessory;
- (BOOL)isSecuritySessionOpen;
- (void)setSecuritySessionOpen:(BOOL)open;
- (BOOL)supportsTimedWrite;
- (id)productData;
- (void)enableEvents:(BOOL)events forCharacteristics:(id)characteristics withCompletionHandler:(id /* block */)handler queue:(id)queue;
- (void)_enableEvents:(BOOL)events forCharacteristics:(id)characteristics withCompletionHandler:(id /* block */)handler queue:(id)queue;
- (void)identifyWithCompletion:(id /* block */)completion;
- (void)closeSessions;
- (void)disconnect;
- (void)startPing;
- (void)stopPing;
- (BOOL)doesPeriodicSessionChecks;
- (unsigned long long)sessionCheckInterval;
- (unsigned long long)numActiveSessionClients;
- (void)authenticateAccessory;
- (void)continueAuthAfterValidation:(BOOL)validation;
- (void)provisionToken:(id)token;
- (void)tearDownSessionOnAuthCompletion;
- (void)validatePairingAuthMethod:(id /* block */)method;
- (void)_handleIncorrectStartPairingCall;
- (void)_notifyDelegatePairingStoppedWithError:(id)error;
- (void)_resetPairingState;
- (void)continuePairingAfterAuthPrompt;
- (void)_continuePairingAfterAuthPromptWithError:(id)error;
- (void)continuePairingUsingWAC;
- (void)startPairingWithRequest:(id)request;
- (BOOL)tryPairingPassword:(id)password onboardingSetupPayloadString:(id)string error:(id *)error;
- (BOOL)stopPairingWithError:(id *)error;
- (void)addPairing:(id)pairing completionQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)removePairing:(id)pairing completionQueue:(id)queue completionHandler:(id /* block */)handler;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)queue completion:(id /* block */)completion;
- (void)listPairingsWithCompletionQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)readCharacteristicValues:(id)values timeout:(double)timeout completionQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)_readCharacteristicValues:(id)values timeout:(double)timeout completionQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)writeCharacteristicValues:(id)values timeout:(double)timeout completionQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)_writeCharacteristicValues:(id)values timeout:(double)timeout completionQueue:(id)queue completionHandler:(id /* block */)handler;
- (void)_printMissingValues:(id)values;
- (BOOL)_hap2CharacteristicTuplesForHAPCharacteristics:(id)hapcharacteristics tuples:(id *)tuples error:(id *)error;
- (void)accessoryServerDidUpdateConnectionState:(id)state;
- (void)accessoryServerConnectionFailureReportWithError:(id)error;
- (void)accessoryServerConnectedWithSecureSession;
- (void)accessoryServerDidUpdateName:(id)name;
- (void)accessoryServerDidUpdateCategory:(id)category;
- (void)accessory:(id)accessory didNotifyForUpdatedValuesOnCharacteristic:(id)characteristic;
- (void)handleUpdatesForCharacteristics:(id)characteristics stateNumber:(id)number;
- (void)discoverAccessories;
- (BOOL)_isActiveServer:(id)server;
- (void)_informDelegateOfUpdatedAccessories:(id)accessories error:(id)error;
- (id)_hapIdentifierForAccessory:(id)accessory;
- (void)accessoryServerDidUpdateHasPairings:(id)pairings;
- (BOOL)onDemandConnectionsAreEnabled;
- (id)currentIdentity;
- (void)accessoryServerDidBecomeUnpaired:(id)unpaired;
- (void)accessoryServerDidUpdateAccessories:(id)accessories;
- (void)accessoryServer:(id)server didFailToUpdateAccessoriesWithError:(id)error;
- (id)_accessoryFromHAP2Accessory:(id)accessory;
- (void)accessoryServer:(id)server didCompleteWithError:(id)error;
- (void)accessoryServer:(id)server doesRequirePermission:(unsigned long long)permission completion:(id /* block */)completion;
- (void)accessoryServer:(id)server didRejectSetupCodeWithBackoffInterval:(double)interval completion:(id /* block */)completion;
- (void)accessoryServer:(id)server doesRequireSetupCodeWithCompletion:(id /* block */)completion;
- (void)accessoryServer:(id)server authenticateSoftwareAuthUUID:(id)uuid token:(id)token completion:(id /* block */)completion;
- (void)accessoryServer:(id)server confirmSoftwareAuthUUID:(id)uuid token:(id)token completion:(id /* block */)completion;
- (void)accessoryServer:(id)server didFinishAuthWithError:(id)error;
- (void)accessoryServer:(id)server validatePairingCert:(id)cert model:(id)model completion:(id /* block */)completion;
- (void)accessoryServer:(id)server validateSoftwareAuthUUID:(id)uuid token:(id)token model:(id)model completion:(id /* block */)completion;
- (void)timerDidFire:(id)fire;
- (void)_firedConnectionIdleTimer:(id)timer;
- (BOOL)isInternallyPaired;
@end

#endif /* HAPAccessoryServerHAP2Adapter_h */
