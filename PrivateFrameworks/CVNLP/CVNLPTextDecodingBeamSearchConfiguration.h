//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 105.150.0.0.0
//
#ifndef CVNLPTextDecodingBeamSearchConfiguration_h
#define CVNLPTextDecodingBeamSearchConfiguration_h
@import Foundation;

#include "CVNLPTextDecodingConfiguration.h"

@interface CVNLPTextDecodingBeamSearchConfiguration : CVNLPTextDecodingConfiguration

@property (nonatomic) unsigned long long beamWidth;
@property (nonatomic) unsigned long long pathCount;
@property (nonatomic) BOOL shouldOptimizeAlignment;
@property (nonatomic) BOOL pruneProblematicMixedScriptWordPaths;
@property (nonatomic) BOOL shouldApplyWordLMToLastWord;
@property (readonly, nonatomic) id /* block */ scoringFunction;

/* instance methods */
- (id)initWithCommitActionBehavior:(id /* block */)behavior scoringFunction:(id /* block */)function beamWidth:(unsigned long long)width pathCount:(unsigned long long)count shouldOptimizeAlignment:(BOOL)alignment pruneProblematicMixedScriptWordPaths:(BOOL)paths shouldApplyWordLMToLastWord:(BOOL)word;
- (id)initWithCommitActionBehavior:(id /* block */)behavior scoringFunction:(id /* block */)function beamWidth:(unsigned long long)width pathCount:(unsigned long long)count shouldOptimizeAlignment:(BOOL)alignment pruneProblematicMixedScriptWordPaths:(BOOL)paths;
- (id)initWithCommitActionBehavior:(id /* block */)behavior scoringFunction:(id /* block */)function beamWidth:(unsigned long long)width pathCount:(unsigned long long)count shouldOptimizeAlignment:(BOOL)alignment;
- (id)initWithCommitActionBehavior:(id /* block */)behavior scoringFunction:(id /* block */)function beamWidth:(unsigned long long)width pathCount:(unsigned long long)count;
- (id)initWithCommitActionBehavior:(id /* block */)behavior beamWidth:(unsigned long long)width pathCount:(unsigned long long)count shouldOptimizeAlignment:(BOOL)alignment;
- (id)initWithCommitActionBehavior:(id /* block */)behavior beamWidth:(unsigned long long)width pathCount:(unsigned long long)count shouldOptimizeAlignment:(BOOL)alignment pruneProblematicMixedScriptWordPaths:(BOOL)paths;
@end

#endif /* CVNLPTextDecodingBeamSearchConfiguration_h */
