//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISNotificationCenterCellCache_h
#define CUISNotificationCenterCellCache_h
@import Foundation;

@class NSMutableArray, NSMutableOrderedSet;

@interface CUISNotificationCenterCellCache : NSObject {
  /* instance variables */
  NSMutableArray *_cache;
  NSMutableOrderedSet *_cacheOrderedByUsage;
}

/* class methods */
+ (id)sharedLabelCache;

/* instance methods */
- (id)init;
- (id)labelImageOfType:(unsigned long long)type withColor:(id)color text:(id)text;
- (void)cacheLabelImage:(id)image;
- (void)reset;
- (void)checkMainThread;
@end

#endif /* CUISNotificationCenterCellCache_h */
