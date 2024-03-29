//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MIODictionaryConstraint_h
#define MIODictionaryConstraint_h
@import Foundation;

#include "MIOFeatureValueConstraint-Protocol.h"

@class NSString;

@interface MIODictionaryConstraint : NSObject<MIOFeatureValueConstraint> {
  /* instance variables */
  struct DictionaryFeatureType { undefined * *_vptr$MessageLite; struct InternalMetadataWithArenaLite { void *ptr_; } _internal_metadata_; union KeyTypeUnion { struct Int64FeatureType *int64keytype_; struct StringFeatureType *stringkeytype_; } KeyType_; int _cached_size_; unsigned int x[1] _oneof_case_; } _dictionaryFeatureTypeParams;
}

@property (readonly, nonatomic) long long keyType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSpecification:(const void *)specification;
- (const void *)dictionaryFeatureTypeSpecification;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MIODictionaryConstraint_h */
