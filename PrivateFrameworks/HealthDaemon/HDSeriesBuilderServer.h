//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSeriesBuilderServer_h
#define HDSeriesBuilderServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "HDSeriesBuilderEntity.h"
#include "HKSeriesBuilderServerInterface-Protocol.h"

@class HKSeriesBuilderConfiguration, HKSeriesSample, NSString;
@protocol OS_dispatch_queue;

@interface HDSeriesBuilderServer : HDStandardTaskServer<HKSeriesBuilderServerInterface>

@property (copy, nonatomic) HKSeriesBuilderConfiguration *configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) long long queue_state;
@property (retain, nonatomic) HKSeriesSample *seriesSample;
@property (retain, nonatomic) HDSeriesBuilderEntity *persistentEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)requiredEntitlements;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)configuration client:(id)client error:(id *)error;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (void)associateToWorkoutBuilderWithCompletion:(id /* block */)completion;
- (void)createSeriesSampleIfNeeded:(id /* block */)needed errorHandler:(id /* block */)handler;
- (BOOL)canAddMetadata:(id)metadata errorOut:(id *)out;
- (BOOL)queue_canInsertDataWithError:(id *)error;
- (void)remote_addMetadata:(id)metadata completion:(id /* block */)completion;
- (void)remote_discardWithCompletion:(id /* block */)completion;
- (void)remote_freezeWithCompletion:(id /* block */)completion;
- (void)remote_recoverWithCompletion:(id /* block */)completion;
- (void)queue_freezeBuilderWithCompletion:(id /* block */)completion;
- (void)queue_recoverBuilder;
- (void)queue_setState:(long long)state completion:(id /* block */)completion;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
@end

#endif /* HDSeriesBuilderServer_h */
