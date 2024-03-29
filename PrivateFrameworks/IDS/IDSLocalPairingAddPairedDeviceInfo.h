//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSLocalPairingAddPairedDeviceInfo_h
#define IDSLocalPairingAddPairedDeviceInfo_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSData, NSUUID;

@interface IDSLocalPairingAddPairedDeviceInfo : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSUUID *cbuuid;
@property (readonly, nonatomic) long long pairingProtocolVersion;
@property (readonly, nonatomic) NSData *BTOutOfBandKey;
@property (nonatomic) BOOL supportsIPsecWithSPPLink;
@property (nonatomic) long long pairingType;
@property (retain, nonatomic) NSData *bluetoothMACAddress;
@property (nonatomic) BOOL shouldPairDirectlyOverIPsec;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCBUUID:(id)cbuuid pairingProtocolVersion:(long long)version BTOutOfBandKey:(id)key;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* IDSLocalPairingAddPairedDeviceInfo_h */
