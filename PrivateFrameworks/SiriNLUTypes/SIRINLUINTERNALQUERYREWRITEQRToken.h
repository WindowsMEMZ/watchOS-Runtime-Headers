//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUINTERNALQUERYREWRITEQRToken_h
#define SIRINLUINTERNALQUERYREWRITEQRToken_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface SIRINLUINTERNALQUERYREWRITEQRToken : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 asrConfidence; unsigned int x :1 endIndex; unsigned int x :1 startIndex; unsigned int x :1 removeSpaceAfter; } _has;
}

@property (readonly, nonatomic) BOOL hasValue;
@property (retain, nonatomic) NSString *value;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) BOOL hasAsrConfidence;
@property (nonatomic) double asrConfidence;
@property (readonly, nonatomic) BOOL hasPhoneSequence;
@property (retain, nonatomic) NSString *phoneSequence;
@property (nonatomic) BOOL hasRemoveSpaceAfter;
@property (nonatomic) BOOL removeSpaceAfter;

/* class methods */
+ (id)options;

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

#endif /* SIRINLUINTERNALQUERYREWRITEQRToken_h */
