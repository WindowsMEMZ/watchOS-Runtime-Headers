//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMContextualSpanMatcherService_h
#define CDMContextualSpanMatcherService_h
@import Foundation;

#include "CDMDAGBaseService.h"

@class ContextualSpanMatcher, NSArray;

@interface CDMContextualSpanMatcherService : CDMDAGBaseService

@property (retain, nonatomic) ContextualSpanMatcher *contextualSpanMatcher;
@property (readonly, nonatomic) NSArray *overrideSpansForReplay;

/* class methods */
+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;

/* instance methods */
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)setup;
- (id)handle:(id)handle;
- (id)getPredictor;
- (id)getContextualSpansInternal:(id)internal;
@end

#endif /* CDMContextualSpanMatcherService_h */
