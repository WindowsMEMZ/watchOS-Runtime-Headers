//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 843.23.0.0.0
//
#ifndef INPauseWorkoutIntentHandling_Protocol_h
#define INPauseWorkoutIntentHandling_Protocol_h
@import Foundation;

@protocol INPauseWorkoutIntentHandling <NSObject>
/* instance methods */
- (void)handlePauseWorkout:(id)workout completion:(id /* block */)completion;
@optional
/* instance methods */
- (void)confirmPauseWorkout:(id)workout completion:(id /* block */)completion;
- (void)resolveWorkoutNameForPauseWorkout:(id)workout withCompletion:(id /* block */)completion;
@end

#endif /* INPauseWorkoutIntentHandling_Protocol_h */
