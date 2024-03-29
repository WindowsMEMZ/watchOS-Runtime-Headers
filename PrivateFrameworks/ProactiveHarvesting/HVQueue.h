//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef HVQueue_h
#define HVQueue_h
@import Foundation;

@class NSString, _PASLock;
@protocol OS_dispatch_semaphore;

@interface HVQueue : NSObject {
  /* instance variables */
  _PASLock *_lock;
  NSObject<OS_dispatch_semaphore> *_contentConsumedSemaphore;
  BOOL _contentExpectedFromMultipleApps;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *contentProtection;

/* instance methods */
- (unsigned char)waitForDequeuedContentConsumedWithTimeout:(double)timeout;
- (id)uniqueIdentifiersInDiskStorage;
- (id)uniqueIdentifiersInMemoryStorage;
- (id)initWithIdentifier:(id)identifier biomeStream:(id)stream memoryLimit:(short)limit contentProtection:(id)protection contentExpectedFromMultipleApps:(BOOL)apps;
- (id)description;
- (BOOL)enqueueContent:(id)content error:(id *)error;
- (BOOL)dequeueContent:(id *)content dataSourceContentState:(id)state minimumLevelOfService:(unsigned char)service inMemoryItemsOnly:(BOOL)only error:(id *)error;
- (BOOL)dequeuedContentConsumedWithError:(id *)error;
- (BOOL)dequeuedContentNotConsumed:(id)consumed error:(id *)error;
- (BOOL)deleteContentWithRequest:(id)request error:(id *)error;
- (id)statsWithError:(id *)error;
- (id)diskStorageStreamCount;
- (BOOL)cleanupWithError:(id *)error shouldContinueBlock:(id /* block */)block;
@end

#endif /* HVQueue_h */
