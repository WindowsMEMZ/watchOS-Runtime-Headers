//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMFWoWLANInfo_h
#define HMFWoWLANInfo_h
@import Foundation;

#include "HMFObject.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSString;

@interface HMFWoWLANInfo : HMFObject<NSSecureCoding>

@property (readonly, nonatomic) NSData *primaryMACAddress;
@property (readonly, nonatomic) NSArray *additionalMACAddresses;
@property (readonly, nonatomic) BOOL supportsSleepConfig;
@property (readonly, nonatomic) unsigned short wakePort;
@property (retain, nonatomic) NSData *wakeAddress;
@property (readonly, nonatomic) long long wakeType;
@property (readonly, nonatomic) long long wakePacketType;
@property (readonly, nonatomic) unsigned char version;
@property (retain, nonatomic) NSData *wakePattern;
@property (readonly, nonatomic) NSString *wakeAddressString;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPrimaryIdentifier:(id)identifier wifiIdentifiers:(id)identifiers;
- (id)initWithWakeVersion:(unsigned char)version wakePort:(unsigned short)port wakeAddress:(id)address wakeType:(long long)type wakePacketType:(long long)type wakePattern:(id)pattern;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* HMFWoWLANInfo_h */
