//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMSiriOnDeviceDigestUsageMetricsEventMetadata_h
#define BMSiriOnDeviceDigestUsageMetricsEventMetadata_h
@import Foundation;

#include "BMEventBase.h"
#include "BMSiriOnDeviceDigestUsageMetricsEventMetadataTimeInterval.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMSiriOnDeviceDigestUsageMetricsEventMetadata : BMEventBase<BMStoreData>

@property (readonly, nonatomic) NSString *oddIdUUID;
@property (readonly, nonatomic) NSString *deviceAggregationId;
@property (readonly, nonatomic) NSString *userAggregationId;
@property (readonly, nonatomic) unsigned long long eventTimestampInMSSince1970;
@property (nonatomic) BOOL hasEventTimestampInMSSince1970;
@property (readonly, nonatomic) BMSiriOnDeviceDigestUsageMetricsEventMetadataTimeInterval *timeInterval;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)eventWithData:(id)data dataVersion:(unsigned int)version;
+ (id)columns;
+ (id)validKeyPaths;

/* instance methods */
- (id)initWithOddIdUUID:(id)uuid deviceAggregationId:(id)id userAggregationId:(id)id eventTimestampInMSSince1970:(id)mssince1970 timeInterval:(id)interval;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMSiriOnDeviceDigestUsageMetricsEventMetadata_h */
