//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAPBLEAccessoryCache_h
#define HAPBLEAccessoryCache_h
@import Foundation;

#include "HMFObject.h"
#include "HAPBLEPeripheralInfo.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSNumber, NSString;

@interface HAPBLEAccessoryCache : HMFObject<NSSecureCoding>

@property (retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo;
@property (copy, nonatomic) id /* block */ saveBlock;
@property (readonly, nonatomic) NSNumber *metadataVersion;
@property (readonly, nonatomic) NSString *pairingIdentifier;
@property (readonly, nonatomic) NSMutableArray *cachedServices;
@property (retain, nonatomic) NSNumber *lastKeyBagIdentityIndexFailingPV;
@property (nonatomic) long long discoveryVersion;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (long long)currentDiscoveryVersion;

/* instance methods */
- (id)initWithPairingIdentifier:(id)identifier;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)updateWithSaveBlock:(id /* block */)block;
- (void)updateWithPeripheralInfo:(id)info;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)getCachedServiceWithUUID:(id)uuid;
- (void)updateWithService:(id)service;
- (void)save;
- (void)updateCurrentPairingIdentityIndexIfNeededForKeyBag:(id)bag;
- (id)description;
@end

#endif /* HAPBLEAccessoryCache_h */
