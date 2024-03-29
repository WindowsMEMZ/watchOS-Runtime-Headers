//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSXPCConnectionRemoteObjectPromise_h
#define IDSXPCConnectionRemoteObjectPromise_h
@import Foundation;

@class NSMutableArray, NSXPCInterface;
@protocol OS_dispatch_queue;

@interface IDSXPCConnectionRemoteObjectPromise : NSObject

@property (retain, nonatomic) NSXPCInterface *interface;
@property (retain, nonatomic) NSMutableArray *pendingInvocations;
@property (retain, nonatomic) id target;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* instance methods */
- (id)initWithInterface:(id)interface queue:(id)queue;
- (void)dealloc;
- (void)fulfillWithRemoteObject:(id)object;
- (void)failWithError:(id)error;
- (id)remoteObjectProxy;
- (BOOL)respondsToSelector:(SEL)selector;
- (id)methodSignatureForSelector:(SEL)selector;
- (void)forwardInvocation:(id)invocation;
- (void)_assertVoidReturnValueInInvocation:(id)invocation;
@end

#endif /* IDSXPCConnectionRemoteObjectPromise_h */
