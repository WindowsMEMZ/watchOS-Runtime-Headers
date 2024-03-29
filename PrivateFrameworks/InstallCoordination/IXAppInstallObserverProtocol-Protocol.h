//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXAppInstallObserverProtocol_Protocol_h
#define IXAppInstallObserverProtocol_Protocol_h
@import Foundation;

@protocol IXAppInstallObserverProtocol <NSObject>
/* instance methods */
- (void)_client_coordinatorShouldPrioritizeWithSeed:(id)seed;
- (void)_client_shouldPrioritizeAppWithBundleID:(id)id;
- (void)_client_shouldPrioritizeAppWithIdentity:(id)identity;
- (void)_client_coordinatorShouldResumeWithSeed:(id)seed;
- (void)_client_coordinatorShouldPauseWithSeed:(id)seed;
- (void)_client_coordinatorWithSeed:(id)seed configuredPromiseDidBeginFulfillment:(unsigned long long)fulfillment;
- (void)_client_coordinatorShouldBeginRestoringUserDataWithSeed:(id)seed;
- (void)_client_coordinatorDidInstallPlaceholderWithSeed:(id)seed forRecordPromise:(id)promise;
- (void)_client_coordinatorShouldBeginPostProcessingWithSeed:(id)seed forRecordPromise:(id)promise;
- (void)_client_coordinatorDidCompleteSuccessfullyWithSeed:(id)seed forRecordPromise:(id)promise;
- (void)_client_coordinatorWithSeed:(id)seed didCancelWithReason:(id)reason client:(unsigned long long)client;
@end

#endif /* IXAppInstallObserverProtocol_Protocol_h */
