//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSMetricsFigaroFlushTask_h
#define AMSMetricsFigaroFlushTask_h
@import Foundation;

#include "AMSTask.h"
#include "AMSBagProtocol-Protocol.h"
#include "AMSMetricsDataSource-Protocol.h"
#include "AMSMetricsFlushTask-Protocol.h"
#include "AMSPromise.h"
#include "AMSURLSession.h"

@class NSString;

@interface AMSMetricsFigaroFlushTask : AMSTask<AMSMetricsFlushTask> {
  /* instance variables */
  AMSPromise *_currentCancellableDataTaskPromise;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _currentCancellableDataTaskPromiseLock;
}

@property (readonly, nonatomic) AMSURLSession *URLSession;
@property (readonly, nonatomic) NSObject<AMSBagProtocol> *bag;
@property (readonly, nonatomic) NSObject<AMSMetricsDataSource> *dataSource;
@property (nonatomic) long long maxRequestCount;
@property (nonatomic) long long maxBatchSize;
@property (copy, nonatomic) NSString *topic;
@property (nonatomic) BOOL includeMMeClientInfoAndDeviceHeaders;
@property (nonatomic) unsigned long long metricsSigningFlavour;
@property (readonly, nonatomic) BOOL cancelled;

/* instance methods */
- (id)initWithDataSource:(id)source bag:(id)bag;
- (BOOL)cancel;
- (id)performFlush;
- (id)_flushNextBatchWithMaxRequestCount:(unsigned long long)count topic:(id)topic maxBatchSize:(long long)size requestCount:(unsigned long long)count flushedEventCount:(unsigned long long)count config:(id)config;
- (id)_mescalSignatureWithBodyData:(id)data error:(id *)error;
- (id)_nextBatchWithConfig:(id)config topic:(id)topic maxBatchSize:(long long)size;
- (id)_postBatch:(id)batch;
- (BOOL)_shouldClearEventsDespiteError:(id)error result:(id)result;
@end

#endif /* AMSMetricsFigaroFlushTask_h */
