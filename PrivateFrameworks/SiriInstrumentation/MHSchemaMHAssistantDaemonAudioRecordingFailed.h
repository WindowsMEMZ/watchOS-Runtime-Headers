//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef MHSchemaMHAssistantDaemonAudioRecordingFailed_h
#define MHSchemaMHAssistantDaemonAudioRecordingFailed_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData, NSString;

@interface MHSchemaMHAssistantDaemonAudioRecordingFailed : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 reason; } _has;
}

@property (nonatomic) int reason;
@property (nonatomic) BOOL hasReason;
@property (copy, nonatomic) NSString *audioInterfaceVendorId;
@property (nonatomic) BOOL hasAudioInterfaceVendorId;
@property (copy, nonatomic) NSString *audioInterfaceProductId;
@property (nonatomic) BOOL hasAudioInterfaceProductId;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteReason;
- (void)deleteAudioInterfaceVendorId;
- (void)deleteAudioInterfaceProductId;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* MHSchemaMHAssistantDaemonAudioRecordingFailed_h */
