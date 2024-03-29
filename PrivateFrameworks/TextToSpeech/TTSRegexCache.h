//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 583.1.13.0.0
//
#ifndef TTSRegexCache_h
#define TTSRegexCache_h
@import Foundation;

@class NSMutableDictionary;

@interface TTSRegexCache : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _regexCacheLock;
}

@property (retain, nonatomic) NSMutableDictionary *cache;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)regexForString:(id)string;
- (id)regexForString:(id)string atStart:(BOOL)start;
@end

#endif /* TTSRegexCache_h */
