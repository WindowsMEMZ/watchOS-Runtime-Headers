//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef _MRSendCommandResultStatusProtobuf_h
#define _MRSendCommandResultStatusProtobuf_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"
#include "_MRErrorProtobuf.h"
#include "_MRSendCommandResultHandlerDialogProtobuf.h"

@class NSData, NSString;

@interface _MRSendCommandResultStatusProtobuf : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 statusCode; unsigned int x :1 type; } _has;
}

@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) int statusCode;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasDialog;
@property (retain, nonatomic) _MRSendCommandResultHandlerDialogProtobuf *dialog;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) _MRErrorProtobuf *error;
@property (readonly, nonatomic) BOOL hasCustomData;
@property (retain, nonatomic) NSData *customData;
@property (readonly, nonatomic) BOOL hasCustomDataType;
@property (retain, nonatomic) NSString *customDataType;

/* instance methods */
- (id)statusCodeAsString:(int)string;
- (int)StringAsStatusCode:(id)code;
- (id)typeAsString:(int)string;
- (int)StringAsType:(id)type;
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

#endif /* _MRSendCommandResultStatusProtobuf_h */
