//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue_h
#define CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 doubleValue; unsigned int x :1 int64Value; unsigned int x :1 value; unsigned int x :1 boolValue; } _has;
}

@property (nonatomic) BOOL hasDoubleValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) BOOL hasInt64Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) BOOL hasBoolValue;
@property (nonatomic) BOOL boolValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;
@property (nonatomic) BOOL hasValue;
@property (nonatomic) int value;

/* instance methods */
- (id)valueAsString:(int)string;
- (int)StringAsValue:(id)value;
- (void)clearOneofValuesForValue;
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

#endif /* CKDPResponseOperationResultErrorAuxiliaryErrorErrorUserInfoValue_h */
