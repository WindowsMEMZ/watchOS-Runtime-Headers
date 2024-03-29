//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMetrics_h
#define AMSMetrics_h
@import Foundation;

#include "AMSBagConsumer-Protocol.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSEngagement.h"
#include "AMSMetricsBagContract-Protocol.h"
#include "AMSMetricsDatabaseDataSource.h"
#include "AMSMetricsFlushOperation.h"
#include "AMSTreatmentStore.h"

@class NSDate, NSMutableArray, NSString;

@interface AMSMetrics : NSObject<AMSBagConsumer> {
  /* instance variables */
  NSMutableArray *_enqueuedOperations;
  AMSMetricsFlushOperation *_currentFlushOperation;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _enqueuedOperationsLock;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _flushModeLock;
  Class _flushTaskClass;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bagLock;
}

@property (retain, nonatomic) AMSMetricsDatabaseDataSource *databaseSource;
@property (nonatomic) long long destination;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x0; } engagementLock;
@property (nonatomic) BOOL flushingDisabled;
@property (nonatomic) BOOL flushOnForeground;
@property (copy, nonatomic) id /* block */ flushIntervalBlock;
@property (retain, nonatomic) NSDate *flushIntervalStartTime;
@property (retain, nonatomic) AMSEngagement *engagement;
@property (retain, nonatomic) AMSTreatmentStore *treatmentStore;
@property (retain, nonatomic) NSObject<AMSMetricsBagContract> *bagContract;
@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (readonly, nonatomic) NSString *containerId;
@property (readonly, nonatomic) long long eventCount;
@property (nonatomic) BOOL flushTimerEnabled;
@property (nonatomic) BOOL includeMMeClientInfoAndDeviceHeaders;
@property (nonatomic) long long maxBatchSize;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) unsigned long long metricsSigningFlavour;
@property (nonatomic) BOOL monitorsLifecycleEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)internalInstanceUsingBag:(id)bag;
+ (BOOL)appAnalyticsAllowed;
+ (BOOL)diagnosticsSubmissionAllowed;
+ (BOOL)disableBackgroundMetrics;
+ (BOOL)flushDelayEnabled;
+ (BOOL)flushTimerEnabled;
+ (void)setDisableBackgroundMetrics:(BOOL)metrics;
+ (void)setFlushDelayEnabled:(BOOL)enabled;
+ (void)setFlushTimerEnabled:(BOOL)enabled;
+ (BOOL)recordAppAnalyticsForEvent:(id)event bugType:(id)type;
+ (id)serverTimeFromDate:(id)date;
+ (id)serverTimeFromTimeInterval:(double)interval;
+ (double)timeIntervalFromServerTime:(id)time;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (id)createBagForSubProfile;
+ (id)sharedTimerQueue;
+ (id)bagKeySet;

/* instance methods */
- (void)_applicationWillEnterForeground;
- (id)initWithContainerID:(id)id bag:(id)bag;
- (id)initWithContainerID:(id)id bag:(id)bag flushTaskClass:(Class)class;
- (void)dealloc;
- (void)cancel;
- (void)dropEvents;
- (void)enqueueEvent:(id)event;
- (void)enqueueEvents:(id)events;
- (id)enqueueAsyncEvents:(id)events;
- (id)flush;
- (id)flushTopic:(id)topic;
- (id)flushEvents:(id)events;
- (id)_determineFlushStrategyWithDataSource:(id)source topic:(id)topic;
- (id)_enqueueFigaroEvents:(id)events;
- (id)_flushDataSource:(id)source topic:(id)topic;
- (void)_processOperationQueue;
- (void)_beginFlushIntervalWithStyle:(long long)style events:(id)events;
- (double)_flushIntervalWithConfiguration:(id)configuration forEvents:(id)events;
- (void)_flushIntervalInvalidate;
- (void)_flushTimerEnabledChanged;
- (void)_handleFlushIntervalWithStyle:(long long)style;
- (id)_modifiedEvents:(id)events;
- (BOOL)_scheduledFlushAllowedForStyle:(long long)style;
- (id)initWithContainerId:(id)id bagContract:(id)contract;
@end

#endif /* AMSMetrics_h */
