//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDCHIPAccessoryDataSource_h
#define HMDCHIPAccessoryDataSource_h
@import Foundation;

#include "HMFObject.h"
#include "HMDHAPAccessory.h"
#include "HMMTRDeviceStorageDataSource-Protocol.h"

@class NSData, NSNumber, NSSet, NSString;

@interface HMDCHIPAccessoryDataSource : HMFObject<HMMTRDeviceStorageDataSource>

@property (weak) HMDHAPAccessory *accessory;
@property (readonly, copy, nonatomic) NSNumber *nodeID;
@property (readonly, copy, nonatomic) NSNumber *vendorID;
@property (readonly, copy, nonatomic) NSNumber *productID;
@property (readonly, copy, nonatomic) NSData *attributeDatabase;
@property (readonly, nonatomic) BOOL wedSupport;
@property (readonly, copy, nonatomic) NSString *extendedMACAddress;
@property (readonly, copy, nonatomic) NSSet *pairings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithNodeID:(id)id accessory:(id)accessory;
- (void)_updateAccessoryModelWithLabel:(id)label completion:(id /* block */)completion block:(id /* block */)block;
- (void)updateNodeID:(id)id completion:(id /* block */)completion;
- (void)updateVendorID:(id)id completion:(id /* block */)completion;
- (void)updateProductID:(id)id completion:(id /* block */)completion;
- (void)updateVendorID:(id)id productID:(id)id completion:(id /* block */)completion;
- (void)updateAttributeDatabase:(id)database completion:(id /* block */)completion;
- (void)updatePairings:(id)pairings completion:(id /* block */)completion;
- (id)logIdentifier;
@end

#endif /* HMDCHIPAccessoryDataSource_h */
