//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef NSDictionary_ExtensionKitAdditions_h
#define NSDictionary_ExtensionKitAdditions_h
@import Foundation;

@interface NSDictionary (ExtensionKitAdditions)
/* class methods */
+ (id)_EX_dictionaryWithSignedURL:(id)url error:(id *)error;

/* instance methods */
- (id)_EX_objectForKey:(id)key ofClass:(Class)class;
- (id)_EX_objectForKeys:(id)keys ofClass:(Class)class;
- (id)_EX_dictionaryForKey:(id)key;
- (id)_EX_dictionaryForKeys:(id)keys;
- (id)_EX_arrayForKey:(id)key;
- (id)_EX_arrayForKeys:(id)keys;
- (id)_EX_stringForKey:(id)key;
- (id)_EX_stringForKeys:(id)keys;
- (long long)_EX_integerForKey:(id)key;
- (BOOL)_EX_boolForKey:(id)key;
- (BOOL)_EX_boolForKey:(id)key defaultValue:(BOOL)value;
- (id)_EX_dictionaryByRemovingObjectForKey:(id)key;
- (id)_EX_dictionaryBySettingObject:(id)object forKey:(id)key;
- (id)_EX_dictionaryBySettingValuesForKeysWithDictionary:(id)dictionary;
@end

#endif /* NSDictionary_ExtensionKitAdditions_h */
