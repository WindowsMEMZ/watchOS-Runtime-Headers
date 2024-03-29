//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1235.0.0.0.0
//
#ifndef CNMutableMultiDictionary_h
#define CNMutableMultiDictionary_h
@import Foundation;

#include "CNMultiDictionary.h"

@interface CNMutableMultiDictionary : CNMultiDictionary
/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)setObjects:(id)objects forKey:(id)key;
- (void)addObject:(id)object forKey:(id)key;
- (void)addNonNilObject:(id)object forKey:(id)key;
- (void)removeObject:(id)object forKey:(id)key;
- (void)removeObjectsForKey:(id)key;
@end

#endif /* CNMutableMultiDictionary_h */
