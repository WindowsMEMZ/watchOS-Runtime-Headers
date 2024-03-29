//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _DKKeyValueStore_h
#define _DKKeyValueStore_h
@import Foundation;

#include "_DKKeyValueStore-Protocol.h"
#include "_DKSimpleKeyValueStore-Protocol.h"

@interface _DKKeyValueStore : NSObject<_DKKeyValueStore> {
  /* instance variables */
  NSObject<_DKSimpleKeyValueStore> *_store;
}

/* class methods */
+ (id)standardUserDefaultsKeyValueStore;

/* instance methods */
- (id)initWithSimpleKeyValueStore:(id)store;
- (id)arrayForKey:(id)key;
- (void)setArray:(id)array forKey:(id)key;
- (BOOL)boolForKey:(id)key;
- (void)setBool:(BOOL)bool forKey:(id)key;
- (id)dataForKey:(id)key;
- (void)setData:(id)data forKey:(id)key;
- (id)dateForKey:(id)key;
- (void)setDate:(id)date forKey:(id)key;
- (id)dictionaryForKey:(id)key;
- (void)setDictionary:(id)dictionary forKey:(id)key;
- (id)numberForKey:(id)key;
- (void)setNumber:(id)number forKey:(id)key;
- (id)stringForKey:(id)key;
- (void)setString:(id)string forKey:(id)key;
- (id)objectForKey:(id)key;
- (id)objectForKey:(id)key havingClass:(Class)class;
- (void)setObject:(id)object forKey:(id)key;
- (void)removeObjectForKey:(id)key;
@end

#endif /* _DKKeyValueStore_h */
