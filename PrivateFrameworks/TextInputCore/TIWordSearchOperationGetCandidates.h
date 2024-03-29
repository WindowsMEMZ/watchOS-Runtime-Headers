//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIWordSearchOperationGetCandidates_h
#define TIWordSearchOperationGetCandidates_h
@import Foundation;

#include "TIWordSearchOperation.h"
#include "MCAcceptCandidateInput.h"
#include "MCKeyboardInput.h"
#include "TIMecabraIMLogger.h"
#include "TIWordSearch.h"
#include "TIWordSearchCandidateResultSet.h"

@class NSArray, NSString, TIKeyboardCandidate;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation

@property (retain, nonatomic) TIWordSearchCandidateResultSet *results;
@property (retain) TIWordSearch *wordSearch;
@property (readonly, nonatomic) NSString *inputString;
@property (readonly, nonatomic) MCKeyboardInput *keyboardInput;
@property (readonly, nonatomic) MCAcceptCandidateInput *lastAcceptCandidateInput;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (nonatomic) unsigned long long segmentBreakIndex;
@property (readonly, nonatomic) BOOL predictionEnabled;
@property (readonly, nonatomic) BOOL reanalysisMode;
@property (readonly, nonatomic) unsigned long long autocapitalizationType;
@property (readonly, nonatomic) NSArray *geometryModelData;
@property (readonly, nonatomic) BOOL hardwareKeyboardMode;
@property (readonly, nonatomic) TIMecabraIMLogger *logger;
@property (retain, nonatomic) TIKeyboardCandidate *candidateAfterSegmentBreak;

/* instance methods */
- (id)initWithWordSearch:(id)search inputString:(id)string keyboardInput:(id)input segmentBreakIndex:(unsigned long long)index predictionEnabled:(BOOL)enabled reanalysisMode:(BOOL)mode autocapitalizationType:(unsigned long long)type target:(id)target action:(SEL)action geometryModelData:(id)data hardwareKeyboardMode:(BOOL)mode logger:(id)logger;
- (void)dealloc;
- (void)checkForCachedResults;
- (void)perform;
- (void)completeSearchOnMainThreadWithResults:(id)results;
@end

#endif /* TIWordSearchOperationGetCandidates_h */
