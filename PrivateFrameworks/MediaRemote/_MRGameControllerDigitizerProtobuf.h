//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _MRGameControllerDigitizerProtobuf_h
#define _MRGameControllerDigitizerProtobuf_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface _MRGameControllerDigitizerProtobuf : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 timestamp; unsigned int x :1 x; unsigned int x :1 y; unsigned int x :1 touchDown; } _has;
}

@property (nonatomic) BOOL hasX;
@property (nonatomic) double x;
@property (nonatomic) BOOL hasY;
@property (nonatomic) double y;
@property (nonatomic) BOOL hasTouchDown;
@property (nonatomic) BOOL touchDown;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

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

#endif /* _MRGameControllerDigitizerProtobuf_h */
