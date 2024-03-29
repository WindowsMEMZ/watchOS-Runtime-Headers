//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EFMutableIndexMap_h
#define EFMutableIndexMap_h
@import Foundation;

@class NSMutableArray, NSMutableDictionary;

@interface EFMutableIndexMap : NSObject

@property (retain, nonatomic) NSMutableArray *tuples;
@property (retain, nonatomic) NSMutableDictionary *keyToTuple;
@property (readonly, nonatomic) unsigned long long count;

/* instance methods */
- (id)init;
- (id)description;
- (void)addKey:(long long)key atIndex:(unsigned long long)index;
- (void)addKey:(long long)key atIndex:(unsigned long long)index object:(id)object;
- (BOOL)removeKeyAtIndex:(unsigned long long)index;
- (void)removeAllKeys;
- (void)enumerateKeysAndIndexesUsingBlock:(id /* block */)block;
- (void)enumerateKeysIndexesAndObjectsUsingBlock:(id /* block */)block;
- (long long)keyAtIndex:(unsigned long long)index;
- (BOOL)hasKeyAtIndex:(unsigned long long)index;
- (id)_tupleForKey:(long long)key;
- (unsigned long long)indexOfKey:(long long)key;
- (id)objectForInt64Key:(long long)key;
- (void)setObject:(id)object forKey:(long long)key;
- (void)shiftKeysStartingAtIndex:(unsigned long long)index by:(long long)by;
@end

#endif /* EFMutableIndexMap_h */
