//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRIBMLTTaskSupportGuardedData_h
#define TRIBMLTTaskSupportGuardedData_h
@import Foundation;

@class NSMutableArray, TRITrialSystemTelemetry;

@interface TRIBMLTTaskSupportGuardedData : NSObject {
  /* instance variables */
  NSMutableArray *metrics;
  NSMutableArray *dimensions;
  TRITrialSystemTelemetry *trialSystemTelemetry;
}

/* instance methods */
@end

#endif /* TRIBMLTTaskSupportGuardedData_h */
