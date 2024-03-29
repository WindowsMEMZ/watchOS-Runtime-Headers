//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NACVolumeControlAvailabilityMessage_h
#define NACVolumeControlAvailabilityMessage_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface NACVolumeControlAvailabilityMessage : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 originIdentifier; unsigned int x :1 volumeControlAvailable; } _has;
}

@property (nonatomic) BOOL hasVolumeControlAvailable;
@property (nonatomic) BOOL volumeControlAvailable;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

/* instance methods */
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

#endif /* NACVolumeControlAvailabilityMessage_h */
