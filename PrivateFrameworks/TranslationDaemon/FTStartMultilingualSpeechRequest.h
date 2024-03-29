//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTStartMultilingualSpeechRequest_h
#define FTStartMultilingualSpeechRequest_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "FTStartSpeechRequest.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSMutableDictionary;

@interface FTStartMultilingualSpeechRequest : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct StartMultilingualSpeechRequest { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) NSArray *language_parameters_by_id;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct StartMultilingualSpeechRequest { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct StartMultilingualSpeechRequest { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)language_parameters_by_id_objectAtIndex:(unsigned long long)index;
- (unsigned long long)language_parameters_by_id_count;
- (void)language_parameters_by_id_enumerateObjectsUsingBlock:(id /* block */)block;
- (struct Offset<siri::speech::schema_fb::StartMultilingualSpeechRequest> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTStartMultilingualSpeechRequest_h */
