//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMSiriOnDeviceDigestSegmentsCohortsDeviceCohorts_h
#define BMSiriOnDeviceDigestSegmentsCohortsDeviceCohorts_h
@import Foundation;

#include "BMEventBase.h"
#include "BMSiriOnDeviceDigestSegmentsCohortsTimeInterval.h"
#include "BMStoreData-Protocol.h"

@class NSString;

@interface BMSiriOnDeviceDigestSegmentsCohortsDeviceCohorts : BMEventBase<BMStoreData>

@property (readonly, nonatomic) BMSiriOnDeviceDigestSegmentsCohortsTimeInterval *timeInterval;
@property (readonly, nonatomic) int cohortType;
@property (nonatomic) BOOL hasCohortType;
@property (readonly, nonatomic) int cohortDataAvailabilityState;
@property (nonatomic) BOOL hasCohortDataAvailabilityState;
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
- (id)initWithTimeInterval:(id)interval cohortType:(id)type cohortDataAvailabilityState:(id)state;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMSiriOnDeviceDigestSegmentsCohortsDeviceCohorts_h */
