//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVMutableBidirectionalDictionary_h
#define MSVMutableBidirectionalDictionary_h
@import Foundation;

#include "MSVBidirectionalDictionary.h"

@interface MSVMutableBidirectionalDictionary : MSVBidirectionalDictionary
/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithDictionary:(id)dictionary;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)removeAllObjects;
- (void)setKey:(id)key forObject:(id)object;
- (void)setObject:(id)object forKey:(id)key;
- (void)removeObjectForKey:(id)key;
- (void)removeKeyForObject:(id)object;
@end

#endif /* MSVMutableBidirectionalDictionary_h */
