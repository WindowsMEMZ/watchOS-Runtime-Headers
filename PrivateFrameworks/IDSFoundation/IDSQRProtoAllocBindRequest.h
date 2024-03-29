//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSQRProtoAllocBindRequest_h
#define IDSQRProtoAllocBindRequest_h
@import Foundation;

#include "PBRequest.h"
#include "IDSQRProtoAllocBindTestOption.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableArray, NSString;

@interface IDSQRProtoAllocBindRequest : PBRequest<NSCopying> {
  /* instance variables */
  struct { unsigned int x :1 capabilities; unsigned int x :1 channelBindingInfo; unsigned int x :1 maxConcurrentStreams; unsigned int x :1 maxEmbeddedStatsResponseDelay; unsigned int x :1 serviceId; unsigned int x :1 stateFlags; unsigned int x :1 allWildcardSubscription; } _has;
}

@property (nonatomic) BOOL hasServiceId;
@property (nonatomic) unsigned int serviceId;
@property (readonly, nonatomic) BOOL hasClientOsVersion;
@property (retain, nonatomic) NSString *clientOsVersion;
@property (readonly, nonatomic) BOOL hasClientHwVersion;
@property (retain, nonatomic) NSString *clientHwVersion;
@property (nonatomic) BOOL hasCapabilities;
@property (nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) unsigned long long publishedStreamIdsCount;
@property (readonly, nonatomic) unsigned int * publishedStreamIds;
@property (retain, nonatomic) NSMutableArray *subscribedStreams;
@property (nonatomic) BOOL hasAllWildcardSubscription;
@property (nonatomic) BOOL allWildcardSubscription;
@property (nonatomic) BOOL hasMaxConcurrentStreams;
@property (nonatomic) unsigned int maxConcurrentStreams;
@property (nonatomic) BOOL hasChannelBindingInfo;
@property (nonatomic) unsigned int channelBindingInfo;
@property (nonatomic) BOOL hasMaxEmbeddedStatsResponseDelay;
@property (nonatomic) unsigned int maxEmbeddedStatsResponseDelay;
@property (retain, nonatomic) NSMutableArray *quicConnectionInfos;
@property (nonatomic) BOOL hasStateFlags;
@property (nonatomic) unsigned int stateFlags;
@property (readonly, nonatomic) BOOL hasRandomSalt;
@property (retain, nonatomic) NSData *randomSalt;
@property (readonly, nonatomic) BOOL hasAccessToken;
@property (retain, nonatomic) NSData *accessToken;
@property (readonly, nonatomic) BOOL hasServerBlob;
@property (retain, nonatomic) NSData *serverBlob;
@property (readonly, nonatomic) BOOL hasTestOption;
@property (retain, nonatomic) IDSQRProtoAllocBindTestOption *testOption;
@property (retain, nonatomic) NSMutableArray *materials;

/* class methods */
+ (Class)subscribedStreamsType;
+ (Class)quicConnectionInfoType;
+ (Class)materialsType;

/* instance methods */
- (void)dealloc;
- (void)clearPublishedStreamIds;
- (void)addPublishedStreamIds:(unsigned int)ids;
- (unsigned int)publishedStreamIdsAtIndex:(unsigned long long)index;
- (void)setPublishedStreamIds:(unsigned int *)ids count:(unsigned long long)count;
- (void)clearSubscribedStreams;
- (void)addSubscribedStreams:(id)streams;
- (unsigned long long)subscribedStreamsCount;
- (id)subscribedStreamsAtIndex:(unsigned long long)index;
- (void)clearQuicConnectionInfos;
- (void)addQuicConnectionInfo:(id)info;
- (unsigned long long)quicConnectionInfosCount;
- (id)quicConnectionInfoAtIndex:(unsigned long long)index;
- (void)clearMaterials;
- (void)addMaterials:(id)materials;
- (unsigned long long)materialsCount;
- (id)materialsAtIndex:(unsigned long long)index;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)readFrom:(id)from;
- (void)writeTo:(id)to;
- (void)copyTo:(id)to;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (void)mergeFrom:(id)from;
@end

#endif /* IDSQRProtoAllocBindRequest_h */
