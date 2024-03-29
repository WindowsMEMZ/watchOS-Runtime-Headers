//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIReusePool_h
#define _UIReusePool_h
@import Foundation;

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface _UIReusePool : NSObject {
  /* instance variables */
  NSMutableSet *_reuseSet;
  NSObject<OS_dispatch_queue> *_reuseSetAccessQueue;
}

@property (readonly, nonatomic) unsigned long long purgePolicy;

/* class methods */
+ (void)__applicationDidEnterBackground:(id)background;
+ (void)__applicationWillEnterForeground:(id)foreground;
+ (void)initialize;

/* instance methods */
- (id)init;
- (id)initWithPolicy:(unsigned long long)policy;
- (void)addObject:(id)object;
- (id)reusableObject;
- (void)drainPool;
@end

#endif /* _UIReusePool_h */
