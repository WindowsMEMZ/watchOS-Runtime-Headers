//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef GeneratePredictionsOperation_h
#define GeneratePredictionsOperation_h
@import Foundation;

#include "NSOperation.h"
#include "TIInputManagerHandwriting.h"
#include "TIWordSearchHandwriting.h"

@class NSArray, NSDictionary, NSString;

@interface GeneratePredictionsOperation : NSOperation

@property (readonly, nonatomic) TIInputManagerHandwriting *inputManager;
@property (readonly, nonatomic) TIWordSearchHandwriting *wordSearch;
@property (readonly, copy, nonatomic) NSArray *committedCandidates;
@property (readonly, nonatomic) unsigned long long predictionOptions;
@property (readonly, nonatomic) NSString *prefixContext;
@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSArray *stickers;
@property (readonly, nonatomic) NSArray *proactiveTriggers;
@property (readonly, nonatomic) NSDictionary *candidateRefsDictionary;

/* instance methods */
- (id)initWithInputManager:(id)manager predictionOptions:(unsigned long long)options prefixContext:(id)context;
- (void)main;
@end

#endif /* GeneratePredictionsOperation_h */
