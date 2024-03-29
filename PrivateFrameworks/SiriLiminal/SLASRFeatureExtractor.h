//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SLASRFeatureExtractor_h
#define SLASRFeatureExtractor_h
@import Foundation;

@interface SLASRFeatureExtractor : NSObject
/* class methods */
+ (id)extractASRFaturesFrom:(id)from;
+ (id)_getLastTokenForPath:(id)path fromPhrases:(id)phrases;
+ (id)_getTokenConfidenceForPath:(id)path fromPhrases:(id)phrases;
+ (id)getBestSpeechRecognitionTextFromPackage:(id)package;
+ (id)extractLRNNFaturesFrom:(id)from;
@end

#endif /* SLASRFeatureExtractor_h */
