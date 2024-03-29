//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _CDContactResolver_h
#define _CDContactResolver_h
@import Foundation;

@interface _CDContactResolver : NSObject
/* class methods */
+ (id)resolveContactIdentifier:(id)identifier usingStore:(id)store;
+ (id)resolveContact:(id)contact usingStore:(id)store;
+ (id)normalizedStringFromContactString:(id)string;
+ (id)resolveContactIfPossibleFromContactIdentifierString:(id)string usingStore:(id)store;
+ (id)resolveContactIfPossibleFromContactIdentifierString:(id)string;
@end

#endif /* _CDContactResolver_h */
