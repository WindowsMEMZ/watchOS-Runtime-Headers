//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLFaceAnalysisReference_h
#define CPLFaceAnalysisReference_h
@import Foundation;

#include "CPLFaceAnalysis.h"

@class NSArray;

@interface CPLFaceAnalysisReference : CPLFaceAnalysis

@property (copy, nonatomic) NSArray *faces;

/* instance methods */
- (void)addFace:(id)face;
@end

#endif /* CPLFaceAnalysisReference_h */
