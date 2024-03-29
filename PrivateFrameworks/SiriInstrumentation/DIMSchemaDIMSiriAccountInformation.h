//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef DIMSchemaDIMSiriAccountInformation_h
#define DIMSchemaDIMSiriAccountInformation_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData, NSString;

@interface DIMSchemaDIMSiriAccountInformation : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *siriDeviceId;
@property (nonatomic) BOOL hasSiriDeviceId;
@property (copy, nonatomic) NSString *siriSpeechId;
@property (nonatomic) BOOL hasSiriSpeechId;
@property (copy, nonatomic) NSString *siriUserId;
@property (nonatomic) BOOL hasSiriUserId;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteSiriDeviceId;
- (void)deleteSiriSpeechId;
- (void)deleteSiriUserId;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* DIMSchemaDIMSiriAccountInformation_h */
