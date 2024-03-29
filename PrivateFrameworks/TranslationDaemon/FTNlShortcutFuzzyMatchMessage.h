//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTNlShortcutFuzzyMatchMessage_h
#define FTNlShortcutFuzzyMatchMessage_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "FTShortcutFuzzyMatchRequest.h"
#include "FTShortcutFuzzyMatchResponse.h"
#include "NSCopying-Protocol.h"

@class NSData, NSMutableDictionary;
@protocol FLTBFBufferAccessor><NSCopying;

@interface FTNlShortcutFuzzyMatchMessage : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct NlShortcutFuzzyMatchMessage { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) long long session_message_type;
@property (readonly, nonatomic) FTShortcutFuzzyMatchRequest *session_messageAsFTShortcutFuzzyMatchRequest;
@property (readonly, nonatomic) FTShortcutFuzzyMatchResponse *session_messageAsFTShortcutFuzzyMatchResponse;
@property (readonly, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;

/* class methods */
+ (Class)session_message_immutableClassForType:(long long)type;
+ (long long)session_message_typeForImmutableObject:(id)object;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct NlShortcutFuzzyMatchMessage { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct NlShortcutFuzzyMatchMessage { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (struct Offset<siri::speech::qss_fb::NlShortcutFuzzyMatchMessage> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTNlShortcutFuzzyMatchMessage_h */
