//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLLinkActionExecutorDelegate_Protocol_h
#define CSLLinkActionExecutorDelegate_Protocol_h
@import Foundation;

@protocol CSLLinkActionExecutorDelegate 
/* instance methods */
- (void)setNextActionWithExecutor:(id)executor action:(id)action;
- (void)executionDidStartWithExecutor:(id)executor action:(id)action start:(id)start;
- (void)executionDidFinishWithExecutor:(id)executor action:(id)action foreground:(BOOL)foreground error:(id)error;
@end

#endif /* CSLLinkActionExecutorDelegate_Protocol_h */
