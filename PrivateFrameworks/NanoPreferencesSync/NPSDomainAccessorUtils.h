//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 311.0.0.0.0
//
#ifndef NPSDomainAccessorUtils_h
#define NPSDomainAccessorUtils_h
@import Foundation;

@interface NPSDomainAccessorUtils : NSObject
/* class methods */
+ (id)stringForObject:(id)object;
+ (id)arrayForObject:(id)object;
+ (id)dictionaryForObject:(id)object;
+ (id)dataForObject:(id)object;
+ (id)stringArrayForObject:(id)object;
+ (long long)integerForObject:(id)object existsAndHasValidFormat:(BOOL *)format;
+ (long long)longForObject:(id)object existsAndHasValidFormat:(BOOL *)format;
+ (float)floatForObject:(id)object existsAndHasValidFormat:(BOOL *)format;
+ (double)doubleForObject:(id)object existsAndHasValidFormat:(BOOL *)format;
+ (BOOL)boolForObject:(id)object existsAndHasValidFormat:(BOOL *)format;
+ (id)URLForObject:(id)object;
+ (id)objectForURL:(id)url;
@end

#endif /* NPSDomainAccessorUtils_h */
