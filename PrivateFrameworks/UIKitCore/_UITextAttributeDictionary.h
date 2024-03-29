//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UITextAttributeDictionary_h
#define _UITextAttributeDictionary_h
@import Foundation;

#include "NSDictionary.h"
#include "_UITextAttributeDefaults-Protocol.h"

@interface _UITextAttributeDictionary : NSDictionary

@property (readonly, @dynamic, nonatomic) NSObject<_UITextAttributeDefaults> *fallback;

/* class methods */
+ (id)new;
+ (id)alloc;

/* instance methods */
- (id)initWithDictionary:(id)dictionary fallback:(id)fallback;
- (BOOL)usesFallbackForKey:(id)key;
- (BOOL)ignoresFallbackForKey:(id)key;
- (id)sparseDictionary;
@end

#endif /* _UITextAttributeDictionary_h */
