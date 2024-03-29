//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3093.2.4.4.10
//
#ifndef AXThreadTimerTask_h
#define AXThreadTimerTask_h
@import Foundation;

@interface AXThreadTimerTask : NSObject

@property (copy, nonatomic) id /* block */ block;
@property (nonatomic) BOOL cancel;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL active;

/* instance methods */
- (void)run;
- (void)runAfterDelay:(float)delay;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (BOOL)isActive;
@end

#endif /* AXThreadTimerTask_h */
