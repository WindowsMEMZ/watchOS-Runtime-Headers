//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef NSArray_ExtensionKitAdditions_h
#define NSArray_ExtensionKitAdditions_h
@import Foundation;

@interface NSArray (ExtensionKitAdditions)
/* instance methods */
- (id)_EX_objectAtIndex:(unsigned long long)index ofClass:(Class)class;
- (id)_EX_dictionaryAtIndex:(unsigned long long)index;
- (id)_EX_arrayAtIndex:(unsigned long long)index;
- (id)_EX_stringAtIndex:(unsigned long long)index;
- (BOOL)_EX_boolAtIndex:(unsigned long long)index;
- (BOOL)_EX_boolAtIndex:(unsigned long long)index defaultValue:(BOOL)value;
@end

#endif /* NSArray_ExtensionKitAdditions_h */
