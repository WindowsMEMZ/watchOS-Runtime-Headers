//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSKeywordAnalyzerNDEAPIResult_h
#define CSKeywordAnalyzerNDEAPIResult_h
@import Foundation;

@class NSDictionary;

@interface CSKeywordAnalyzerNDEAPIResult : NSObject

@property (nonatomic) unsigned long long samplesFed;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) float bestScore;
@property (nonatomic) BOOL isSecondChance;
@property (nonatomic) BOOL isEarlyDetect;
@property (readonly, nonatomic) NSDictionary *dictionary;

/* instance methods */
- (id)init;
- (id)initWithBlob:(id)blob isEarlyDetected:(BOOL)detected;
@end

#endif /* CSKeywordAnalyzerNDEAPIResult_h */
