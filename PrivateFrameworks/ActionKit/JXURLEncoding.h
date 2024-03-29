//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef JXURLEncoding_h
#define JXURLEncoding_h
@import Foundation;

@interface JXURLEncoding : NSObject
/* class methods */
+ (id)encodedString:(id)string;
+ (id)formEncodedString:(id)string;
+ (id)encodedDictionary:(id)dictionary;
+ (id)formEncodedDictionary:(id)dictionary;
+ (void)encodeObject:(id)object withKey:(id)key andSubKey:(id)key intoArray:(id)array;
@end

#endif /* JXURLEncoding_h */
