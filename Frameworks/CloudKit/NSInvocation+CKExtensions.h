//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2130.14.1.0.0
//
#ifndef NSInvocation_CKExtensions_h
#define NSInvocation_CKExtensions_h
@import Foundation;

@interface NSInvocation (CKExtensions)
/* class methods */
+ (id)invocationToFinishOperationWithInfo:(id)info withError:(id)error;

/* instance methods */
- (void)CKInvokeAndNilOutReplyBlockWithError:(id)error forProtocol:(id)protocol;
- (void)CKIterateArgumentsForIndexRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range primitiveTypeBlock:(id /* block */)block objectBlock:(id /* block */)block blockBlock:(id /* block */)block;
@end

#endif /* NSInvocation_CKExtensions_h */
