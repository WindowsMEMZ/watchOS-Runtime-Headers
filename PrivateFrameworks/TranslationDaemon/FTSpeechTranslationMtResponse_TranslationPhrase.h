//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTSpeechTranslationMtResponse_TranslationPhrase_h
#define FTSpeechTranslationMtResponse_TranslationPhrase_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "FTTranslationPhraseMetaInfo.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableDictionary, NSString;

@interface FTSpeechTranslationMtResponse_TranslationPhrase : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct TranslationPhrase { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) NSString *translation_phrase;
@property (readonly, nonatomic) NSString *meta_info;
@property (readonly, nonatomic) BOOL low_confidence;
@property (readonly, nonatomic) FTTranslationPhraseMetaInfo *meta_info_data;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct TranslationPhrase { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct TranslationPhrase { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct Offset<siri::speech::schema_fb::SpeechTranslationMtResponse_::TranslationPhrase> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTSpeechTranslationMtResponse_TranslationPhrase_h */
