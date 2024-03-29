//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef CSDMessagingMemberAssociationClaim_h
#define CSDMessagingMemberAssociationClaim_h
@import Foundation;

#include "PBCodable.h"
#include "CSDMessagingHandle.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface CSDMessagingMemberAssociationClaim : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 primaryIdentifier; unsigned int x :1 type; unsigned int x :1 version; } _has;
}

@property (nonatomic) BOOL hasVersion;
@property (nonatomic) unsigned int version;
@property (readonly, nonatomic) BOOL hasPrimaryHandle;
@property (retain, nonatomic) CSDMessagingHandle *primaryHandle;
@property (nonatomic) BOOL hasPrimaryIdentifier;
@property (nonatomic) unsigned long long primaryIdentifier;
@property (readonly, nonatomic) BOOL hasPrimaryAvcIdentifier;
@property (retain, nonatomic) NSString *primaryAvcIdentifier;
@property (readonly, nonatomic) BOOL hasAssociatedPseudonym;
@property (retain, nonatomic) CSDMessagingHandle *associatedPseudonym;
@property (readonly, nonatomic) BOOL hasConversationGroupUUIDString;
@property (retain, nonatomic) NSString *conversationGroupUUIDString;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;

/* instance methods */
- (id)tuAssociationForHandle:(id)handle;
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

#endif /* CSDMessagingMemberAssociationClaim_h */
