//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSVTUITrainingSelfLogger_h
#define CSVTUITrainingSelfLogger_h
@import Foundation;

@interface CSVTUITrainingSelfLogger : NSObject
/* class methods */
+ (id)sharedLogger;

/* instance methods */
- (void)logSiriSetupPHSEnrollmentUtteranceCompletedWithSiriSetupID:(id)id withPageNumber:(int)number withPhId:(id)id withTopScoreForUtterance:(float)utterance withStartSampleCount:(int)count withEndSampleCount:(int)count withHasSpeechDetected:(int)detected;
- (void)logSiriSetupPHSEnrollmentDigitalZeroDetectionCompletedWithSiriSetupID:(id)id PageNumber:(int)number withPhId:(id)id withMaxNumContinuousZeros:(int)zeros withMaxNumAllowedContinuousZeros:(int)zeros withIsMaxNumContinuousZerosOverThreshold:(BOOL)threshold withLocale:(id)locale withVTAssetConfigVersion:(id)version withStageStatus:(int)status;
@end

#endif /* CSVTUITrainingSelfLogger_h */
