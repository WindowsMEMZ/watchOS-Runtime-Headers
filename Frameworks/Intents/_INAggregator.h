//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2201.0.2.0.0
//
#ifndef _INAggregator_h
#define _INAggregator_h
@import Foundation;

@interface _INAggregator : NSObject
/* class methods */
+ (unsigned long long)_singificantFigureForVocabularyStringType:(long long)type;
+ (BOOL)_canReportDistributionOfVocabularyStringType:(long long)type;
+ (id)_distributionKeyForVocabularyStringType:(long long)type;
+ (double)roundCount:(unsigned long long)count toSignificantFigure:(unsigned long long)figure;
+ (void)logReceivedCount:(unsigned long long)count ofVocabularyStringType:(long long)type;
+ (void)resetSynapseVocabularyUpdate;
@end

#endif /* _INAggregator_h */
