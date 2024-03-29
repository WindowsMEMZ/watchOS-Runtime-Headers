//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIImmediateDownloadTelemetryGenerator_h
#define TRIImmediateDownloadTelemetryGenerator_h
@import Foundation;

@class NSArray;

@interface TRIImmediateDownloadTelemetryGenerator : NSObject {
  /* instance variables */
  BOOL _allowExpensiveNetworking;
  long long _latencyMilliseconds;
  NSArray *_telemetry;
}

/* instance methods */
- (id)initWithLatencyMilliseconds:(long long)milliseconds allowExpensiveNetworking:(BOOL)networking existingTelemetry:(id)telemetry;
- (id)latencyMetric;
- (id)rolloutSystemTelemetry;
@end

#endif /* TRIImmediateDownloadTelemetryGenerator_h */
