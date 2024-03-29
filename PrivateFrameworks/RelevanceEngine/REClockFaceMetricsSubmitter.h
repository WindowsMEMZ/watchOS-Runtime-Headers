//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 472.0.0.0.0
//
#ifndef REClockFaceMetricsSubmitter_h
#define REClockFaceMetricsSubmitter_h
@import Foundation;

#include "RERelevanceEngineMetricsRecorder-Protocol.h"

@class NSString;

@interface REClockFaceMetricsSubmitter : NSObject<RERelevanceEngineMetricsRecorder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (BOOL)_runningInClockFace;
- (BOOL)_runningInTest;
- (BOOL)_shouldRecordMetrics;
- (void)recordTrainingMetrics:(id)metrics forInteraction:(id)interaction;
- (void)recordCallibrationCurveMetrics:(id)metrics forInteraction:(id)interaction;
@end

#endif /* REClockFaceMetricsSubmitter_h */
