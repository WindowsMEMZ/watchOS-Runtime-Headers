//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PREUMMessageMetadata_h
#define PREUMMessageMetadata_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSString;

@interface PREUMMessageMetadata : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 ageGroup; unsigned int x :1 charCount; unsigned int x :1 hasQuestionMark; unsigned int x :1 isApricotDevice; } _has;
}

@property (readonly, nonatomic) BOOL hasHostProcess;
@property (retain, nonatomic) NSString *hostProcess;
@property (readonly, nonatomic) BOOL hasLocale;
@property (retain, nonatomic) NSString *locale;
@property (readonly, nonatomic) BOOL hasLang;
@property (retain, nonatomic) NSString *lang;
@property (nonatomic) BOOL hasIsApricotDevice;
@property (nonatomic) BOOL isApricotDevice;
@property (nonatomic) BOOL hasCharCount;
@property (nonatomic) unsigned int charCount;
@property (nonatomic) BOOL hasAgeGroup;
@property (nonatomic) int ageGroup;
@property (nonatomic) BOOL hasHasQuestionMark;
@property (nonatomic) BOOL hasQuestionMark;

/* instance methods */
- (id)ageGroupAsString:(int)string;
- (int)StringAsAgeGroup:(id)group;
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

#endif /* PREUMMessageMetadata_h */
