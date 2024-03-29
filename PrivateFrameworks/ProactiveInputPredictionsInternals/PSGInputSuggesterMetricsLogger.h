//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PSGInputSuggesterMetricsLogger_h
#define PSGInputSuggesterMetricsLogger_h
@import Foundation;

@class PETEventTracker2;

@interface PSGInputSuggesterMetricsLogger : NSObject {
  /* instance variables */
  PETEventTracker2 *_tracker;
}

/* instance methods */
- (id)init;
- (id)initWithTracker:(id)tracker;
- (void)logQuery:(id)query config:(id)config;
- (void)logTrigger:(id)trigger request:(id)request config:(id)config;
- (void)logPrediction:(id)prediction request:(id)request latencyMillis:(double)millis config:(id)config;
- (void)logImpression:(id)impression request:(id)request config:(id)config;
- (void)logEngagement:(id)engagement request:(id)request position:(unsigned long long)position config:(id)config;
- (void)logError:(unsigned char)error request:(id)request trigger:(id)trigger config:(id)config;
- (void)logSpeedMetricForLocaleIdentifier:(id)identifier messageDurationMilliseconds:(int)milliseconds messageLength:(int)length messageWords:(int)words zkwConfig:(id)config wordBoundaryConfig:(id)config;
- (void)_populateTreatmentFields:(id)fields proto:(id)proto;
- (void)_populatePredictionItems:(id)items proto:(id)proto;
- (void)_populateQueryFields:(id)fields proto:(id)proto;
- (void)_populateTriggerFields:(id)fields proto:(id)proto;
- (int)_triggerSourceTypeProto:(unsigned long long)proto;
- (int)_predictionDataSourceTypeProto:(unsigned char)proto;
- (void)_populateTriggerAttributeFields:(id)fields proto:(id)proto;
- (int)_errorTypeProto:(unsigned char)proto;
@end

#endif /* PSGInputSuggesterMetricsLogger_h */
