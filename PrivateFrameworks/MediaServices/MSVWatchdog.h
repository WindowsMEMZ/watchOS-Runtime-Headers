//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef MSVWatchdog_h
#define MSVWatchdog_h
@import Foundation;

@class NSOperationQueue, NSRunLoop, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MSVWatchdog : NSObject

@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSRunLoop *runLoop;
@property (nonatomic) BOOL scheduled;
@property (nonatomic) BOOL running;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (nonatomic) double interval;
@property (nonatomic) double timeoutInterval;
@property (copy, nonatomic) id /* block */ timeoutCallback;
@property (retain, nonatomic) NSString *mode;

/* instance methods */
- (id)init;
- (void)suspend;
- (void)resume;
- (void)_cancelTimeout;
- (void)_invokeCallback;
- (void)_scheduleTimeout;
- (void)_scheduleTest;
- (void)scheduleInOperationQueue:(id)queue;
- (void)scheduleInDispatchQueue:(id)queue;
- (void)scheduleInRunLoop:(id)loop;
@end

#endif /* MSVWatchdog_h */
