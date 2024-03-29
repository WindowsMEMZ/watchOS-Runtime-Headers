//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 123.2.7.0.1
//
#ifndef BMPBTextInputSessionEvent_h
#define BMPBTextInputSessionEvent_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface BMPBTextInputSessionEvent : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 duration; unsigned int x :1 timestamp; unsigned int x :1 sessionType; } _has;
}

@property (nonatomic) BOOL hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasSessionType;
@property (nonatomic) int sessionType;
@property (readonly, nonatomic) BOOL hasSessionID;
@property (retain, nonatomic) NSString *sessionID;

/* instance methods */
- (id)sessionTypeAsString:(int)string;
- (int)StringAsSessionType:(id)type;
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

#endif /* BMPBTextInputSessionEvent_h */
