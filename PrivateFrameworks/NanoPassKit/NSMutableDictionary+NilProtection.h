//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1161.4.0.0.0
//
#ifndef NSMutableDictionary_NilProtection_h
#define NSMutableDictionary_NilProtection_h
@import Foundation;

@interface NSMutableDictionary (NilProtection)
/* class methods */
+ (BOOL)_processArgumentWithMutableDictionary:(id)dictionary object:(id)object key:(id)key;
+ (id)npkDictionaryWithObjectsAndKeys:(id)keys;

/* instance methods */
- (void)npkSetObject:(id)object forKey:(id)key;
@end

#endif /* NSMutableDictionary_NilProtection_h */
