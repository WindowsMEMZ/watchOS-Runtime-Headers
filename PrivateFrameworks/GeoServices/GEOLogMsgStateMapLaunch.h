//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOLogMsgStateMapLaunch_h
#define GEOLogMsgStateMapLaunch_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString, PBDataReader;

@interface GEOLogMsgStateMapLaunch : PBCodable<NSCopying> {
  /* instance variables */
  PBDataReader *_reader;
  unsigned int _readerMarkPos;
  unsigned int _readerMarkLength;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
  struct { unsigned int x :1 has_launchActionInternal; unsigned int x :1 has_launchAction; unsigned int x :1 has_isHandoff; unsigned int x :1 read_launchUri; unsigned int x :1 read_referringWebsite; unsigned int x :1 read_sourceAppId; unsigned int x :1 read_sourceHandoffDevice; unsigned int x :1 wrote_anyField; } _flags;
}

@property (readonly, nonatomic) BOOL hasSourceAppId;
@property (retain, nonatomic) NSString *sourceAppId;
@property (readonly, nonatomic) BOOL hasLaunchUri;
@property (retain, nonatomic) NSString *launchUri;
@property (readonly, nonatomic) BOOL hasReferringWebsite;
@property (retain, nonatomic) NSString *referringWebsite;
@property (nonatomic) BOOL hasIsHandoff;
@property (nonatomic) BOOL isHandoff;
@property (readonly, nonatomic) BOOL hasSourceHandoffDevice;
@property (retain, nonatomic) NSString *sourceHandoffDevice;
@property (nonatomic) BOOL hasLaunchAction;
@property (nonatomic) int launchAction;
@property (nonatomic) BOOL hasLaunchActionInternal;
@property (nonatomic) int launchActionInternal;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)init;
- (id)initWithData:(id)data;
- (id)launchActionAsString:(int)string;
- (int)StringAsLaunchAction:(id)action;
- (id)launchActionInternalAsString:(int)string;
- (int)StringAsLaunchActionInternal:(id)internal;
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

#endif /* GEOLogMsgStateMapLaunch_h */
