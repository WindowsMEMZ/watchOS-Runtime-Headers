//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 912.3.3.0.0
//
#ifndef NTSAlertHandler_Protocol_h
#define NTSAlertHandler_Protocol_h
@import Foundation;

@protocol NTSAlertHandler <NTSNotificationHandler>
/* instance methods */
- (BOOL)shouldShowAlert:(id)alert;
- (void)dismissFiringAlert:(id)alert;
@optional
/* instance methods */
- (void)repeatFiringAlert:(id)alert;
- (void)snoozeFiringAlert:(id)alert;
@end

#endif /* NTSAlertHandler_Protocol_h */
