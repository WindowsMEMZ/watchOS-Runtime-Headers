//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSNovDetectorResult_h
#define CSNovDetectorResult_h
@import Foundation;

@class NSDictionary;

@interface CSNovDetectorResult : NSObject

@property (nonatomic) unsigned long long sampleFed;
@property (nonatomic) unsigned long long bestPhrase;
@property (nonatomic) unsigned long long bestStart;
@property (nonatomic) unsigned long long bestEnd;
@property (nonatomic) float bestScore;
@property (nonatomic) BOOL earlyWarning;
@property (nonatomic) BOOL isRescoring;
@property (readonly, nonatomic) NSDictionary *dictionary;

/* instance methods */
- (id)initWithResult:(id)result;
@end

#endif /* CSNovDetectorResult_h */
