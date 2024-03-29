//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIStatisticChangeCache_h
#define TIStatisticChangeCache_h
@import Foundation;

@class NSMutableDictionary;

@interface TIStatisticChangeCache : NSObject {
  /* instance variables */
  NSMutableDictionary *_cacheWithoutInputMode;
  NSMutableDictionary *_cacheWithInputMode;
}

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)addValue:(int)value toStatisticWithName:(id)name andInputMode:(id)mode;
- (void)addValue:(int)value toStatisticWithName:(id)name inCache:(id)cache;
- (id)flush;
@end

#endif /* TIStatisticChangeCache_h */
