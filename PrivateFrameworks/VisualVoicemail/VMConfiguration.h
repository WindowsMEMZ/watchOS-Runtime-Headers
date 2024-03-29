//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 780.0.0.0.0
//
#ifndef VMConfiguration_h
#define VMConfiguration_h
@import Foundation;

@interface VMConfiguration : NSObject
/* class methods */
+ (id)localeForTranscriptionLanguage;
+ (float)confidenceThreshold;
+ (float)confidenceLowQualityThreshold;
+ (float)confidenceSegmentThreshold;
+ (id)confidenceThresholdFromDefaultsForKey:(id)key;
+ (id)confidenceThresholdFromAsset;
+ (id)confidenceLowQualityThresholdFromAsset;
+ (id)confidenceSegmentThresholdFromAsset;
+ (id)confidenceThresholdFromAssetForKey:(id)key;
+ (id)metadataDictionaryForSpeechAssetWithLanguage:(id)language;
@end

#endif /* VMConfiguration_h */
