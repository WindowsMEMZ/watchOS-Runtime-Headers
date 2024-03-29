//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 341.35.0.0.0
//
#ifndef MTLIndirectArgumentDescriptor_h
#define MTLIndirectArgumentDescriptor_h
@import Foundation;

#include ".h"

@interface MTLIndirectArgumentDescriptor : 

@property (@dynamic, nonatomic) unsigned long long dataType;
@property (@dynamic, nonatomic) unsigned long long index;
@property (@dynamic, nonatomic) unsigned long long arrayLength;
@property (@dynamic, nonatomic) unsigned long long access;
@property (@dynamic, nonatomic) unsigned long long textureType;
@property (@dynamic, nonatomic) unsigned long long constantBlockAlignment;

/* class methods */
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)zone;
+ (id)indirectArgumentDescriptor;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* MTLIndirectArgumentDescriptor_h */
