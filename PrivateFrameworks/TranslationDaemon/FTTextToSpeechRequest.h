//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTTextToSpeechRequest_h
#define FTTextToSpeechRequest_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "FTTTSRequestFeatureFlags.h"
#include "FTTextToSpeechRequestContext.h"
#include "FTTextToSpeechRequestDebug.h"
#include "FTTextToSpeechRequestDevConfig.h"
#include "FTTextToSpeechRequestExperiment.h"
#include "FTTextToSpeechRequestMeta.h"
#include "FTTextToSpeechRequestProsodyControlConfig.h"
#include "FTTextToSpeechRequestProsodyTransferConfig.h"
#include "FTTextToSpeechUserProfile.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface FTTextToSpeechRequest : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct TextToSpeechRequest { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) long long audio_type;
@property (readonly, nonatomic) BOOL enable_word_timing_info;
@property (readonly, nonatomic) NSString *voice_name;
@property (readonly, nonatomic) NSArray *context_info;
@property (readonly, nonatomic) long long preferred_voice_type;
@property (readonly, nonatomic) FTTextToSpeechRequestMeta *meta_info;
@property (readonly, nonatomic) FTTextToSpeechRequestContext *context;
@property (readonly, nonatomic) FTTextToSpeechRequestExperiment *experiment;
@property (readonly, nonatomic) FTTTSRequestFeatureFlags *feature_flags;
@property (readonly, nonatomic) FTTextToSpeechRequestDebug *debug;
@property (readonly, nonatomic) FTTextToSpeechUserProfile *profile;
@property (readonly, nonatomic) FTTextToSpeechRequestDevConfig *dev_config;
@property (readonly, nonatomic) FTTextToSpeechRequestProsodyTransferConfig *prosody_config;
@property (readonly, nonatomic) FTTextToSpeechRequestProsodyControlConfig *prosody_control_config;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct TextToSpeechRequest { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct TextToSpeechRequest { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)context_info_objectAtIndex:(unsigned long long)index;
- (unsigned long long)context_info_count;
- (void)context_info_enumerateObjectsUsingBlock:(id /* block */)block;
- (struct Offset<siri::speech::schema_fb::TextToSpeechRequest> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTTextToSpeechRequest_h */
