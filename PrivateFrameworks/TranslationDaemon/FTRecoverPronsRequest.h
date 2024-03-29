//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef FTRecoverPronsRequest_h
#define FTRecoverPronsRequest_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSMutableDictionary, NSString;

@interface FTRecoverPronsRequest : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct RecoverPronsRequest { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSArray *apg_ids;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct RecoverPronsRequest { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct RecoverPronsRequest { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)apg_ids_objectAtIndex:(unsigned long long)index;
- (unsigned long long)apg_ids_count;
- (void)apg_ids_enumerateObjectsUsingBlock:(id /* block */)block;
- (struct Offset<siri::speech::schema_fb::RecoverPronsRequest> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FTRecoverPronsRequest_h */
