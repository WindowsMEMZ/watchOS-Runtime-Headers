//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SISchemaUEIDictationEnablementPromptShown_h
#define SISchemaUEIDictationEnablementPromptShown_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface SISchemaUEIDictationEnablementPromptShown : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 isDictationEnabled; unsigned int x :1 isLearnMoreButtonClicked; unsigned int x :1 promptVisibilityDurationInMs; } _has;
}

@property (nonatomic) BOOL isDictationEnabled;
@property (nonatomic) BOOL hasIsDictationEnabled;
@property (nonatomic) BOOL isLearnMoreButtonClicked;
@property (nonatomic) BOOL hasIsLearnMoreButtonClicked;
@property (nonatomic) long long promptVisibilityDurationInMs;
@property (nonatomic) BOOL hasPromptVisibilityDurationInMs;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteIsDictationEnabled;
- (void)deleteIsLearnMoreButtonClicked;
- (void)deletePromptVisibilityDurationInMs;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SISchemaUEIDictationEnablementPromptShown_h */
