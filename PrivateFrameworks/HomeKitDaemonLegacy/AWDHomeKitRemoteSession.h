//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef AWDHomeKitRemoteSession_h
#define AWDHomeKitRemoteSession_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface AWDHomeKitRemoteSession : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 duration; unsigned int x :1 timestamp; unsigned int x :1 closeReason; unsigned int x :1 deviceType; unsigned int x :1 errorCode; unsigned int x :1 role; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDeviceType;
@property (nonatomic) unsigned int deviceType;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) unsigned int role;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasCloseReason;
@property (nonatomic) unsigned int closeReason;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;

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

#endif /* AWDHomeKitRemoteSession_h */
