//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef SLRegexMatcher_h
#define SLRegexMatcher_h
@import Foundation;

#include "SLODLDPreProcessingComponent-Protocol.h"

@class NSArray, NSString;

@interface SLRegexMatcher : NSObject<SLODLDPreProcessingComponent>

@property (retain, nonatomic) NSArray *regexMatchingRules;
@property (retain, nonatomic) NSArray *replaceStrings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfigFile:(id)file;
- (void)_compileRegexRulesForPatterns:(id)patterns;
- (id)applyPreprocessingOnUtt:(id)utt;
@end

#endif /* SLRegexMatcher_h */
