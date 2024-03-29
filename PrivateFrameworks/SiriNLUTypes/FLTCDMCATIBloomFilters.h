//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef FLTCDMCATIBloomFilters_h
#define FLTCDMCATIBloomFilters_h
@import Foundation;

#include "FLTBFBufferAccessor-Protocol.h"
#include "FLTCDMCATISwiftBloomFilter.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSData, NSMutableDictionary;

@interface FLTCDMCATIBloomFilters : NSObject<FLTBFBufferAccessor, NSCopying> {
  /* instance variables */
  NSMutableDictionary *_storage;
  NSData *_data;
  const struct CDMCATIBloomFilters { unsigned char x0[1] } * _root;
}

@property (readonly, nonatomic) FLTCDMCATISwiftBloomFilter *general_bf;
@property (readonly, nonatomic) NSArray *array_bf;

/* instance methods */
- (id)initWithFlatbuffData:(id)data;
- (id)initAndVerifyWithFlatbuffData:(id)data;
- (id)initWithFlatbuffData:(id)data root:(const struct CDMCATIBloomFilters { unsigned char x0[1] } *)root;
- (id)initWithFlatbuffData:(id)data root:(const struct CDMCATIBloomFilters { unsigned char x0[1] } *)root verify:(BOOL)verify;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)array_bf_objectAtIndex:(unsigned long long)index;
- (unsigned long long)array_bf_count;
- (void)array_bf_enumerateObjectsUsingBlock:(id /* block */)block;
- (struct Offset<CDMCATIBloomFilters> { unsigned int x0; })addObjectToBuffer:(void *)buffer;
- (id)flatbuffData;
@end

#endif /* FLTCDMCATIBloomFilters_h */
