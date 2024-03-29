//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableRoutineLocationRequest_h
#define HDCodableRoutineLocationRequest_h
@import Foundation;

#include "PBRequest.h"
#include "NSCopying-Protocol.h"

@interface HDCodableRoutineLocationRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 locationType; } _has;
}

@property (nonatomic) BOOL hasLocationType;
@property (nonatomic) int locationType;

/* instance methods */
- (id)locationTypeAsString:(int)string;
- (int)StringAsLocationType:(id)type;
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

#endif /* HDCodableRoutineLocationRequest_h */
