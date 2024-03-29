//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMSMediaSyncServiceKeepLocalResponse_h
#define NMSMediaSyncServiceKeepLocalResponse_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface NMSMediaSyncServiceKeepLocalResponse : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 errorCode; } _has;
}

@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (readonly, nonatomic) unsigned long long validatorExceptionsCount;
@property (readonly, nonatomic) int * validatorExceptions;

/* instance methods */
- (void)dealloc;
- (id)errorCodeAsString:(int)string;
- (int)StringAsErrorCode:(id)code;
- (void)clearValidatorExceptions;
- (void)addValidatorException:(int)exception;
- (int)validatorExceptionAtIndex:(unsigned long long)index;
- (void)setValidatorExceptions:(int *)exceptions count:(unsigned long long)count;
- (id)validatorExceptionsAsString:(int)string;
- (int)StringAsValidatorExceptions:(id)exceptions;
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

#endif /* NMSMediaSyncServiceKeepLocalResponse_h */
