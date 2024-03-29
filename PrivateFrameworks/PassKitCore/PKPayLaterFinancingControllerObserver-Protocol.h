//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKPayLaterFinancingControllerObserver_Protocol_h
#define PKPayLaterFinancingControllerObserver_Protocol_h
@import Foundation;

@protocol PKPayLaterFinancingControllerObserver <NSObject>
@optional
/* instance methods */
- (void)payLaterFinancingAssessmentCollectionDidUpdate:(id)update;
- (void)payLaterAvailableFundingSourcesDidChange:(id)change;
- (void)payLaterFinancingController:(id)controller financingOptionCancelled:(id)cancelled;
@end

#endif /* PKPayLaterFinancingControllerObserver_Protocol_h */
