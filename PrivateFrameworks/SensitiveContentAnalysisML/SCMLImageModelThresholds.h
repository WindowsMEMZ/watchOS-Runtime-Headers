//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 35.2.1.0.0
//
#ifndef SCMLImageModelThresholds_h
#define SCMLImageModelThresholds_h
@import Foundation;

@class NSDictionary, NSError;

@interface SCMLImageModelThresholds : NSObject

@property (retain, nonatomic) NSDictionary *_thresholdDict;
@property (retain, nonatomic) NSError *_loadError;

/* class methods */
+ (id)_validateScoreThresholdsJson:(id)json error:(id *)error;
+ (id)_createThresholdDictionaryWithError:(id *)error;
+ (id)instance;

/* instance methods */
- (id)init;
- (double)thresholdForLabel:(id)label classificationMode:(unsigned long long)mode modelVersion:(id)version error:(id *)error;
@end

#endif /* SCMLImageModelThresholds_h */
