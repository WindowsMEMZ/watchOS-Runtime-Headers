//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKProtobufPaymentDeviceRequest_h
#define PKProtobufPaymentDeviceRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface PKProtobufPaymentDeviceRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 protocolVersion; unsigned int x :1 shouldAdvertise; } _has;
}

@property (readonly, nonatomic) BOOL hasDeviceName;
@property (retain, nonatomic) NSString *deviceName;
@property (nonatomic) BOOL hasShouldAdvertise;
@property (nonatomic) BOOL shouldAdvertise;
@property (retain, nonatomic) NSMutableArray *knownManifestHashes;
@property (nonatomic) BOOL hasProtocolVersion;
@property (nonatomic) unsigned int protocolVersion;

/* class methods */
+ (Class)knownManifestHashesType;

/* instance methods */
- (void)clearKnownManifestHashes;
- (void)addKnownManifestHashes:(id)hashes;
- (unsigned long long)knownManifestHashesCount;
- (id)knownManifestHashesAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* PKProtobufPaymentDeviceRequest_h */
