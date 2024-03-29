//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIActionWhenIdle_h
#define TIActionWhenIdle_h
@import Foundation;

@class NSInvocation;

@interface TIActionWhenIdle : NSObject

@property (retain, nonatomic) NSInvocation *invocation;

/* class methods */
+ (id)actionWhenIdleWithTarget:(id)target selector:(SEL)selector object:(id)object;

/* instance methods */
- (id)initWithTarget:(id)target selector:(SEL)selector object:(id)object;
- (id)initWithInvocation:(id)invocation;
- (BOOL)isValid;
- (void)invalidate;
- (void)invoke;
- (void)addObserverToRunLoop;
@end

#endif /* TIActionWhenIdle_h */
