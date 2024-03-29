//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncOperation_h
#define HDCloudSyncOperation_h
@import Foundation;

#include "HDCloudSyncCloudState.h"
#include "HDCloudSyncOperationConfiguration.h"
#include "HDProfile.h"
#include "NSProgressReporting-Protocol.h"

@class NSProgress, NSString, NSUUID;

@interface HDCloudSyncOperation : NSObject<NSProgressReporting> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  double _startTime;
  double _endTime;
  NSString *_loggingPrefix;
}

@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDCloudSyncOperationConfiguration *configuration;
@property (readonly, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) long long status;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (retain) HDCloudSyncCloudState *cloudState;
@property (copy) id /* block */ onSuccess;
@property (copy) id /* block */ onError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)progressCount;
+ (BOOL)shouldFailOnXPCActivityDeferral;
+ (BOOL)shouldLogAtOperationStart;
+ (BOOL)shouldLogAtOperationEnd;
+ (BOOL)shouldProduceOperationAnalytics;
+ (id)finishedOperationTags;
+ (id)operationTagDependencies;
+ (id /* block */)unitTest_operationHandler;
+ (void)unitTest_setOperationHandler:(id /* block */)handler;
+ (void)unitTest_clearAllOperationHandlers;

/* instance methods */
- (id)operationWithRunCondition:(id /* block */)condition;
- (id)operationIgnoringErrors;
- (id)asPipelineStage;
- (id)init;
- (id)initWithConfiguration:(id)configuration cloudState:(id)state;
- (id)initWithPreceedingOperation:(id)operation transitionHandler:(id /* block */)handler;
- (void)chainFromOperation:(id)operation transitionHandler:(id /* block */)handler;
- (void)start;
- (void)main;
- (void)skip;
- (void)delegateToOperation:(id)operation;
- (BOOL)finishWithSuccess:(BOOL)success error:(id)error;
- (id)analyticsDictionary;
- (void)updateCompletedProgressCount:(long long)count;
@end

#endif /* HDCloudSyncOperation_h */
