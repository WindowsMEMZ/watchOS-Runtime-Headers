//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOTargetLayout_h
#define GEOTargetLayout_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@interface GEOTargetLayout : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 has_layoutInfo; unsigned int x :1 has_layoutStyle; unsigned int x :1 has_uiTarget; } _flags;
}

@property (nonatomic) BOOL hasUiTarget;
@property (nonatomic) int uiTarget;
@property (nonatomic) BOOL hasLayoutInfo;
@property (nonatomic) int layoutInfo;
@property (nonatomic) BOOL hasLayoutStyle;
@property (nonatomic) int layoutStyle;

/* class methods */
+ (BOOL)isValid:(id)valid;

/* instance methods */
- (id)uiTargetAsString:(int)string;
- (int)StringAsUiTarget:(id)target;
- (id)layoutInfoAsString:(int)string;
- (int)StringAsLayoutInfo:(id)info;
- (id)layoutStyleAsString:(int)string;
- (int)StringAsLayoutStyle:(id)style;
- (id)description;
- (id)dictionaryRepresentation;
- (id)jsonRepresentation;
- (id)initWithDictionary:(id)dictionary;
- (id)initWithJSON:(id)json;
- (void)readAll:(BOOL)all;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* GEOTargetLayout_h */
