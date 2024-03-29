//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTBlazarTextToSpeechRouterStreamingMessage_h
#define FTBlazarTextToSpeechRouterStreamingMessage_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "FTBeginTextToSpeechStreamingResponse.h"
#include "FTFinalTextToSpeechStreamingResponse.h"
#include "FTPartialTextToSpeechStreamingResponse.h"
#include "FTStartTextToSpeechStreamingRequest.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

@interface FTBlazarTextToSpeechRouterStreamingMessage : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct BlazarTextToSpeechRouterStreamingMessage { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) long long session_message_type;
@property (readonly, nonatomic) FTStartTextToSpeechStreamingRequest *session_messageAsFTStartTextToSpeechStreamingRequest;
@property (readonly, nonatomic) FTBeginTextToSpeechStreamingResponse *session_messageAsFTBeginTextToSpeechStreamingResponse;
@property (readonly, nonatomic) FTPartialTextToSpeechStreamingResponse *session_messageAsFTPartialTextToSpeechStreamingResponse;
@property (readonly, nonatomic) FTFinalTextToSpeechStreamingResponse *session_messageAsFTFinalTextToSpeechStreamingResponse;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;

/* class methods */
+ (Class)session_message_immutableClassForType:(long long)type;
+ (long long)session_message_typeForImmutableObject:(id)object;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct BlazarTextToSpeechRouterStreamingMessage { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct BlazarTextToSpeechRouterStreamingMessage { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct Offset<siri::speech::qss_fb::BlazarTextToSpeechRouterStreamingMessage> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTBlazarTextToSpeechRouterStreamingMessage_h */
