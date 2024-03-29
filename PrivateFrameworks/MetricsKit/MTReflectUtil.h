//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2.8.10.0.0
//
#ifndef MTReflectUtil_h
#define MTReflectUtil_h
@import Foundation;

@interface MTReflectUtil : NSObject
/* class methods */
+ (BOOL)objectAsBool:(id)bool;
+ (id)objectAsString:(id)string;
+ (id)objectAsArray:(id)array;
+ (id)objectAsDictionary:(id)dictionary;
+ (id)mergeAndCleanDictionaries:(id)dictionaries;
+ (id)removeNullValuesFromDictionary:(id)dictionary;
@end

#endif /* MTReflectUtil_h */
