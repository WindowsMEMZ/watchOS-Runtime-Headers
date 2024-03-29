//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EDPBInteractionEventMarkedMuteThread_h
#define EDPBInteractionEventMarkedMuteThread_h
@import Foundation;

#include "PBCodable.h"
#include "EDPBDataSetters-Protocol.h"
#include "NSCopying-Protocol.h"

@interface EDPBInteractionEventMarkedMuteThread : PBCodable<EDPBDataSetters, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 conversationId; unsigned int x :1 value; } _has;
}

@property (nonatomic) BOOL hasConversationId;
@property (nonatomic) long long conversationId;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) BOOL value;

/* instance methods */
- (void)withHasher:(id)hasher setConversationID:(long long)id data:(id)data;
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

#endif /* EDPBInteractionEventMarkedMuteThread_h */
