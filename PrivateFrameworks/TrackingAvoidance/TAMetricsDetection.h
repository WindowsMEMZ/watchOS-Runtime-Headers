//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 104.0.1.0.0
//
#ifndef TAMetricsDetection_h
#define TAMetricsDetection_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "TAGeneralDetectionMetrics.h"
#include "TAMetricsProtocol-Protocol.h"
#include "TASPAdvertisement.h"
#include "TASingleVisitDetectionMetrics.h"
#include "TAVisitDetectionMetrics.h"

@class NSString;

@interface TAMetricsDetection : NSObject<TAMetricsProtocol, NSSecureCoding>

@property (readonly, nonatomic) unsigned long long detectionType;
@property (readonly, nonatomic) TAGeneralDetectionMetrics *generalDetectionMetrics;
@property (readonly, nonatomic) TAVisitDetectionMetrics *visitDetectionMetrics;
@property (readonly, nonatomic) TASingleVisitDetectionMetrics *singleVisitDetectionMetrics;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)convertTADetectionTypeToString:(unsigned long long)string;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDetectionType:(unsigned long long)type visitDetectionMetrics:(id)metrics generalDetectionMetrics:(id)metrics singleVisitDetectionMetrics:(id)metrics latestAdvertisement:(id)advertisement;
- (unsigned long long)getMetricsCollectionType;
- (BOOL)isEqual:(id)equal;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* TAMetricsDetection_h */
