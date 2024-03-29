//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef CKXSchema_h
#define CKXSchema_h
@import Foundation;

#include "NSCopying-Protocol.h"

@protocol {vector<CKXFieldProperties, std::allocator<CKXFieldProperties>>="__begin_"^{?}"__end_"^{?}"__end_cap_"{__compressed_pair<CKXFieldProperties *, std::allocator<CKXFieldProperties>>="__value_"^{?}}}, {vector<CKXStructProperties, std::allocator<CKXStructProperties>>="__begin_"^{?}"__end_"^{?}"__end_cap_"{__compressed_pair<CKXStructProperties *, std::allocator<CKXStructProperties>>="__value_"^{?}}}, {vector<std::vector<unsigned long long>, std::allocator<std::vector<unsigned long long>>>="__begin_"^v"__end_"^v"__end_cap_"{__compressed_pair<std::vector<unsigned long long> *, std::allocator<std::vector<unsigned long long>>>="__value_"^v}}, {vector<unsigned long long, std::allocator<unsigned long long>>="__begin_"^Q"__end_"^Q"__end_cap_"{__compressed_pair<unsigned long long *, std::allocator<unsigned long long>>="__value_"^Q}};

@interface CKXSchema : NSObject<NSCopying> {
  /* instance variables */
  struct vector<unsigned long long, std::allocator<unsigned long long>> { unsigned long long *__begin_; unsigned long long *__end_; struct __compressed_pair<unsigned long long *, std::allocator<unsigned long long>> { unsigned long long *__value_; } __end_cap_; } structTokens;
  struct vector<CKXStructProperties, std::allocator<CKXStructProperties>> { struct  *__begin_; struct  *__end_; struct __compressed_pair<CKXStructProperties *, std::allocator<CKXStructProperties>> { struct  *__value_; } __end_cap_; } structTokenToStructProperties;
  struct vector<std::vector<unsigned long long>, std::allocator<std::vector<unsigned long long>>> { void *__begin_; void *__end_; struct __compressed_pair<std::vector<unsigned long long> *, std::allocator<std::vector<unsigned long long>>> { void *__value_; } __end_cap_; } structTokenToFieldTokens;
  struct vector<CKXFieldProperties, std::allocator<CKXFieldProperties>> { struct  *__begin_; struct  *__end_; struct __compressed_pair<CKXFieldProperties *, std::allocator<CKXFieldProperties>> { struct  *__value_; } __end_cap_; } fieldTokenToFieldProperties;
}

@property (nonatomic) unsigned long long nextIdentifier;

/* instance methods */
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (long long)newIdentifier;
- (unsigned long long)defineFieldForStruct:(unsigned long long)struct;
@end

#endif /* CKXSchema_h */
