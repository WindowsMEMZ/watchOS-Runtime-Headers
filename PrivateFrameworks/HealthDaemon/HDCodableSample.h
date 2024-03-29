//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableSample_h
#define HDCodableSample_h
@import Foundation;

#include "PBCodable.h"
#include "HDCodableHealthObject.h"
#include "HDDecoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface HDCodableSample : PBCodable<HDDecoding, NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 dataType; unsigned int x :1 endDate; unsigned int x :1 startDate; } _has;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasObject;
@property (retain, nonatomic) HDCodableHealthObject *object;
@property (nonatomic) BOOL hasDataType;
@property (nonatomic) long long dataType;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;

/* instance methods */
- (BOOL)applyToObject:(id)object;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (void)mergeFrom:(id)from;
@end

#endif /* HDCodableSample_h */
