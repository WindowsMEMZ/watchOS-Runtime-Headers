//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMetricsFlushTask_Protocol_h
#define AMSMetricsFlushTask_Protocol_h
@import Foundation;

@protocol AMSMetricsFlushTask <AMSMetricsFlushStrategy>

@property (nonatomic) long long maxRequestCount;
@property (nonatomic) long long maxBatchSize;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic) BOOL includeMMeClientInfoAndDeviceHeaders;
@property (nonatomic) unsigned long long metricsSigningFlavour;

/* instance methods */
- (id)initWithDataSource:(id)source bag:(id)bag;
@end

#endif /* AMSMetricsFlushTask_Protocol_h */
