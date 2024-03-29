//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDUnassociatedMediaAccessory_h
#define HMDUnassociatedMediaAccessory_h
@import Foundation;

#include "HMDUnassociatedAccessory.h"
#include "HMDAccessoryAdvertisement.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMDUnassociatedMediaAccessory : HMDUnassociatedAccessory<HMFLogging>

@property (retain) HMDAccessoryAdvertisement *advertisement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)modelForChangeType:(unsigned long long)type uuid:(id)uuid parentUUID:(id)uuid;
- (id)initWithIdentifier:(id)identifier name:(id)name category:(id)category messageDispatcher:(id)dispatcher;
- (id)initWithAdvertisement:(id)advertisement messageDispatcher:(id)dispatcher;
- (void)updateAdvertisementData:(id)data;
- (BOOL)isHAPAirPlay2Accessory;
- (unsigned long long)transportTypes;
- (id)dumpDescription;
- (long long)associationOptions;
- (BOOL)isEqual:(id)equal;
- (id)addTransactionForHome:(id)home configurationAppIdentifier:(id)identifier;
- (id)logIdentifier;
@end

#endif /* HMDUnassociatedMediaAccessory_h */
