//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.2.1.0.0
//
#ifndef LighthouseCoreMLModelTraining_h
#define LighthouseCoreMLModelTraining_h
@import Foundation;

@interface LighthouseCoreMLModelTraining : NSObject
/* class methods */
+ (void)initialize;
+ (BOOL)validateModelFeatureName:(id)name modelConfiguration:(id)configuration dataBatch:(id)batch;
+ (id)getLabelFeatureName:(id)name modelConfiguration:(id)configuration;
+ (BOOL)trainModel:(id)model destModelUrl:(id)url modelConfiguration:(id)configuration dataBatch:(id)batch;
+ (BOOL)trainModel:(id)model destModelUrl:(id)url modelConfiguration:(id)configuration dataBatch:(id)batch labelFeatureName:(id)name;
+ (id)evaluateModel:(id)model modelConfiguration:(id)configuration dataBatch:(id)batch;
@end

#endif /* LighthouseCoreMLModelTraining_h */
