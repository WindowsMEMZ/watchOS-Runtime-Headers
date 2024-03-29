//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTSiriPayloadTranslationInfo_h
#define FTSiriPayloadTranslationInfo_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "FTRecognitionSausage.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableDictionary, NSString;

@interface FTSiriPayloadTranslationInfo : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct SiriPayloadTranslationInfo { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) NSString *pre_itn_payload;
@property (readonly, nonatomic) NSString *post_itn_payload;
@property (readonly, nonatomic) FTRecognitionSausage *pre_sausage_payload;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct SiriPayloadTranslationInfo { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct SiriPayloadTranslationInfo { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct Offset<siri::speech::schema_fb::SiriPayloadTranslationInfo> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTSiriPayloadTranslationInfo_h */
