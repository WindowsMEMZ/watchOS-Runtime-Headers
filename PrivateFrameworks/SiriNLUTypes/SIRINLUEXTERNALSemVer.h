//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUEXTERNALSemVer_h
#define SIRINLUEXTERNALSemVer_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface SIRINLUEXTERNALSemVer : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 majorVersion; unsigned int x :1 minorVersion; unsigned int x :1 patchVersion; } _has;
}

@property (nonatomic) BOOL hasMajorVersion;
@property (nonatomic) unsigned int majorVersion;
@property (nonatomic) BOOL hasMinorVersion;
@property (nonatomic) unsigned int minorVersion;
@property (nonatomic) BOOL hasPatchVersion;
@property (nonatomic) unsigned int patchVersion;

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

#endif /* SIRINLUEXTERNALSemVer_h */
