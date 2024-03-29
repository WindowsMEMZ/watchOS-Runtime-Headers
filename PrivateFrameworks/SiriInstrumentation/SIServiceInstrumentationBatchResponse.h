//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SIServiceInstrumentationBatchResponse_h
#define SIServiceInstrumentationBatchResponse_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData, NSString;

@interface SIServiceInstrumentationBatchResponse : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 status_code; } _has;
}

@property (copy, nonatomic) NSData *batch_id;
@property (nonatomic) BOOL hasBatch_id;
@property (nonatomic) int status_code;
@property (nonatomic) BOOL hasStatus_code;
@property (copy, nonatomic) NSString *message;
@property (nonatomic) BOOL hasMessage;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteBatch_id;
- (void)deleteStatus_code;
- (void)deleteMessage;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SIServiceInstrumentationBatchResponse_h */
