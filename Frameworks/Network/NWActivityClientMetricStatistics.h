//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3762.60.29.0.0
//
#ifndef NWActivityClientMetricStatistics_h
#define NWActivityClientMetricStatistics_h
@import Foundation;

@class NSData, NSDictionary, NSString, NSUUID;

@interface NWActivityClientMetricStatistics : NSObject

@property (nonatomic) struct nw_activity_client_metric_report_s { unsigned char x0[16] char x1[256] char x2[5000] unsigned char x3[0] } report;
@property (retain, nonatomic) NSUUID *activityUUID;
@property (retain, nonatomic) NSString *clientMetricName;
@property (retain, nonatomic) NSString *clientMetricString;
@property (retain, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSData *metricData;
@property (retain, nonatomic) NSUUID *externallyVisibleActivityUUID;
@property (retain, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSDictionary *clientMetric;

/* instance methods */
- (id)initWithNWActivityClientMetricReport:(struct nw_activity_client_metric_report_s { unsigned char x0[16] char x1[256] char x2[5000] unsigned char x3[0] } *)report length:(unsigned long long)length;
- (id)initWithData:(id)data;
@end

#endif /* NWActivityClientMetricStatistics_h */
