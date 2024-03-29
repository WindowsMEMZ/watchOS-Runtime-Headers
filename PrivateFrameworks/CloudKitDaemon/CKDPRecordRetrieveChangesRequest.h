//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPRecordRetrieveChangesRequest_h
#define CKDPRecordRetrieveChangesRequest_h
@import Foundation;

#include "PBRequest.h"
#include "CKDPAssetsToDownload.h"
#include "CKDPRequestedFields.h"
#include "NSCopying-Protocol.h"

@class CKDPRecordZoneIdentifier, NSData;

@interface CKDPRecordRetrieveChangesRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 maxChanges; unsigned int x :1 requestedChangeTypes; unsigned int x :1 ignoreCallingDeviceChanges; unsigned int x :1 includeMergeableDeltas; unsigned int x :1 newestFirst; } _has;
}

@property (readonly, nonatomic) BOOL hasSyncContinuationToken;
@property (retain, nonatomic) NSData *syncContinuationToken;
@property (readonly, nonatomic) BOOL hasZoneIdentifier;
@property (retain, nonatomic) CKDPRecordZoneIdentifier *zoneIdentifier;
@property (readonly, nonatomic) BOOL hasRequestedFields;
@property (retain, nonatomic) CKDPRequestedFields *requestedFields;
@property (nonatomic) BOOL hasMaxChanges;
@property (nonatomic) unsigned int maxChanges;
@property (nonatomic) BOOL hasRequestedChangeTypes;
@property (nonatomic) int requestedChangeTypes;
@property (readonly, nonatomic) BOOL hasAssetsToDownload;
@property (retain, nonatomic) CKDPAssetsToDownload *assetsToDownload;
@property (nonatomic) BOOL hasNewestFirst;
@property (nonatomic) BOOL newestFirst;
@property (nonatomic) BOOL hasIgnoreCallingDeviceChanges;
@property (nonatomic) BOOL ignoreCallingDeviceChanges;
@property (nonatomic) BOOL hasIncludeMergeableDeltas;
@property (nonatomic) BOOL includeMergeableDeltas;

/* class methods */
+ (id)options;

/* instance methods */
- (id)requestedChangeTypesAsString:(int)string;
- (int)StringAsRequestedChangeTypes:(id)types;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* CKDPRecordRetrieveChangesRequest_h */
