//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSQRProtoParticipantUpdateRequest_h
#define IDSQRProtoParticipantUpdateRequest_h
@import Foundation;

#include "PBRequest.h"
#include "IDSQRProtoMaterialInfo.h"
#include "NSCopying-Protocol.h"

@interface IDSQRProtoParticipantUpdateRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 sessionStateCounter; } _has;
}

@property (nonatomic) unsigned int operationFlags;
@property (readonly, nonatomic) unsigned long long participantIdListsCount;
@property (readonly, nonatomic) unsigned long long * participantIdLists;
@property (readonly, nonatomic) BOOL hasContextBlob;
@property (retain, nonatomic) IDSQRProtoMaterialInfo *contextBlob;
@property (nonatomic) BOOL hasSessionStateCounter;
@property (nonatomic) unsigned int sessionStateCounter;

/* instance methods */
- (void)dealloc;
- (void)clearParticipantIdLists;
- (void)addParticipantIdList:(unsigned long long)list;
- (unsigned long long)participantIdListAtIndex:(unsigned long long)index;
- (void)setParticipantIdLists:(unsigned long long *)lists count:(unsigned long long)count;
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

#endif /* IDSQRProtoParticipantUpdateRequest_h */
