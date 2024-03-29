//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSVTUIEndpointAnalyzer_h
#define CSVTUIEndpointAnalyzer_h
@import Foundation;

#include "CSVTUIEndpointAnalyzerDelegate-Protocol.h"

@interface CSVTUIEndpointAnalyzer : NSObject

@property (weak, nonatomic) NSObject<CSVTUIEndpointAnalyzerDelegate> *delegate;
@property (nonatomic) unsigned long long activeChannel;

/* instance methods */
- (id)init;
- (void)processAudioSamplesAsynchronously:(id)asynchronously;
- (void)recordingStoppedForReason:(long long)reason;
- (void)stopEndpointer;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)rate;
- (double)trailingSilenceDurationAtEndpoint;
- (void)setStartWaitTime:(double)time;
- (void)setEndWaitTime:(double)time;
@end

#endif /* CSVTUIEndpointAnalyzer_h */
