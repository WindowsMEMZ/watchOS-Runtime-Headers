//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef USOSchemaUSOEntitySpan_h
#define USOSchemaUSOEntitySpan_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "USOSchemaUSOMatchInfo.h"
#include "USOSchemaUSOPayloadAttachmentInfo.h"

@class NSData, NSString;

@interface USOSchemaUSOEntitySpan : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 nodeIndex; unsigned int x :1 sourceComponent; unsigned int x :1 startIndex; unsigned int x :1 endIndex; unsigned int x :1 originAppBundleIdType; } _has;
}

@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic) BOOL hasNodeIndex;
@property (nonatomic) int sourceComponent;
@property (nonatomic) BOOL hasSourceComponent;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL hasLabel;
@property (retain, nonatomic) USOSchemaUSOMatchInfo *matchInfo;
@property (nonatomic) BOOL hasMatchInfo;
@property (nonatomic) unsigned int startIndex;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) int originAppBundleIdType;
@property (nonatomic) BOOL hasOriginAppBundleIdType;
@property (retain, nonatomic) USOSchemaUSOPayloadAttachmentInfo *payloadAttachmentInfo;
@property (nonatomic) BOOL hasPayloadAttachmentInfo;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteNodeIndex;
- (void)deleteSourceComponent;
- (void)deleteLabel;
- (void)deleteMatchInfo;
- (void)deleteStartIndex;
- (void)deleteEndIndex;
- (void)deleteOriginAppBundleIdType;
- (void)deletePayloadAttachmentInfo;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* USOSchemaUSOEntitySpan_h */
