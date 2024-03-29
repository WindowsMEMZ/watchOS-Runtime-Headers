//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NETSchemaNETDebugSessionConnectionSnapshotCaptured_h
#define NETSchemaNETDebugSessionConnectionSnapshotCaptured_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"
#include "NETSchemaNETDebugSessionConnectionNetwork.h"
#include "NETSchemaNETDebugSessionConnectionPingInfo.h"
#include "NETSchemaNETDebugSessionConnectionQuality.h"

@class NSArray, NSData;

@interface NETSchemaNETDebugSessionConnectionSnapshotCaptured : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 sequenceNumber; } _has;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) BOOL hasSequenceNumber;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionNetwork *network;
@property (nonatomic) BOOL hasNetwork;
@property (copy, nonatomic) NSArray *networkInterfaces;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionPingInfo *pingInfo;
@property (nonatomic) BOOL hasPingInfo;
@property (retain, nonatomic) NETSchemaNETDebugSessionConnectionQuality *quality;
@property (nonatomic) BOOL hasQuality;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (id)applySensitiveConditionsPolicy:(id)policy;
- (void)deleteSequenceNumber;
- (void)deleteNetwork;
- (void)clearNetworkInterfaces;
- (void)deleteNetworkInterfaces;
- (void)addNetworkInterfaces:(id)interfaces;
- (unsigned long long)networkInterfacesCount;
- (id)networkInterfacesAtIndex:(unsigned long long)index;
- (void)deletePingInfo;
- (void)deleteQuality;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* NETSchemaNETDebugSessionConnectionSnapshotCaptured_h */
