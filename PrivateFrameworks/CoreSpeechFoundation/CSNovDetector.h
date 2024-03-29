//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSNovDetector_h
#define CSNovDetector_h
@import Foundation;

@interface CSNovDetector : NSObject
/* instance methods */
- (id)initWithConfigPath:(id)path resourcePath:(id)path;
- (void)dealloc;
- (void)reset;
- (void)resetBest;
- (void)analyzeWavData:(id)data numSamples:(unsigned long long)samples;
- (void)analyzeWavFloatData:(id)data numSamples:(unsigned long long)samples;
- (unsigned int)numResultsAvailable;
- (id)getAnalyzedResultForPhId:(unsigned int)id;
- (id)getBestAnalyzedResult;
- (id)getSuperVectorWithEndPoint:(unsigned long long)point;
- (id)getOptionValue:(id)value;
@end

#endif /* CSNovDetector_h */
