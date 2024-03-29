//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SISchemaSiriUISettings_h
#define SISchemaSiriUISettings_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface SISchemaSiriUISettings : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 alwaysShowUserSpeechTranscript; unsigned int x :1 alwaysBlurBackground; unsigned int x :1 alwaysShowSiriDialog; } _has;
}

@property (nonatomic) BOOL alwaysShowUserSpeechTranscript;
@property (nonatomic) BOOL hasAlwaysShowUserSpeechTranscript;
@property (nonatomic) BOOL alwaysBlurBackground;
@property (nonatomic) BOOL hasAlwaysBlurBackground;
@property (nonatomic) BOOL alwaysShowSiriDialog;
@property (nonatomic) BOOL hasAlwaysShowSiriDialog;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteAlwaysShowUserSpeechTranscript;
- (void)deleteAlwaysBlurBackground;
- (void)deleteAlwaysShowSiriDialog;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SISchemaSiriUISettings_h */
