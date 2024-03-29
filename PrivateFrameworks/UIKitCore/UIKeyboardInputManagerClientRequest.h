//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIKeyboardInputManagerClientRequest_h
#define UIKeyboardInputManagerClientRequest_h
@import Foundation;

@class NSInvocation;

@interface UIKeyboardInputManagerClientRequest : NSObject

@property (readonly, nonatomic) NSInvocation *invocation;
@property (nonatomic) unsigned long long errorCount;

/* class methods */
+ (id)untargetedInvocationWithInvocation:(id)invocation withCompletion:(BOOL)completion;

/* instance methods */
- (id)initWithInvocation:(id)invocation;
@end

#endif /* UIKeyboardInputManagerClientRequest_h */
