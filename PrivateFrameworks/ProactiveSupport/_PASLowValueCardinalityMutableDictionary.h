//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 388.0.0.0.0
//
#ifndef _PASLowValueCardinalityMutableDictionary_h
#define _PASLowValueCardinalityMutableDictionary_h
@import Foundation;

#include "NSMutableDictionary.h"

@class NSMutableArray;

@interface _PASLowValueCardinalityMutableDictionary : NSMutableDictionary {
  /* instance variables */
  NSMutableArray *_objectsAndKeys;
  unsigned long long _count;
}

/* instance methods */
- (id)initWithObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned long long)count;
- (unsigned long long)count;
- (id)objectForKey:(id)key;
- (id)keyEnumerator;
- (void)setObject:(id)object forKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (id)allValues;
- (id)allKeysForObject:(id)object;
@end

#endif /* _PASLowValueCardinalityMutableDictionary_h */
