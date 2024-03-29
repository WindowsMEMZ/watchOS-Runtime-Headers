//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPersonalizationFunctionProvider_h
#define FCPersonalizationFunctionProvider_h
@import Foundation;

#include "FCPersonalizationFunctionProviding-Protocol.h"

@interface FCPersonalizationFunctionProvider : NSObject<FCPersonalizationFunctionProviding>

@property (nonatomic) double articleDiversificationSimilarityExpectationStart;
@property (nonatomic) double articleDiversificationSimilarityExpectationEnd;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationSlope;
@property (nonatomic) double articleDiversificationUniquePublisherExpectationYIntercept;

/* instance methods */
- (id)init;
- (id)initWithAppConfiguration:(id)configuration;
- (id)diversifyItems:(id)items limit:(unsigned long long)limit;
- (id)diversifyItems:(id)items limit:(unsigned long long)limit preselectedItems:(id)items;
@end

#endif /* FCPersonalizationFunctionProvider_h */
