//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1936.30.51.4.2
//
#ifndef SFAutoUnlockDevice_h
#define SFAutoUnlockDevice_h
@import Foundation;

#include "SFPeerDevice.h"
#include "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary, NSString, NSUUID;

@interface SFAutoUnlockDevice : SFPeerDevice<NSSecureCoding>

@property (copy, nonatomic) NSString *modelDescription;
@property (nonatomic) BOOL unlockEnabled;
@property (nonatomic) BOOL bluetoothCloudPaired;
@property (retain, nonatomic) NSUUID *bluetoothID;
@property (copy, nonatomic) NSUUID *proxyBluetoothID;
@property (readonly, nonatomic) long long type;
@property (retain, nonatomic) NSString *modelName;
@property (retain, nonatomic) NSDictionary *results;
@property (retain, nonatomic) NSData *hintToken;
@property (nonatomic) BOOL placeholder;
@property (nonatomic) BOOL supportsAlwaysDirect;
@property (nonatomic) BOOL supportsApproveWithWatch;
@property (nonatomic) BOOL supportsApproveIcon;
@property (nonatomic) BOOL supportsEncryption;
@property (nonatomic) BOOL supportsAdvertisingUnlocked;
@property (nonatomic) BOOL supportsConnectionCache;
@property (nonatomic) BOOL supportsHEIC;
@property (nonatomic) long long majorOSVersion;
@property (nonatomic) BOOL keyExists;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* SFAutoUnlockDevice_h */
