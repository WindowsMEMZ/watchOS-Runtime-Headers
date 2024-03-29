//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTRecognitionResult_h
#define FTRecognitionResult_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "FTRecognitionSausage.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSMutableDictionary;

@interface FTRecognitionResult : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct RecognitionResult { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) FTRecognitionSausage *pre_itn;
@property (readonly, nonatomic) FTRecognitionSausage *post_itn;
@property (readonly, nonatomic) NSArray *pre_itn_nbest_choices;
@property (readonly, nonatomic) NSArray *post_itn_nbest_choices;
@property (readonly, nonatomic) NSArray *pre_itn_token_to_post_itn_char_alignment;
@property (readonly, nonatomic) NSArray *choice_alignments;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct RecognitionResult { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct RecognitionResult { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)pre_itn_nbest_choices_objectAtIndex:(unsigned long long)index;
- (unsigned long long)pre_itn_nbest_choices_count;
- (void)pre_itn_nbest_choices_enumerateObjectsUsingBlock:(id /* block */)block;
- (id)post_itn_nbest_choices_objectAtIndex:(unsigned long long)index;
- (unsigned long long)post_itn_nbest_choices_count;
- (void)post_itn_nbest_choices_enumerateObjectsUsingBlock:(id /* block */)block;
- (id)pre_itn_token_to_post_itn_char_alignment_objectAtIndex:(unsigned long long)index;
- (unsigned long long)pre_itn_token_to_post_itn_char_alignment_count;
- (void)pre_itn_token_to_post_itn_char_alignment_enumerateObjectsUsingBlock:(id /* block */)block;
- (id)choice_alignments_objectAtIndex:(unsigned long long)index;
- (unsigned long long)choice_alignments_count;
- (void)choice_alignments_enumerateObjectsUsingBlock:(id /* block */)block;
- (struct Offset<siri::speech::schema_fb::RecognitionResult> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTRecognitionResult_h */
