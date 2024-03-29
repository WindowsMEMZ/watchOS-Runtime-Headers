//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 402.2.3.0.0
//
#ifndef ETImageFolderDataProvider_h
#define ETImageFolderDataProvider_h
@import Foundation;

#include "ETDataProvider-Protocol.h"
#include "ETImagePreprocessor.h"

@class NSArray, NSString;
@protocol {linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U>="__x_"I}, {shared_ptr<Espresso::blob_cpu>="__ptr_"^{blob_cpu}"__cntrl_"^{__shared_weak_count}}, {vector<NSString *, std::allocator<NSString *>>="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<NSString *__strong *, std::allocator<NSString *>>="__value_"^@}}, {vector<std::pair<NSString *, unsigned long>, std::allocator<std::pair<NSString *, unsigned long>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::pair<NSString *, unsigned long> *, std::allocator<std::pair<NSString *, unsigned long>>>="__value_"^v}};

@interface ETImageFolderDataProvider : NSObject<ETDataProvider> {
  /* instance variables */
  struct vector<std::pair<NSString *, unsigned long>, std::allocator<std::pair<NSString *, unsigned long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::pair<NSString *, unsigned long> *, std::allocator<std::pair<NSString *, unsigned long>>> { void *__value_; } __end_cap_; } samples;
  struct vector<NSString *, std::allocator<NSString *>> { __end_ * *__begin_; __end_cap_ * * x0; struct __compressed_pair<NSString *__strong *, std::allocator<NSString *>> { id *__value_; } x1; } classes;
  struct shared_ptr<Espresso::blob_cpu> { struct blob_cpu *__ptr_; struct __shared_weak_count *__cntrl_; } labelBlob;
  NSString *imageTensorName;
  NSString *labelTensorName;
  NSArray *labelShape;
  struct linear_congruential_engine<unsigned int, 48271U, 0U, 2147483647U> { unsigned int __x_; } randomgen;
  ETImagePreprocessor *imageProcessor;
  BOOL shuffleBeforeEpoch;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFolder:(id)folder forImageTensor:(id)tensor andLabelTensor:(id)tensor shuffleBeforeEachEpoch:(BOOL)epoch shuffleRandomSeed:(id)seed withImagePreprocessParams:(id)params;
- (id)dataPointAtIndex:(unsigned long long)index error:(id *)error;
- (unsigned long long)numberOfDataPoints;
- (void)prepareForEpoch;
@end

#endif /* ETImageFolderDataProvider_h */
