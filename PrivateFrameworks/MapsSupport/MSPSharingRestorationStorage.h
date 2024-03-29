//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2811.42.9.28.8
//
#ifndef MSPSharingRestorationStorage_h
#define MSPSharingRestorationStorage_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBUnknownFields;

@interface MSPSharingRestorationStorage : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 createdTimestamp; } _has;
}

@property (nonatomic) BOOL hasCreatedTimestamp;
@property (nonatomic) double createdTimestamp;
@property (readonly, nonatomic) BOOL hasGroupIdentifier;
@property (retain, nonatomic) NSString *groupIdentifier;
@property (retain, nonatomic) NSMutableArray *mapsIdentifiers;
@property (retain, nonatomic) NSMutableArray *messagesIdentifiers;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)mapsIdentifierType;
+ (Class)messagesIdentifierType;

/* instance methods */
- (void)clearMapsIdentifiers;
- (void)addMapsIdentifier:(id)identifier;
- (unsigned long long)mapsIdentifiersCount;
- (id)mapsIdentifierAtIndex:(unsigned long long)index;
- (void)clearMessagesIdentifiers;
- (void)addMessagesIdentifier:(id)identifier;
- (unsigned long long)messagesIdentifiersCount;
- (id)messagesIdentifierAtIndex:(unsigned long long)index;
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

#endif /* MSPSharingRestorationStorage_h */
