//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef SIRINLUEXTERNALLegacyNLContext_h
#define SIRINLUEXTERNALLegacyNLContext_h
@import Foundation;

#include "PBCodable.h"
#include "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface SIRINLUEXTERNALLegacyNLContext : PBCodable<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 legacyContextSource; unsigned int x :1 dictationPrompt; unsigned int x :1 listenAfterSpeaking; unsigned int x :1 strictPrompt; } _has;
}

@property (nonatomic) BOOL hasDictationPrompt;
@property (nonatomic) BOOL dictationPrompt;
@property (nonatomic) BOOL hasStrictPrompt;
@property (nonatomic) BOOL strictPrompt;
@property (readonly, nonatomic) BOOL hasPreviousDomainName;
@property (retain, nonatomic) NSString *previousDomainName;
@property (nonatomic) BOOL hasListenAfterSpeaking;
@property (nonatomic) BOOL listenAfterSpeaking;
@property (retain, nonatomic) NSMutableArray *renderedTexts;
@property (nonatomic) BOOL hasLegacyContextSource;
@property (nonatomic) int legacyContextSource;

/* class methods */
+ (Class)renderedTextsType;

/* instance methods */
- (void)clearRenderedTexts;
- (void)addRenderedTexts:(id)texts;
- (unsigned long long)renderedTextsCount;
- (id)renderedTextsAtIndex:(unsigned long long)index;
- (id)legacyContextSourceAsString:(int)string;
- (int)StringAsLegacyContextSource:(id)source;
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

#endif /* SIRINLUEXTERNALLegacyNLContext_h */
