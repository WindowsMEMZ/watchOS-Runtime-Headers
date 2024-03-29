//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDWorkoutDataDestination_Protocol_h
#define HDWorkoutDataDestination_Protocol_h
@import Foundation;

@protocol HDWorkoutDataDestination <NSObject>

@property (readonly) HKDataFlowLink *workoutDataFlowLink;
@property (readonly, copy) NSUUID *workoutDataProcessorUUID;
@property (readonly) unsigned long long workoutDataDestinationState;
@property (readonly, nonatomic) NSObject<HDWorkoutDataAccumulator> *workoutDataAccumulator;

/* instance methods */
- (void)addQuantities:(id)quantities dataSource:(id)source;
- (void)addOtherSamples:(id)samples dataSource:(id)source;
- (void)addWorkoutEvents:(id)events dataSource:(id)source;
- (void)addMetadata:(id)metadata dataSource:(id)source;
- (void)updateWorkoutConfiguration:(id)configuration dataSource:(id)source;
- (void)didBeginActivity:(id)activity dataSource:(id)source;
- (void)didEndActivity:(id)activity dataSource:(id)source;
- (void)didSuggestActivity:(id)activity dataSource:(id)source;
@optional
/* instance methods */
- (void)didDisconnectFromRemoteWithError:(id)error;
- (void)didReceiveDataFromRemoteWorkoutSession:(id)session completion:(id /* block */)completion;
- (void)didSyncStateEvent:(long long)event date:(id)date;
- (void)didSyncTransitionToNewState:(long long)state date:(id)date;
- (void)didSyncCurrentActivity:(id)activity;
- (void)remoteSessionDidRecover;
@end

#endif /* HDWorkoutDataDestination_Protocol_h */
