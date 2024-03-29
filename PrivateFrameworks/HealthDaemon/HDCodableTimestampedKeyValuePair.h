//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableTimestampedKeyValuePair_h
#define HDCodableTimestampedKeyValuePair_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString;

@interface HDCodableTimestampedKeyValuePair : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 numberDoubleValue; unsigned int x :1 numberIntValue; unsigned int x :1 timestamp; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) BOOL hasNumberIntValue;
@property (nonatomic) long long numberIntValue;
@property (nonatomic) BOOL hasNumberDoubleValue;
@property (nonatomic) double numberDoubleValue;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (retain, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) BOOL hasBytesValue;
@property (retain, nonatomic) NSData *bytesValue;

/* instance methods */
- (id)initWithKey:(id)key value:(id)value timestamp:(id)timestamp;
- (void)setValue:(id)value;
- (void)setTimestampWithDate:(id)date;
- (id)decodedValue;
- (id)decodedTimestamp;
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

#endif /* HDCodableTimestampedKeyValuePair_h */
