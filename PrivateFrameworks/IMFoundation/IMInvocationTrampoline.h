//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1003.300.71.0.0
//
#ifndef IMInvocationTrampoline_h
#define IMInvocationTrampoline_h
@import Foundation;

@interface IMInvocationTrampoline : NSObject

@property (retain) id target;

/* instance methods */
- (void)dealloc;
- (void)performInvocation:(id)invocation;
- (id)methodSignatureForSelector:(SEL)selector;
- (BOOL)respondsToSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
@end

#endif /* IMInvocationTrampoline_h */
