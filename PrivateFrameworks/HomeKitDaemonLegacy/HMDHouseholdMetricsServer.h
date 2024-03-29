//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHouseholdMetricsServer_h
#define HMDHouseholdMetricsServer_h
@import Foundation;

#include "HMDHouseholdMetricsDataSource-Protocol.h"
#include "HMDHouseholdMetricsLogEventProviding-Protocol.h"
#include "HMDHouseholdMetricsMessaging-Protocol.h"
#include "HMDHouseholdMetricsRequestContributor.h"

@class NSDictionary;
@protocol HMMLogEventSubmitting, OS_dispatch_queue;

@interface HMDHouseholdMetricsServer : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsDataSource> *dataSource;
@property (readonly, weak, nonatomic) NSObject<HMMLogEventSubmitting> *logEventSubmitter;
@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsLogEventProviding> *householdMetricsProvider;
@property (readonly, weak, nonatomic) NSObject<HMDHouseholdMetricsMessaging> *remoteMessageDispatcher;
@property (readonly, nonatomic) HMDHouseholdMetricsRequestContributor *requestContributor;
@property (readonly, nonatomic) NSDictionary *logEventFactories;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithDataSource:(id)source logEventSubmitter:(id)submitter householdMetricsProvider:(id)provider remoteMessageDispatcher:(id)dispatcher logEventFactories:(id)factories workQueue:(id)queue;
- (BOOL)evaluateHouseholdActivityLogEventForSubmission:(id)submission;
- (BOOL)evaluateMetricResponsesForSubmission:(id)submission;
- (void)sendHouseholdMetricsCollectionRequestToDevices:(id)devices forHomeWithUUID:(id)uuid associatedToDate:(id)date completion:(id /* block */)completion;
- (void)runHouseholdMetricsDataCollectionAssociatedToDate:(id)date forceSubmit:(BOOL)submit;
@end

#endif /* HMDHouseholdMetricsServer_h */
