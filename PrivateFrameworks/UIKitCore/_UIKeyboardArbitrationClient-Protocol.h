//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIKeyboardArbitrationClient_Protocol_h
#define _UIKeyboardArbitrationClient_Protocol_h
@import Foundation;

@protocol _UIKeyboardArbitrationClient 
/* instance methods */
- (void)queue_keyboardChanged:(id)changed onComplete:(id /* block */)complete;
- (void)queue_keyboardChangedWithCompletion:(id /* block */)completion;
- (void)queue_keyboardIAVChanged:(double)iavchanged onComplete:(id /* block */)complete;
- (void)queue_keyboardTransition:(id)transition event:(unsigned long long)event withInfo:(id)info onComplete:(id /* block */)complete;
- (void)queue_keyboardSuppressed:(BOOL)suppressed withCompletion:(id /* block */)completion;
- (void)queue_sceneBecameFocused:(id)focused withCompletion:(id /* block */)completion;
- (void)queue_getDebugInfoWithCompletion:(id /* block */)completion;
- (void)queue_setKeyboardDisabled:(BOOL)disabled withCompletion:(id /* block */)completion;
- (void)queue_setLastEventSource:(long long)source withCompletion:(id /* block */)completion;
- (void)queue_activeProcessResignWithCompletion:(id /* block */)completion;
- (void)queue_endInputSessionWithCompletion:(id /* block */)completion;
- (void)queue_keyboardUIDidChange:(id)change onComplete:(id /* block */)complete;
@end

#endif /* _UIKeyboardArbitrationClient_Protocol_h */
