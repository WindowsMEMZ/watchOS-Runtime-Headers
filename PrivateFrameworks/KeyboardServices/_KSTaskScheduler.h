//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 157.200.0.0.0
//
#ifndef _KSTaskScheduler_h
#define _KSTaskScheduler_h
@import Foundation;

@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject

@property (retain, nonatomic) NSMutableDictionary *allTasks;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)registerTask:(id)task;
- (void)unregisterTask:(id)task;
@end

#endif /* _KSTaskScheduler_h */
