//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 55.4.3.0.0
//
#ifndef BMDeviceCellularAvailabilityStatus_h
#define BMDeviceCellularAvailabilityStatus_h
@import Foundation;

#include "BMEventBase.h"
#include "BMStoreData-Protocol.h"

@class NSDate, NSString;

@interface BMDeviceCellularAvailabilityStatus : BMEventBase<BMStoreData> {
  /* instance variables */
  BOOL _hasRaw_timeStamp;
  double _raw_timeStamp;
  BOOL _hasRaw_latestStrongTimeStamp;
  double _raw_latestStrongTimeStamp;
}

@property (readonly, nonatomic) NSDate *timeStamp;
@property (readonly, nonatomic) int deviceType;
@property (readonly, nonatomic) int deviceRegistrationStatus;
@property (readonly, nonatomic) int previousDeviceRegistrationStatus;
@property (readonly, nonatomic) BOOL aboveThreshold;
@property (nonatomic) BOOL hasAboveThreshold;
@property (readonly, nonatomic) NSDate *latestStrongTimeStamp;
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
- (id)initWithTimeStamp:(id)stamp deviceType:(int)type deviceRegistrationStatus:(int)status;
- (id)initWithTimeStamp:(id)stamp deviceType:(int)type deviceRegistrationStatus:(int)status previousDeviceRegistrationStatus:(int)status;
- (id)initWithTimeStamp:(id)stamp deviceType:(int)type deviceRegistrationStatus:(int)status previousDeviceRegistrationStatus:(int)status aboveThreshold:(id)threshold latestStrongTimeStamp:(id)stamp;
- (id)initByReadFrom:(id)from;
- (void)writeTo:(id)to;
- (id)serialize;
- (id)initWithJSONDictionary:(id)jsondictionary error:(id *)error;
- (id)jsonDictionary;
- (BOOL)isEqual:(id)equal;
@end

#endif /* BMDeviceCellularAvailabilityStatus_h */
