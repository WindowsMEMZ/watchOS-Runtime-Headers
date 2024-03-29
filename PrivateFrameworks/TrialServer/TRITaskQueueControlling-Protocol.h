//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef TRITaskQueueControlling_Protocol_h
#define TRITaskQueueControlling_Protocol_h
@import Foundation;

@protocol TRITaskQueueControlling 
/* instance methods */
- (BOOL)cancelTasksWithTag:(id)tag;
- (BOOL)cancelTasksWithTag:(id)tag excludingTasks:(id)tasks;
- (BOOL)enumerateTasksWithTagsIntersectingTagSet:(id)set block:(id /* block */)block;
@end

#endif /* TRITaskQueueControlling_Protocol_h */
