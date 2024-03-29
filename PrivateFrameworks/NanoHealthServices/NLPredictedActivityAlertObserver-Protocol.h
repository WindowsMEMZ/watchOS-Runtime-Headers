//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLPredictedActivityAlertObserver_Protocol_h
#define NLPredictedActivityAlertObserver_Protocol_h
@import Foundation;

@protocol NLPredictedActivityAlertObserver <NSObject>
/* instance methods */
- (void)showStartAlertForPredictedActivity:(id)activity;
- (void)showTransitionToAppViewForPredictedActivity:(id)activity;
- (void)hideAlertForPredictedActivityStart:(id)start;
- (void)showAlertForPredictedEndWorkoutActivity:(id)activity;
- (void)hideAlertForPredictedActivityEnd:(id)end;
- (void)setDismissReason:(long long)reason predictedActivity:(id)activity;
@end

#endif /* NLPredictedActivityAlertObserver_Protocol_h */
