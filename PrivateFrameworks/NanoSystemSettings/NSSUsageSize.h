//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 336.0.0.0.0
//
#ifndef NSSUsageSize_h
#define NSSUsageSize_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface NSSUsageSize : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 docsAndData; unsigned int x :1 fixed; unsigned int x :1 purgeable; } _has;
}

@property (nonatomic) BOOL hasFixed;
@property (nonatomic) unsigned long long fixed;
@property (nonatomic) BOOL hasDocsAndData;
@property (nonatomic) unsigned long long docsAndData;
@property (nonatomic) BOOL hasPurgeable;
@property (nonatomic) unsigned long long purgeable;

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

#endif /* NSSUsageSize_h */
