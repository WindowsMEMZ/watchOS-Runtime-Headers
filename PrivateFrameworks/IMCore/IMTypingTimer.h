//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMTypingTimer_h
#define IMTypingTimer_h
@import Foundation;

#include "IMHandle.h"

@class NSDate, NSTimer;
@protocol IMTypingTimerDelegate;

@interface IMTypingTimer : NSObject

@property (retain, nonatomic) NSTimer *timer;
@property (weak, nonatomic) NSObject<IMTypingTimerDelegate> *delegate;
@property (readonly, copy, nonatomic) IMHandle *handle;
@property (readonly, nonatomic) NSDate *beginDate;
@property (readonly, nonatomic) double timeoutInterval;
@property (readonly, nonatomic) BOOL valid;

/* class methods */
+ (BOOL)shouldAdjustTimeoutIntervalForBeginDate;

/* instance methods */
- (id)initWithHandle:(id)handle beginDate:(id)date timeoutInterval:(double)interval delegate:(id)delegate;
- (void)timerCallback;
- (void)triggerTimeout;
- (void)invalidate;
- (BOOL)isValid;
@end

#endif /* IMTypingTimer_h */
