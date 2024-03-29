//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef SISchemaActiveStatus_h
#define SISchemaActiveStatus_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSArray, NSData;

@interface SISchemaActiveStatus : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 carPlayActiveWithin24Hours; } _has;
}

@property (copy, nonatomic) NSArray *audioDevicesActiveWithin24Hours;
@property (nonatomic) BOOL carPlayActiveWithin24Hours;
@property (nonatomic) BOOL hasCarPlayActiveWithin24Hours;
@property (copy, nonatomic) NSArray *carBluetoothHeadUnitsActiveWithinLast24Hours;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)clearAudioDevicesActiveWithin24Hours;
- (void)deleteAudioDevicesActiveWithin24Hours;
- (void)addAudioDevicesActiveWithin24Hours:(id)hours;
- (unsigned long long)audioDevicesActiveWithin24HoursCount;
- (id)audioDevicesActiveWithin24HoursAtIndex:(unsigned long long)index;
- (void)deleteCarPlayActiveWithin24Hours;
- (void)clearCarBluetoothHeadUnitsActiveWithinLast24Hours;
- (void)deleteCarBluetoothHeadUnitsActiveWithinLast24Hours;
- (void)addCarBluetoothHeadUnitsActiveWithinLast24Hours:(id)hours;
- (unsigned long long)carBluetoothHeadUnitsActiveWithinLast24HoursCount;
- (id)carBluetoothHeadUnitsActiveWithinLast24HoursAtIndex:(unsigned long long)index;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* SISchemaActiveStatus_h */
