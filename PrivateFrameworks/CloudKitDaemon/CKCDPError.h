//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKCDPError_h
#define CKCDPError_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface CKCDPError : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 auxiliaryCode; unsigned int x :1 code; unsigned int x :1 targetPartition; } _has;
}

@property (nonatomic) BOOL hasCode;
@property (nonatomic) int code;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) NSString *message;
@property (readonly, nonatomic) BOOL hasAuxiliaryDomain;
@property (retain, nonatomic) NSString *auxiliaryDomain;
@property (nonatomic) BOOL hasAuxiliaryCode;
@property (nonatomic) int auxiliaryCode;
@property (retain, nonatomic) NSMutableArray *auxiliaryUserInfos;
@property (nonatomic) BOOL hasTargetPartition;
@property (nonatomic) int targetPartition;

/* class methods */
+ (Class)auxiliaryUserInfoType;

/* instance methods */
- (id)codeAsString:(int)string;
- (int)StringAsCode:(id)code;
- (void)clearAuxiliaryUserInfos;
- (void)addAuxiliaryUserInfo:(id)info;
- (unsigned long long)auxiliaryUserInfosCount;
- (id)auxiliaryUserInfoAtIndex:(unsigned long long)index;
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

#endif /* CKCDPError_h */
