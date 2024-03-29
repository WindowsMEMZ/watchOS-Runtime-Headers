//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1877.50.1.0.0
//
#ifndef MLTask_h
#define MLTask_h
@import Foundation;

@class NSError, NSString;
@protocol OS_dispatch_queue;

@interface MLTask : NSObject

@property long long state;
@property (copy) NSError *error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (readonly, copy, nonatomic) NSString *taskIdentifier;

/* instance methods */
- (id)initWithState:(long long)state;
- (BOOL)_canResume;
- (BOOL)_canCancel;
- (BOOL)_canSuspend;
- (BOOL)_canComplete;
- (BOOL)_canFail;
- (void)_resumeWithTaskContext:(id)context;
- (void)resume;
- (void)resumeWithTaskContext:(id)context;
- (void)cancel;
- (void)suspendWithTaskContext:(id)context;
- (void)completeWithTaskContext:(id)context;
- (void)failWithError:(id)error taskContext:(id)context;
- (id)taskStatesToString:(long long)string;
@end

#endif /* MLTask_h */
