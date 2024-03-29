//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2480.0.0.0.0
//
#ifndef ICSelectorDelayer_h
#define ICSelectorDelayer_h
@import Foundation;

@class NSDate;
@protocol OS_dispatch_queue;

@interface ICSelectorDelayer : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL waitToFireUntilRequestsStop;
@property (nonatomic) BOOL callOnMainThread;
@property (retain, nonatomic) NSDate *requestFireDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (copy, nonatomic) id /* block */ fireBlock;
@property double delay;
@property double maximumDelay;
@property (readonly, nonatomic) BOOL isScheduledToFire;

/* instance methods */
- (id)initWithTarget:(id)target selector:(SEL)selector delay:(double)delay maximumDelay:(double)delay waitToFireUntilRequestsStop:(BOOL)stop callOnMainThread:(BOOL)thread;
- (id)initWithTarget:(id)target selector:(SEL)selector delay:(double)delay waitToFireUntilRequestsStop:(BOOL)stop callOnMainThread:(BOOL)thread;
- (id)initWithTarget:(id)target selector:(SEL)selector delay:(double)delay maximumDelay:(double)delay callOnMainThread:(BOOL)thread;
- (void)dealloc;
- (void)requestFire;
- (void)fireImmediately;
- (void)callTargetSelector;
- (void)cancelPreviousFireRequests;
- (void)_cancelFireRequests;
@end

#endif /* ICSelectorDelayer_h */
