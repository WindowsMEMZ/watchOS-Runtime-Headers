//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UILazyMapTable_h
#define _UILazyMapTable_h
@import Foundation;

@class NSMapTable;

@interface _UILazyMapTable : NSObject {
  /* instance variables */
  id /* block */ _mappingBlock;
  NSMapTable *_keysToClientTables;
  NSMapTable *_keysToValues;
  NSMapTable *_valuesToKeys;
}

/* instance methods */
- (id)initWithMappingBlock:(id /* block */)block;
- (id)description;
- (unsigned long long)count;
- (id)objectForKey:(id)key;
- (BOOL)hasCachedObjectForKey:(id)key;
- (id)keys;
- (id)cachedObjects;
- (id)keyEnumerable;
- (id)cachedObjectEnumerable;
- (void)registerClient:(id)client ofObjectForKey:(id)key;
- (void)unregisterClient:(id)client ofObjectForKey:(id)key;
@end

#endif /* _UILazyMapTable_h */
