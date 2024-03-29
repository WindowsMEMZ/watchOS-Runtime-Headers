//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 13.0.0.0.0
//
#ifndef AFBDictionary_h
#define AFBDictionary_h
@import Foundation;

#include "NSDictionary.h"
#include "AFBBufRef.h"

@interface AFBDictionary : NSDictionary {
  /* instance variables */
  AFBBufRef *_bufRef;
  unsigned long long _count;
  Class _keyClass;
  id /* block */ _keyAtIndex;
  id /* block */ _tableAtIndex;
  id /* block */ _objectForValidKey;
}

/* instance methods */
- (id)initWithBufRef:(id)ref count:(unsigned long long)count keyClass:(Class)class keyAtIndex:(id /* block */)index tableAtIndex:(id /* block */)index objectForValidKey:(id /* block */)key;
- (id)initWithObjects:(const id *)objects forKeys:(const id *)keys count:(unsigned long long)count;
- (id)initWithCoder:(id)coder;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)count;
- (id)objectForKey:(id)key;
- (id)keyEnumerator;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
- (id)allKeys;
- (id)allValues;
- (id)allKeysForObject:(id)object;
- (BOOL)isEqualToDictionary:(id)dictionary;
@end

#endif /* AFBDictionary_h */
