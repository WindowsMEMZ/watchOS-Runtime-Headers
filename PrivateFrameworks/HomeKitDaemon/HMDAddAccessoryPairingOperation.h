//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDAddAccessoryPairingOperation_h
#define HMDAddAccessoryPairingOperation_h
@import Foundation;

#include "HMDAccessoryBackgroundOperation.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMDAddAccessoryPairingOperation : HMDAccessoryBackgroundOperation<HMFLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)predicate;
+ (id)logCategory;

/* instance methods */
- (id)initWithAccessory:(id)accessory newPairingIdentity:(id)identity asOwner:(BOOL)owner asAdmin:(BOOL)admin shouldUpdateKeyChainEntry:(BOOL)entry;
- (id)initWithAccessory:(id)accessory newPairingIdentity:(id)identity asOwner:(BOOL)owner asAdmin:(BOOL)admin shouldUpdateKeyChainEntry:(BOOL)entry userData:(id)data;
- (id)initWithAccessoryUUID:(id)uuid accessoryIdentifier:(id)identifier newPairingIdentity:(id)identity homeUUIDWhereAccessoryWasPaired:(id)paired asOwner:(BOOL)owner asAdmin:(BOOL)admin shouldUpdateKeyChainEntry:(BOOL)entry userData:(id)data;
- (BOOL)mainWithError:(id *)error;
- (void)associateNewControllerKeyWithAccessory:(id)accessory controllerKeyIdentifierToAssociate:(id)associate permissions:(unsigned long long)permissions withCompletion:(id /* block */)completion;
- (BOOL)addPairingToHAPAccessory:(id)hapaccessory newPairingIdentity:(id)identity permissions:(unsigned long long)permissions error:(id *)error;
- (BOOL)addPairingToAirPlayAccessory:(id)accessory newPairingIdentity:(id)identity isOwner:(BOOL)owner error:(id *)error;
- (id)logIdentifier;
@end

#endif /* HMDAddAccessoryPairingOperation_h */
