//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 61040.64.1.0.0
//
#ifndef OTEscrowRecordMetadata_h
#define OTEscrowRecordMetadata_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "OTEscrowRecordMetadataClientMetadata.h"

@class NSData, NSString;

@interface OTEscrowRecordMetadata : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 secureBackupTimestamp; unsigned int x :1 secureBackupUsesMultipleIcscs; } _has;
}

@property (readonly, nonatomic) BOOL hasBackupKeybagDigest;
@property (retain, nonatomic) NSData *backupKeybagDigest;
@property (readonly, nonatomic) BOOL hasClientMetadata;
@property (retain, nonatomic) OTEscrowRecordMetadataClientMetadata *clientMetadata;
@property (nonatomic) BOOL hasSecureBackupUsesMultipleIcscs;
@property (nonatomic) unsigned long long secureBackupUsesMultipleIcscs;
@property (readonly, nonatomic) BOOL hasBottleId;
@property (retain, nonatomic) NSString *bottleId;
@property (nonatomic) BOOL hasSecureBackupTimestamp;
@property (nonatomic) unsigned long long secureBackupTimestamp;
@property (readonly, nonatomic) BOOL hasEscrowedSpki;
@property (retain, nonatomic) NSData *escrowedSpki;
@property (readonly, nonatomic) BOOL hasPeerInfo;
@property (retain, nonatomic) NSData *peerInfo;
@property (readonly, nonatomic) BOOL hasBottleValidity;
@property (retain, nonatomic) NSString *bottleValidity;
@property (readonly, nonatomic) BOOL hasSerial;
@property (retain, nonatomic) NSString *serial;

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

#endif /* OTEscrowRecordMetadata_h */
