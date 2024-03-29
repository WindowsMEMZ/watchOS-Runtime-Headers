//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSEndpointerMetrics_h
#define CSEndpointerMetrics_h
@import Foundation;

#include "CSServerEndpointFeatures.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSString, OSDFeatures;

@interface CSEndpointerMetrics : NSObject<NSCopying, NSSecureCoding>

@property (nonatomic) double totalAudioRecorded;
@property (nonatomic) unsigned long long endpointBufferHostTime;
@property (retain, nonatomic) NSArray *featuresAtEndpoint;
@property (nonatomic) long long endpointerType;
@property (retain, nonatomic) NSDictionary *serverFeatureLatencyDistribution;
@property (retain, nonatomic) NSDictionary *additionalMetrics;
@property (nonatomic) double trailingSilenceDurationAtEndpoint;
@property (retain, nonatomic) NSString *requestId;
@property (retain, nonatomic) OSDFeatures *osdFeaturesAtEndpoint;
@property (retain, nonatomic) CSServerEndpointFeatures *serverFeaturesAtEndpoint;
@property (nonatomic) BOOL isRequestTimeOut;
@property (nonatomic) BOOL isAnchorTimeBuffered;
@property (retain, nonatomic) NSString *assetConfigVersion;
@property (nonatomic) unsigned long long assetProviderType;
@property (nonatomic) double blkHepAudioOrigin;
@property (nonatomic) double vtExtraAudioAtStartInMs;
@property (nonatomic) unsigned long long firstAudioSampleSensorTimestamp;
@property (nonatomic) unsigned long long endpointHostTime;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithTotalAudioRecorded:(double)recorded endpointBufferHostTime:(unsigned long long)time featuresAtEndpoint:(id)endpoint endpointerType:(long long)type serverFeatureLatencyDistribution:(id)distribution additionalMetrics:(id)metrics trailingSilenceDurationAtEndpoint:(double)endpoint requestId:(id)id osdFeatures:(id)features serverFeatures:(id)features isRequestTimeOut:(BOOL)out assetConfigVersion:(id)version assetProviderType:(unsigned long long)type blkHepAudioOrigin:(double)origin vtExtraAudioAtStartInMs:(double)ms firstAudioSampleSensorTimestamp:(unsigned long long)timestamp isAnchorTimeBuffered:(BOOL)buffered endpointHostTime:(unsigned long long)time;
- (id)initWithTotalAudioRecorded:(double)recorded endpointBufferHostTime:(unsigned long long)time featuresAtEndpoint:(id)endpoint endpointerType:(long long)type serverFeatureLatencyDistribution:(id)distribution additionalMetrics:(id)metrics trailingSilenceDurationAtEndpoint:(double)endpoint requestId:(id)id;
- (id)metricsCopyWithRequestId:(id)id lastAudioChunkHostTime:(unsigned long long)time;
- (BOOL)isEnhancedEndpointer;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* CSEndpointerMetrics_h */
