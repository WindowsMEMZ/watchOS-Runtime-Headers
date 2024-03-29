//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSVTUITrainingSessionDelegate_Protocol_h
#define CSVTUITrainingSessionDelegate_Protocol_h
@import Foundation;

@protocol CSVTUITrainingSessionDelegate <NSObject>
/* instance methods */
- (void)CSVTUITrainingSessionRMSAvailable:(float)rmsavailable;
- (void)CSVTUITrainingSessionStopListen;
@optional
/* instance methods */
- (BOOL)CSVTUITrainingSession:(id)session hasTrainUtterance:(id)utterance languageCode:(id)code payload:(BOOL)payload;
@end

#endif /* CSVTUITrainingSessionDelegate_Protocol_h */
