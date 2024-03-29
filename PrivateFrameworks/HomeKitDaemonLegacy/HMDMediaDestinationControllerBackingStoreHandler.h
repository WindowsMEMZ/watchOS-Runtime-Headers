//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMediaDestinationControllerBackingStoreHandler_h
#define HMDMediaDestinationControllerBackingStoreHandler_h
@import Foundation;

#include "HMDBackingStoreHandler.h"
#include "HMDMediaDestinationControllerBackingStoreHandlerDelegate-Protocol.h"
#include "HMDMediaDestinationControllerMetricsEventDispatcher.h"
#include "HMFLogging-Protocol.h"

@class HMMediaDestinationControllerData, HMMutableMediaDestinationControllerData, NSString;

@interface HMDMediaDestinationControllerBackingStoreHandler : HMDBackingStoreHandler<HMFLogging> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) NSObject<HMDMediaDestinationControllerBackingStoreHandlerDelegate> *delegate;
@property (retain) HMDMediaDestinationControllerMetricsEventDispatcher *metricsEventDispatcher;
@property (readonly, copy) HMMediaDestinationControllerData *data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)backingStoreObjectForData:(id)data;
+ (id)logCategory;

/* instance methods */
- (id)initWithData:(id)data backingStore:(id)store metricsEventDispatcher:(id)dispatcher delegate:(id)delegate;
- (void)updateDestinationIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)updateSupportedOptions:(unsigned long long)options completion:(id /* block */)completion;
- (void)updateAvailableDestinationIdentifiers:(id)identifiers completion:(id /* block */)completion;
- (void)removeControllerWithCompletion:(id /* block */)completion;
- (void)mergeData:(id)data;
- (void)migrateWithHome:(id)home cloudZone:(id)zone migrationQueue:(id)queue completion:(id /* block */)completion;
- (void)recoverDueToNoRecordInCloudWithHome:(id)home migrationQueue:(id)queue completion:(id /* block */)completion;
- (void)migrateWithCurrentCloudRecord:(id)record home:(id)home cloudZone:(id)zone migrationQueue:(id)queue completion:(id /* block */)completion;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)home migrationQueue:(id)queue completion:(id /* block */)completion;
- (void)updateDestinationIdentifier:(id)identifier;
- (void)updateAvailableDestinationIdentifiers:(id)identifiers;
- (void)updateSupportedOptions:(unsigned long long)options;
- (void)notifyDidUpdateDestinationIdentifier:(id)identifier;
- (void)notifyDidUpdateAvailableDestinationIdentifiers:(id)identifiers;
- (void)transactionObjectUpdated:(id)updated newValues:(id)values message:(id)message;
- (void)transactionObjectUpdatedDestinationIdentifier:(id)identifier message:(id)message;
- (void)transactionObjectUpdatedAvailableDestinationIdentifiers:(id)identifiers message:(id)message;
- (void)transactionObjectUpdatedSupportedOptions:(unsigned long long)options message:(id)message;
- (void)transactionObjectRemoved:(id)removed message:(id)message;
- (id)logIdentifier;
@end

#endif /* HMDMediaDestinationControllerBackingStoreHandler_h */
