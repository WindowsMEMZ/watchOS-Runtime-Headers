//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableTranslationPhraseMetaInfo_h
#define FTMutableTranslationPhraseMetaInfo_h
@import Foundation;

#include "FTTranslationPhraseMetaInfo.h"

@class NSArray, NSString;

@interface FTMutableTranslationPhraseMetaInfo : FTTranslationPhraseMetaInfo

@property (copy, nonatomic) NSString *romanization;
@property (copy, nonatomic) NSArray *selection_spans;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableTranslationPhraseMetaInfo_h */
