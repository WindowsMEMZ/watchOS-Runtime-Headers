//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTMutableBatchTranslationResponse_TranslationPhrase_h
#define FTMutableBatchTranslationResponse_TranslationPhrase_h
@import Foundation;

#include "FTBatchTranslationResponse_TranslationPhrase.h"
#include "FTTranslationPhraseMetaInfo.h"

@class NSArray, NSString;

@interface FTMutableBatchTranslationResponse_TranslationPhrase : FTBatchTranslationResponse_TranslationPhrase

@property (nonatomic) float confidence;
@property (copy, nonatomic) NSString *translation_phrase;
@property (copy, nonatomic) NSString *meta_info;
@property (nonatomic) BOOL low_confidence;
@property (copy, nonatomic) NSArray *repeated_spans;
@property (copy, nonatomic) FTTranslationPhraseMetaInfo *meta_info_data;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* FTMutableBatchTranslationResponse_TranslationPhrase_h */
