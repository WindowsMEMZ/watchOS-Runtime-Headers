//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2200.4.3.7.0
//
#ifndef MTScheduler_h
#define MTScheduler_h
@import Foundation;

@interface MTScheduler : NSObject
/* class methods */
+ (unsigned int)defaultPriority;
+ (id)serialSchedulerWithName:(id)name priority:(unsigned int)priority;
+ (id)serialSchedulerWithQueue:(id)queue;
+ (id)serialSchedulerWithName:(id)name;
+ (id)serialSchedulerForObject:(id)object;
+ (id)serialSchedulerForObject:(id)object priority:(unsigned int)priority;
+ (id)globalAsyncSchedulerWithPriority:(unsigned int)priority;
@end

#endif /* MTScheduler_h */
