//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef NTPBNetworkSession_h
#define NTPBNetworkSession_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface NTPBNetworkSession : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 sessionID; unsigned int x :1 cellularRadioAccessTechnology; unsigned int x :1 wifiReachable; } _has;
}

@property (nonatomic) BOOL hasSessionID;
@property (nonatomic) unsigned long long sessionID;
@property (nonatomic) BOOL hasWifiReachable;
@property (nonatomic) BOOL wifiReachable;
@property (nonatomic) BOOL hasCellularRadioAccessTechnology;
@property (nonatomic) int cellularRadioAccessTechnology;

/* instance methods */
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* NTPBNetworkSession_h */
