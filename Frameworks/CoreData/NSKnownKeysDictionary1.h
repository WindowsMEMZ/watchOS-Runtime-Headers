//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1338.0.0.0.0
//
#ifndef NSKnownKeysDictionary1_h
#define NSKnownKeysDictionary1_h
@import Foundation;

#include "NSKnownKeysDictionary.h"
#include "NSKnownKeysMappingStrategy.h"

@interface NSKnownKeysDictionary1 : NSKnownKeysDictionary {
  /* instance variables */
  int _cd_rc;
  int _count;
  NSKnownKeysMappingStrategy *_keySearch;
  id _values[0];
}

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone *)zone;
+ (id)initWithCoder:(id)coder;
+ (id)initWithSearchStrategy:(id)strategy;
+ (id)initForKeys:(id)keys;
+ (id)initWithObjects:(id *)objects forKeys:(id *)keys count:(unsigned long long)count;
+ (id)initWithDictionary:(id)dictionary copyItems:(BOOL)items;
+ (id)initWithDictionary:(id)dictionary;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (Class)classForKeyedUnarchiver;

/* instance methods */
- (id)retain;
- (void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (void)dealloc;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)mapping;
- (const id *)values;
- (const id *)knownKeyValuesPointer;
- (id)valueAtIndex:(unsigned long long)index;
- (void)setValue:(id)value atIndex:(unsigned long long)index;
- (void)_setValues:(id *)values retain:(BOOL)retain;
- (void)setValues:(id *)values;
- (unsigned long long)count;
- (id)keyEnumerator;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id * x1; unsigned long long * x2; unsigned long long x3[5] } *)state objects:(id *)objects count:(unsigned long long)count;
- (unsigned long long)_valueCountByEnumeratingWithState:(struct { unsigned long long x0; id * x1; unsigned long long * x2; unsigned long long x3[5] } *)state objects:(id *)objects count:(unsigned long long)count;
- (id)objectForKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (void)setObject:(id)object forKey:(id)key;
- (id)allKeys;
- (id)allValues;
- (void)getObjects:(id *)objects andKeys:(id *)keys;
- (void)getKeys:(id *)keys;
- (void)getObjects:(id *)objects;
- (BOOL)isEqualToDictionary:(id)dictionary;
- (id)objectEnumerator;
- (void)addEntriesFromDictionary:(id)dictionary;
- (void)removeAllObjects;
@end

#endif /* NSKnownKeysDictionary1_h */
