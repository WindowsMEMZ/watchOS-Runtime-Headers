//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKProtoMoreMessages_h
#define NNMKProtoMoreMessages_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface NNMKProtoMoreMessages : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 fullSyncVersion; unsigned int x :1 mailboxSyncVersion; } _has;
}

@property (nonatomic) BOOL hasFullSyncVersion;
@property (nonatomic) unsigned int fullSyncVersion;
@property (readonly, nonatomic) BOOL hasDateSynced;
@property (retain, nonatomic) NSData *dateSynced;
@property (retain, nonatomic) NSMutableArray *addedMessages;
@property (readonly, nonatomic) BOOL hasDateForRequestingMoreMessages;
@property (retain, nonatomic) NSData *dateForRequestingMoreMessages;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId;
@property (nonatomic) BOOL hasMailboxSyncVersion;
@property (nonatomic) unsigned int mailboxSyncVersion;

/* class methods */
+ (Class)addedMessageType;

/* instance methods */
- (void)clearAddedMessages;
- (void)addAddedMessage:(id)message;
- (unsigned long long)addedMessagesCount;
- (id)addedMessageAtIndex:(unsigned long long)index;
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

#endif /* NNMKProtoMoreMessages_h */
