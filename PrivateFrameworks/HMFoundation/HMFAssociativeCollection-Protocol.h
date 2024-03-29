//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef HMFAssociativeCollection_Protocol_h
#define HMFAssociativeCollection_Protocol_h
@import Foundation;

@protocol HMFAssociativeCollection 

@property (readonly) unsigned long long count;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

/* instance methods */
- (id)objectForKey:(id)key;
- (id)objectForKeyedSubscript:(id)subscript;
- (id)objectsForKeys:(id)keys notFoundMarker:(id)marker;
- (id)keyEnumerator;
- (id)objectEnumerator;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)block;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)options usingBlock:(id /* block */)block;
@end

#endif /* HMFAssociativeCollection_Protocol_h */
