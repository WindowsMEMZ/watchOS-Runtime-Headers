//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 311.0.0.0.0
//
#ifndef NPSPrefPlistSizeUtil_h
#define NPSPrefPlistSizeUtil_h
@import Foundation;

@interface NPSPrefPlistSizeUtil : NSObject
/* class methods */
+ (unsigned long long)sizeForPlistAtPath:(id)path;
+ (unsigned long long)prefSizeFor:(id)for inContainer:(id)container;
+ (id)_domainPlistPathFor:(id)for inContainer:(id)container;
@end

#endif /* NPSPrefPlistSizeUtil_h */
