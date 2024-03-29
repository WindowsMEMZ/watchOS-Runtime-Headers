//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 205.6.1.0.0
//
#ifndef VCPVideoMetaAnalyzer_h
#define VCPVideoMetaAnalyzer_h
@import Foundation;

@class NSDictionary;

@interface VCPVideoMetaAnalyzer : NSObject

@property (readonly, retain, nonatomic) NSDictionary *publicResults;
@property (readonly, retain, nonatomic) NSDictionary *privateResults;
@property (nonatomic) float photoOffset;

/* class methods */
+ (id)analyzerForTrackType:(id)type withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform requestAnalyses:(unsigned long long)analyses formatDescription:(struct opaqueCMFormatDescription *)description;

/* instance methods */
- (int)processMetadataGroup:(id)group flags:(unsigned long long *)flags;
- (int)finalizeAnalysis;
@end

#endif /* VCPVideoMetaAnalyzer_h */
