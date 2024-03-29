//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLCoachingSubmanager_Protocol_h
#define NLCoachingSubmanager_Protocol_h
@import Foundation;

@protocol NLCoachingSubmanager <NSObject>

@property (weak, nonatomic) NSObject<NLCoachingSubmanagerDelegate> *coachingSubmanagerDelegate;
@property (weak, nonatomic) FITypicalDayActivityModel *typicalDayModel;

/* class methods */
+ (id)submanagerIdentifier;
/* instance methods */
- (void)daemonAndCoachingManagerReady;
- (void)wristOnStateChangedTo:(BOOL)to;
- (BOOL)alertsEnabled;
- (id)coachingAlertRequestsForPollingReason:(unsigned long long)reason;
- (id)coachingAlertRequestsWhenForcedWithArguments:(id)arguments;
- (void)coachingAlertRequestsWereProcessed:(id)processed acceptedRequests:(id)requests;
- (void)coachingAlertRequestDidCompleteWithResponse:(id)response;
- (BOOL)requiresMoveGoal;
- (long long)minimumRecentActiveDays;
@optional
/* instance methods */
- (void)protectedDataDidBecomeAvailable:(BOOL)available;
- (void)protectedDataDidBecomeUnavailable;
- (void)typicalDayActivityModelDidUpdate;
- (id)requiredInstalledBundleID;
@end

#endif /* NLCoachingSubmanager_Protocol_h */
