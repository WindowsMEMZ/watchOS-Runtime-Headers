//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef _MDMutablePlistBytes_h
#define _MDMutablePlistBytes_h
@import Foundation;

#include "_MDPlistBytes.h"

@interface _MDMutablePlistBytes : _MDPlistBytes {
  /* instance variables */
  int _currentUID;
  int _parentSize;
  int _parentCount;
  int * _parentUIDs;
  struct __CFDictionary * _ptrUIDMap;
  unsigned long long * _fillPtr;
  unsigned long long * _limitPtr;
  unsigned long long * _rleTagPtr;
  unsigned long long _curContainer;
}

/* class methods */
+ (struct __MDPlistBytes *)createArrayPlistBytesUsingBlock:(id /* block */)block;
+ (struct __MDPlistBytes *)createDictionaryPlistBytesUsingBlock:(id /* block */)block;

/* instance methods */
- (id)initWithCapacity:(unsigned long long)capacity useMalloc:(BOOL)malloc zone:(struct _malloc_zone_t { void * x0; void * x1; undefined * x2; undefined * x3; undefined * x4; undefined * x5; undefined * x6; undefined * x7; undefined * x8; char * x9; undefined * x10; undefined * x11; struct malloc_introspection_t * x12; unsigned int x13; undefined * x14; undefined * x15; undefined * x16; undefined * x17; undefined * x18; } *)zone;
- (id)initWithCapacity:(unsigned long long)capacity useMalloc:(BOOL)malloc;
- (id)initWithCapacity:(unsigned long long)capacity;
@end

#endif /* _MDMutablePlistBytes_h */
