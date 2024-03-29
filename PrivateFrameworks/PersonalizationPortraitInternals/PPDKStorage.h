//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PPDKStorage_h
#define PPDKStorage_h
@import Foundation;

@class _PASLock;
@protocol OS_dispatch_semaphore;

@interface PPDKStorage : NSObject {
  /* instance variables */
  _PASLock *_entityLock;
  _PASLock *_topicLock;
  NSObject<OS_dispatch_semaphore> *_entityWriteSem;
  NSObject<OS_dispatch_semaphore> *_topicWriteSem;
}

@property (readonly, nonatomic) double topicStreamCooldownTimeRemaining;
@property (readonly, nonatomic) double entityStreamCooldownTimeRemaining;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (unsigned int)readBatchSize;
- (unsigned int)topicWriteBatchSize;
- (double)topicWriteBatchInterval;
- (unsigned int)namedEntityWriteBatchSize;
- (double)namedEntityWriteBatchInterval;
- (id)entityStream;
- (id)topicStream;
- (id)tombstoneStream;
- (BOOL)iterEventBatchesMatchingPredicate:(id)predicate streams:(id)streams sortDescriptors:(id)descriptors batchSize:(unsigned long long)size error:(id *)error block:(id /* block */)block;
- (BOOL)iterEventBatchesMatchingPredicate:(id)predicate streams:(id)streams sortDescriptors:(id)descriptors batchSize:(unsigned long long)size readMetaData:(BOOL)data remoteOnly:(BOOL)only error:(id *)error block:(id /* block */)block;
- (BOOL)saveEvents:(id)events stream:(id)stream maxRetries:(long long)retries retryInterval:(double)interval shouldContinueBlock:(id /* block */)block;
- (BOOL)deleteEvents:(id)events error:(id *)error;
- (BOOL)deleteAllEventsInEventStream:(id)stream error:(id *)error;
- (BOOL)deleteAllEventsInEventStream:(id)stream matchingPredicate:(id)predicate error:(id *)error;
- (id)namedEntityRecordFromEvent:(id)event;
- (id)eventForNamedEntityRecord:(id)record sourceDeviceID:(id)id;
- (id)topicRecordFromEvent:(id)event;
- (id)eventForTopicRecord:(id)record sourceDeviceID:(id)id;
- (id)registerForNamedEntitiesRemoteAdditionWithBlock:(id /* block */)block;
- (id)registerForNamedEntitiesRemoteDeletionWithBlock:(id /* block */)block;
- (id)registerForTopicsRemoteAdditionWithBlock:(id /* block */)block;
- (id)registerForTopicsRemoteDeletionWithBlock:(id /* block */)block;
- (void)removeObserver:(id)observer;
@end

#endif /* PPDKStorage_h */
