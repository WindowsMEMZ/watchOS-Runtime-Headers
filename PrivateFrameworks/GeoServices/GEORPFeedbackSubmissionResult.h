//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEORPFeedbackSubmissionResult_h
#define GEORPFeedbackSubmissionResult_h
@import Foundation;

#include "PBCodable.h"
#include "GEORPPhotoAttributionPreferencesUpdateResult.h"
#include "GEORPRapProfileInfo.h"
#include "GEORPTdmFraudRequestInfo.h"
#include "GEORPThirdPartyPhotoSharingPreferenceUpdateResult.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackSubmissionResult : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 read_unknownFields; unsigned int x :1 read_feedbackId; unsigned int x :1 read_imageIdMapEntrys; unsigned int x :1 read_photoAttributionPreferencesUpdateResult; unsigned int x :1 read_rapInfo; unsigned int x :1 read_tdmFraudRequestInfo; unsigned int x :1 read_thirdPartyPhotoSharingPreferenceUpdateResult; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasFeedbackId;
@property (retain, nonatomic) NSString *feedbackId;
@property (retain, nonatomic) NSMutableArray *imageIdMapEntrys;
@property (readonly, nonatomic) BOOL hasRapInfo;
@property (retain, nonatomic) GEORPRapProfileInfo *rapInfo;
@property (readonly, nonatomic) BOOL hasThirdPartyPhotoSharingPreferenceUpdateResult;
@property (retain, nonatomic) GEORPThirdPartyPhotoSharingPreferenceUpdateResult *thirdPartyPhotoSharingPreferenceUpdateResult;
@property (readonly, nonatomic) BOOL hasPhotoAttributionPreferencesUpdateResult;
@property (retain, nonatomic) GEORPPhotoAttributionPreferencesUpdateResult *photoAttributionPreferencesUpdateResult;
@property (readonly, nonatomic) BOOL hasTdmFraudRequestInfo;
@property (retain, nonatomic) GEORPTdmFraudRequestInfo *tdmFraudRequestInfo;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

/* class methods */
+ (Class)imageIdMapEntryType;
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (void)clearImageIdMapEntrys;
- (void)addImageIdMapEntry:(id)entry;
- (unsigned long long)imageIdMapEntrysCount;
- (id)imageIdMapEntryAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
- (void)clearUnknownFields:(BOOL)fields;
@end

#endif /* GEORPFeedbackSubmissionResult_h */
