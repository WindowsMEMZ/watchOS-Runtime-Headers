//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMTranscriptEffectHelper_h
#define IMTranscriptEffectHelper_h
@import Foundation;

@interface IMTranscriptEffectHelper : NSObject
/* class methods */
+ (void)setFeatureEnabled:(BOOL)enabled;
+ (id)allEffectIdentifiers;
+ (BOOL)identifierIsEffectIdentifier:(id)identifier;
+ (BOOL)effectIdentifierIsFullScreenMoment:(id)moment;
+ (BOOL)effectIdentifierIsImpactEffect:(id)effect;
+ (id)identifierNameMap;
+ (id)replayStringMap;
+ (id)sendWithEffectStringMap;
+ (id)findIdentifierByMathcingPartialSufix:(id)sufix;
+ (id)nameForEffectIdentifier:(id)identifier;
+ (id)replayStringForEffectIdentifier:(id)identifier;
+ (id)sendWithStringForEffectIdentifier:(id)identifier;
+ (BOOL)isFeatureEnabled;
+ (BOOL)shouldShowReplayButtonForEffectIdentifier:(id)identifier;
@end

#endif /* IMTranscriptEffectHelper_h */
