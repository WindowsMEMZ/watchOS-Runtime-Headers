//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef NSMapTable_HVHeadersMapTable_h
#define NSMapTable_HVHeadersMapTable_h
@import Foundation;

@interface NSMapTable (HVHeadersMapTable) <HVHeaderCollection>
/* class methods */
+ (id)hv_headerKeyFunctions;
+ (id)hv_headerValueFunctions;

/* instance methods */
- (void)hv_addEntriesFromHeadersDictionary:(id)dictionary;
- (id)hv_firstHeaderForKey:(id)key;
@end

#endif /* NSMapTable_HVHeadersMapTable_h */
