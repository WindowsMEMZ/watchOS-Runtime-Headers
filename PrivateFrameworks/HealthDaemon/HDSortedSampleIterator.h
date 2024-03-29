//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSortedSampleIterator_h
#define HDSortedSampleIterator_h
@import Foundation;

#include "HDDeletedObjectIterator-Protocol.h"
#include "HDProfile.h"
#include "HDQueryDescriptor.h"
#include "HDSampleIterator-Protocol.h"

@class HKDeletedObject, HKSample, HKSortedQueryAnchor, NSArray, NSError, NSSet, NSString;
@protocol {tuple<long long, HKDeletedObject *>="__base_"{__tuple_impl<std::__tuple_indices<0, 1>, long long, HKDeletedObject *>="__value_"q"__value_"@"HKDeletedObject"}}, {tuple<long long, HKSample *>="__base_"{__tuple_impl<std::__tuple_indices<0, 1>, long long, HKSample *>="__value_"q"__value_"@"HKSample"}}, {vector<std::tuple<long long, HKDeletedObject *>, std::allocator<std::tuple<long long, HKDeletedObject *>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::tuple<long long, HKDeletedObject *> *, std::allocator<std::tuple<long long, HKDeletedObject *>>>="__value_"^v}}, {vector<std::tuple<long long, HKSample *>, std::allocator<std::tuple<long long, HKSample *>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::tuple<long long, HKSample *> *, std::allocator<std::tuple<long long, HKSample *>>>="__value_"^v}};

@interface HDSortedSampleIterator : NSObject<HDSampleIterator, HDDeletedObjectIterator> {
  /* instance variables */
  HDQueryDescriptor *_queryDescriptor;
  BOOL _includeDeletedObjects;
  NSArray *_sortDescriptors;
  HKSortedQueryAnchor *_anchor;
  long long _bufferSize;
  NSSet *_restrictedSourceEntities;
  HDProfile *_profile;
  NSError *_lastError;
  BOOL _isComplete;
  struct vector<std::tuple<long long, HKSample *>, std::allocator<std::tuple<long long, HKSample *>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<long long, HKSample *> *, std::allocator<std::tuple<long long, HKSample *>>> { void *__value_; } __end_cap_; } _sampleBuffer;
  struct vector<std::tuple<long long, HKDeletedObject *>, std::allocator<std::tuple<long long, HKDeletedObject *>>> { void *__begin_; void *__end_; struct __compressed_pair<std::tuple<long long, HKDeletedObject *> *, std::allocator<std::tuple<long long, HKDeletedObject *>>> { void *__value_; } __end_cap_; } _deletedObjectsBuffer;
  struct tuple<long long, HKSample *> { struct __tuple_impl<std::__tuple_indices<0, 1>, long long, HKSample *> { long long __value_; HKSample *__value_; } __base_; } _currentSample;
  struct tuple<long long, HKDeletedObject *> { struct __tuple_impl<std::__tuple_indices<0, 1>, long long, HKDeletedObject *> { long long __value_; HKDeletedObject *__value_; } __base_; } _currentDeletedObject;
  id _currentHead;
}

@property (readonly, copy, nonatomic) HKSortedQueryAnchor *nextAnchor;
@property (readonly, nonatomic) HKSample *sample;
@property (readonly, nonatomic) long long objectID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HKDeletedObject *deletedObject;

/* instance methods */
- (id)init;
- (id)initWithQueryDescriptor:(id)descriptor includeDeletedObjects:(BOOL)objects sortDescriptors:(id)descriptors anchor:(id)anchor bufferSize:(long long)size profile:(id)profile;
- (BOOL)advanceWithError:(id *)error;
- (id)object;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HDSortedSampleIterator_h */
