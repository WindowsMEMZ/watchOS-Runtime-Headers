//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICIndexMap_h
#define PUICIndexMap_h
@import Foundation;

@class NSMutableArray;

@interface PUICIndexMap : NSObject {
  /* instance variables */
  NSMutableArray *_elements;
}

/* instance methods */
- (id)init;
- (void)setObject:(id)object forIndex:(unsigned long long)index;
- (void)removeObjectForIndex:(unsigned long long)index;
- (void)removeAllObjects;
- (id)objectClosestToIndex:(unsigned long long)index;
- (unsigned long long)_arrayIndexOfElementWithIndex:(unsigned long long)index;
@end

#endif /* PUICIndexMap_h */
