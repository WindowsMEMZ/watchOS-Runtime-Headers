//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.7.1.0.0
//
#ifndef EARAudioResult_h
#define EARAudioResult_h
@import Foundation;

@class NSData;

@interface EARAudioResult : NSObject

@property (retain, nonatomic) NSData *audioResultMat;
@property (nonatomic) unsigned long long audioResultsNumVectors;
@property (nonatomic) unsigned long long audioResultsVectorSize;

/* instance methods */
- (id)initWithAudioResultMat:(id)mat vectorSize:(unsigned long long)size numVectors:(unsigned long long)vectors;
@end

#endif /* EARAudioResult_h */
