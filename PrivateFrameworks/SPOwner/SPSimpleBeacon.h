//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.6.0.0.0
//
#ifndef SPSimpleBeacon_h
#define SPSimpleBeacon_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "SPKeySyncRecord.h"

@class NSString, NSUUID;

@interface SPSimpleBeacon : NSObject<NSCopying>

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSUUID *groupIdentifier;
@property (nonatomic) long long partIdentifier;
@property (nonatomic) BOOL connectionAllowed;
@property (copy, nonatomic) NSString *systemVersion;
@property (nonatomic) double txPower;
@property (copy, nonatomic) NSUUID *productUUID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long vendorId;
@property (nonatomic) long long productId;
@property (nonatomic) long long batteryLevel;
@property (nonatomic) long long connectableDeviceCount;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSString *manufacturerName;
@property (copy, nonatomic) NSString *serialNumber;
@property (copy, nonatomic) SPKeySyncRecord *keySyncRecord;

/* instance methods */
- (id)initWithInternalSimpleBeacon:(id)beacon;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)debugDescription;
@end

#endif /* SPSimpleBeacon_h */
