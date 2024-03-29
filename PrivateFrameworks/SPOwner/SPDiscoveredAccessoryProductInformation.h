//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPDiscoveredAccessoryProductInformation_h
#define SPDiscoveredAccessoryProductInformation_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "SPBeaconRole.h"
#include "SPUnknownProductMetadata.h"

@class NSArray, NSData, NSString, NSURL;

@interface SPDiscoveredAccessoryProductInformation : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) long long beaconGroupVersion;
@property (nonatomic) BOOL eligibleForPairing;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL isHELEAccessory;
@property (nonatomic) BOOL isManagedAccessory;
@property (nonatomic) BOOL supportBeaconGroupInfo;
@property (copy, nonatomic) NSString *findmyProductId;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) SPBeaconRole *defaultRole;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSURL *lowBatteryInfoURL;
@property (copy, nonatomic) NSURL *disableURL;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSData *encryptionKeyE1;
@property (copy, nonatomic) NSData *encryptionKeyE2;
@property (copy, nonatomic) NSData *verificationKeyS2;
@property (nonatomic) double txPower;
@property (nonatomic) unsigned long long capabilities;
@property (copy, nonatomic) NSArray *layoutTemplate;
@property (copy, nonatomic) NSURL *defaultHeroIcon;
@property (copy, nonatomic) NSURL *defaultListIcon;
@property (copy, nonatomic) NSURL *defaultHeroIcon2x;
@property (copy, nonatomic) NSURL *defaultListIcon2x;
@property (copy, nonatomic) NSURL *defaultHeroIcon3x;
@property (copy, nonatomic) NSURL *defaultListIcon3x;
@property (copy, nonatomic) SPUnknownProductMetadata *learnModeMetadata;
@property (copy, nonatomic) SPUnknownProductMetadata *disableMetadata;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* SPDiscoveredAccessoryProductInformation_h */
