//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NPKProtoSetCommutePlanReminderForCommutePlanAndPassRequest_h
#define NPKProtoSetCommutePlanReminderForCommutePlanAndPassRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface NPKProtoSetCommutePlanReminderForCommutePlanAndPassRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 reminderInterval; } _has;
}

@property (readonly, nonatomic) BOOL hasUniqueID;
@property (retain, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL hasCommutePlanBytes;
@property (retain, nonatomic) NSData *commutePlanBytes;
@property (nonatomic) BOOL hasReminderInterval;
@property (nonatomic) double reminderInterval;

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

#endif /* NPKProtoSetCommutePlanReminderForCommutePlanAndPassRequest_h */
