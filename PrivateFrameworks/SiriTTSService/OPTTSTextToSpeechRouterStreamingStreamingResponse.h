//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.19.1.2.1
//
#ifndef OPTTSTextToSpeechRouterStreamingStreamingResponse_h
#define OPTTSTextToSpeechRouterStreamingStreamingResponse_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "NSCopying-Protocol.h"
#include "OPTTSBeginTextToSpeechStreamingResponse.h"
#include "OPTTSFinalTextToSpeechStreamingResponse.h"
#include "OPTTSPartialTextToSpeechStreamingResponse.h"

@class NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

@interface OPTTSTextToSpeechRouterStreamingStreamingResponse : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct TextToSpeechRouterStreamingStreamingResponse { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) long long content_type;
@property (readonly, nonatomic) OPTTSBeginTextToSpeechStreamingResponse *contentAsOPTTSBeginTextToSpeechStreamingResponse;
@property (readonly, nonatomic) OPTTSPartialTextToSpeechStreamingResponse *contentAsOPTTSPartialTextToSpeechStreamingResponse;
@property (readonly, nonatomic) OPTTSFinalTextToSpeechStreamingResponse *contentAsOPTTSFinalTextToSpeechStreamingResponse;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *content;

/* class methods */
+ (Class)content_immutableClassForType:(long long)type;
+ (long long)content_typeForImmutableObject:(id)object;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct TextToSpeechRouterStreamingStreamingResponse { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct TextToSpeechRouterStreamingStreamingResponse { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct Offset<siri::speech::qss_fb::TextToSpeechRouterStreamingStreamingResponse> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* OPTTSTextToSpeechRouterStreamingStreamingResponse_h */
