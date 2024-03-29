//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef CLPInstSchemaCLPCDMReplayTaskStarted_h
#define CLPInstSchemaCLPCDMReplayTaskStarted_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "SISchemaAsset.h"

@class NSArray, NSData;

@interface CLPInstSchemaCLPCDMReplayTaskStarted : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 replayType; } _has;
}

@property (retain, nonatomic) SISchemaAsset *pluginTaskAsset;
@property (nonatomic) BOOL hasPluginTaskAsset;
@property (copy, nonatomic) NSArray *availableSiriAssets;
@property (nonatomic) int replayType;
@property (nonatomic) BOOL hasReplayType;
@property (copy, nonatomic) NSArray *habitualUsages;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deletePluginTaskAsset;
- (void)clearAvailableSiriAssets;
- (void)deleteAvailableSiriAssets;
- (void)addAvailableSiriAssets:(id)assets;
- (unsigned long long)availableSiriAssetsCount;
- (id)availableSiriAssetsAtIndex:(unsigned long long)index;
- (void)deleteReplayType;
- (void)clearHabitualUsage;
- (void)deleteHabitualUsage;
- (void)addHabitualUsage:(id)usage;
- (unsigned long long)habitualUsageCount;
- (id)habitualUsageAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* CLPInstSchemaCLPCDMReplayTaskStarted_h */
