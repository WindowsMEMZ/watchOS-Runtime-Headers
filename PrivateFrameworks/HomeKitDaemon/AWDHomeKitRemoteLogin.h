//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef AWDHomeKitRemoteLogin_h
#define AWDHomeKitRemoteLogin_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface AWDHomeKitRemoteLogin : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 delay; unsigned int x :1 timestamp; unsigned int x :1 loginType; unsigned int x :1 requester; unsigned int x :1 resultErrorCode; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasLoginType;
@property (nonatomic) int loginType;
@property (nonatomic) BOOL hasResultErrorCode;
@property (nonatomic) int resultErrorCode;
@property (nonatomic) BOOL hasDelay;
@property (nonatomic) unsigned long long delay;
@property (nonatomic) BOOL hasRequester;
@property (nonatomic) int requester;

/* instance methods */
- (id)loginTypeAsString:(int)string;
- (int)StringAsLoginType:(id)type;
- (id)requesterAsString:(int)string;
- (int)StringAsRequester:(id)requester;
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

#endif /* AWDHomeKitRemoteLogin_h */
