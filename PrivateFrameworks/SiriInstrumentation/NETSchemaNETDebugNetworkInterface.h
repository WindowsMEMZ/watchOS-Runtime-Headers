//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.16.1.0.0
//
#ifndef NETSchemaNETDebugNetworkInterface_h
#define NETSchemaNETDebugNetworkInterface_h
@import Foundation;

#include "SISchemaInstrumentationMessage.h"

@class NSData;

@interface NETSchemaNETDebugNetworkInterface : SISchemaInstrumentationMessage {
  /* instance variables */
  struct { unsigned int x :1 rttCurrent; unsigned int x :1 rttSmoothed; unsigned int x :1 rttVariance; unsigned int x :1 rttBest; unsigned int x :1 packetsSent; unsigned int x :1 packetsReceived; unsigned int x :1 bytesSent; unsigned int x :1 bytesRetransmitted; unsigned int x :1 bytesUnacked; unsigned int x :1 bytesReceived; unsigned int x :1 duplicateBytesReceived; unsigned int x :1 outOfOrderBytesReceived; unsigned int x :1 sendBufferBytes; unsigned int x :1 sendBandwidth; unsigned int x :1 synRetransmits; unsigned int x :1 tfoSynDataAcked; unsigned int x :1 subflowSwitchCount; } _has;
}

@property (nonatomic) unsigned int rttCurrent;
@property (nonatomic) BOOL hasRttCurrent;
@property (nonatomic) unsigned int rttSmoothed;
@property (nonatomic) BOOL hasRttSmoothed;
@property (nonatomic) unsigned int rttVariance;
@property (nonatomic) BOOL hasRttVariance;
@property (nonatomic) unsigned int rttBest;
@property (nonatomic) BOOL hasRttBest;
@property (nonatomic) unsigned long long packetsSent;
@property (nonatomic) BOOL hasPacketsSent;
@property (nonatomic) unsigned long long packetsReceived;
@property (nonatomic) BOOL hasPacketsReceived;
@property (nonatomic) unsigned long long bytesSent;
@property (nonatomic) BOOL hasBytesSent;
@property (nonatomic) unsigned long long bytesRetransmitted;
@property (nonatomic) BOOL hasBytesRetransmitted;
@property (nonatomic) unsigned long long bytesUnacked;
@property (nonatomic) BOOL hasBytesUnacked;
@property (nonatomic) unsigned long long bytesReceived;
@property (nonatomic) BOOL hasBytesReceived;
@property (nonatomic) unsigned long long duplicateBytesReceived;
@property (nonatomic) BOOL hasDuplicateBytesReceived;
@property (nonatomic) unsigned long long outOfOrderBytesReceived;
@property (nonatomic) BOOL hasOutOfOrderBytesReceived;
@property (nonatomic) unsigned long long sendBufferBytes;
@property (nonatomic) BOOL hasSendBufferBytes;
@property (nonatomic) unsigned long long sendBandwidth;
@property (nonatomic) BOOL hasSendBandwidth;
@property (nonatomic) unsigned int synRetransmits;
@property (nonatomic) BOOL hasSynRetransmits;
@property (nonatomic) unsigned int tfoSynDataAcked;
@property (nonatomic) BOOL hasTfoSynDataAcked;
@property (nonatomic) unsigned int subflowSwitchCount;
@property (nonatomic) BOOL hasSubflowSwitchCount;
@property (readonly, nonatomic) NSData *jsonData;

/* instance methods */
- (id)suppressMessageUnderConditions;
- (void)deleteRttCurrent;
- (void)deleteRttSmoothed;
- (void)deleteRttVariance;
- (void)deleteRttBest;
- (void)deletePacketsSent;
- (void)deletePacketsReceived;
- (void)deleteBytesSent;
- (void)deleteBytesRetransmitted;
- (void)deleteBytesUnacked;
- (void)deleteBytesReceived;
- (void)deleteDuplicateBytesReceived;
- (void)deleteOutOfOrderBytesReceived;
- (void)deleteSendBufferBytes;
- (void)deleteSendBandwidth;
- (void)deleteSynRetransmits;
- (void)deleteTfoSynDataAcked;
- (void)deleteSubflowSwitchCount;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)json;
- (id)initWithDictionary:(id)dictionary;
@end

#endif /* NETSchemaNETDebugNetworkInterface_h */
