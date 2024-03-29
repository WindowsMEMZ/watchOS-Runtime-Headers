//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSQRProtoPeerPublishedStream_h
#define IDSQRProtoPeerPublishedStream_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface IDSQRProtoPeerPublishedStream : PBCodable<NSCopying>

@property (nonatomic) unsigned long long peerParticipantId;
@property (readonly, nonatomic) unsigned long long peerStreamIdsCount;
@property (readonly, nonatomic) unsigned int * peerStreamIds;

/* instance methods */
- (void)dealloc;
- (void)clearPeerStreamIds;
- (void)addPeerStreamIds:(unsigned int)ids;
- (unsigned int)peerStreamIdsAtIndex:(unsigned long long)index;
- (void)setPeerStreamIds:(unsigned int *)ids count:(unsigned long long)count;
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

#endif /* IDSQRProtoPeerPublishedStream_h */
