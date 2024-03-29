//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWPBSendData_h
#define NWPBSendData_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface NWPBSendData : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 receiveWindow; } _has;
}

@property (readonly, nonatomic) BOOL hasClientUUID;
@property (retain, nonatomic) NSString *clientUUID;
@property (readonly, nonatomic) BOOL hasMessageData;
@property (retain, nonatomic) NSData *messageData;
@property (nonatomic) BOOL hasReceiveWindow;
@property (nonatomic) unsigned int receiveWindow;

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

#endif /* NWPBSendData_h */
