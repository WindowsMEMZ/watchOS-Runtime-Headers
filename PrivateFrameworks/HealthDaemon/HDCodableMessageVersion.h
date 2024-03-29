//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCodableMessageVersion_h
#define HDCodableMessageVersion_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface HDCodableMessageVersion : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 compatibilityVersion; unsigned int x :1 entityVersion; } _has;
}

@property (nonatomic) BOOL hasEntityVersion;
@property (nonatomic) int entityVersion;
@property (nonatomic) BOOL hasCompatibilityVersion;
@property (nonatomic) int compatibilityVersion;

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

#endif /* HDCodableMessageVersion_h */
