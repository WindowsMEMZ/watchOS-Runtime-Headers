//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgStateUser_h
#define GEOLogMsgStateUser_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEOLogMsgStateUser : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_preSyncSessionId; unsigned int x :1 has_bestMapsUseStartDate; unsigned int x :1 has_mapsUseLastDate; unsigned int x :1 has_mapsUseStartDate; unsigned int x :1 has_syncFirstTimestamp; unsigned int x :1 has_syncLastTimestamp; unsigned int x :1 has_isSignedInWithDsid; unsigned int x :1 has_isTourist; unsigned int x :1 read_homeCountryCode; unsigned int x :1 read_homeMetroRegion; unsigned int x :1 wrote_anyField; } _flags;
}

@property (nonatomic) BOOL hasSyncFirstTimestamp;
@property (nonatomic) double syncFirstTimestamp;
@property (nonatomic) BOOL hasSyncLastTimestamp;
@property (nonatomic) double syncLastTimestamp;
@property (nonatomic) BOOL hasMapsUseStartDate;
@property (nonatomic) double mapsUseStartDate;
@property (nonatomic) BOOL hasMapsUseLastDate;
@property (nonatomic) double mapsUseLastDate;
@property (readonly, nonatomic) BOOL hasHomeCountryCode;
@property (retain, nonatomic) NSString *homeCountryCode;
@property (readonly, nonatomic) BOOL hasHomeMetroRegion;
@property (retain, nonatomic) NSString *homeMetroRegion;
@property (nonatomic) BOOL hasIsTourist;
@property (nonatomic) BOOL isTourist;
@property (nonatomic) BOOL hasPreSyncSessionId;
@property (nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } preSyncSessionId;
@property (nonatomic) BOOL hasIsSignedInWithDsid;
@property (nonatomic) BOOL isSignedInWithDsid;
@property (nonatomic) BOOL hasBestMapsUseStartDate;
@property (nonatomic) double bestMapsUseStartDate;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
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
@end

#endif /* GEOLogMsgStateUser_h */
