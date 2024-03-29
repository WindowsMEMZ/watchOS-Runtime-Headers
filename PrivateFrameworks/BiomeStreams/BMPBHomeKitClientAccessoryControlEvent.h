//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPBHomeKitClientAccessoryControlEvent_h
#define BMPBHomeKitClientAccessoryControlEvent_h
@import Foundation;

#include "PBCodable.h"
#include "BMPBAccessoryState.h"
#include "BMPBHomeKitClientBase.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface BMPBHomeKitClientAccessoryControlEvent : PBCodable<NSCopying>

@property (readonly, nonatomic) BOOL hasBase;
@property (retain, nonatomic) BMPBHomeKitClientBase *base;
@property (readonly, nonatomic) BOOL hasAccessoryUniqueIdentifier;
@property (retain, nonatomic) NSString *accessoryUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasAccessoryState;
@property (retain, nonatomic) BMPBAccessoryState *accessoryState;
@property (readonly, nonatomic) BOOL hasServiceUniqueIdentifier;
@property (retain, nonatomic) NSString *serviceUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasServiceType;
@property (retain, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) BOOL hasCharacteristicType;
@property (retain, nonatomic) NSString *characteristicType;
@property (readonly, nonatomic) BOOL hasServiceGroupUniqueIdentifier;
@property (retain, nonatomic) NSString *serviceGroupUniqueIdentifier;
@property (retain, nonatomic) NSMutableArray *zoneUniqueIdentifiers;
@property (readonly, nonatomic) BOOL hasRoomUniqueIdentifier;
@property (retain, nonatomic) NSString *roomUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasAccessoryName;
@property (retain, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) BOOL hasServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) BOOL hasRoomName;
@property (retain, nonatomic) NSString *roomName;
@property (readonly, nonatomic) BOOL hasServiceGroupName;
@property (retain, nonatomic) NSString *serviceGroupName;
@property (retain, nonatomic) NSMutableArray *zoneNames;
@property (readonly, nonatomic) BOOL hasHomeName;
@property (retain, nonatomic) NSString *homeName;

/* class methods */
+ (Class)zoneUniqueIdentifiersType;
+ (Class)zoneNamesType;

/* instance methods */
- (void)clearZoneUniqueIdentifiers;
- (void)addZoneUniqueIdentifiers:(id)identifiers;
- (unsigned long long)zoneUniqueIdentifiersCount;
- (id)zoneUniqueIdentifiersAtIndex:(unsigned long long)index;
- (void)clearZoneNames;
- (void)addZoneNames:(id)names;
- (unsigned long long)zoneNamesCount;
- (id)zoneNamesAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* BMPBHomeKitClientAccessoryControlEvent_h */
