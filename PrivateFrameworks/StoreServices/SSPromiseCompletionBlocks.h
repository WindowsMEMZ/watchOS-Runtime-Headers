//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef SSPromiseCompletionBlocks_h
#define SSPromiseCompletionBlocks_h
@import Foundation;

@class NSMutableArray;

@interface SSPromiseCompletionBlocks : NSObject {
  /* instance variables */
  NSMutableArray *_completionBlocks;
  BOOL _shouldCallImmediately;
}

/* instance methods */
- (id)init;
- (void)addCompletionBlock:(id /* block */)block;
- (void)addErrorBlock:(id /* block */)block;
- (void)addSuccessBlock:(id /* block */)block;
- (void)callCompletionBlock:(id /* block */)block withPromiseResult:(id)result;
- (void)callErrorBlock:(id /* block */)block withPromiseResult:(id)result;
- (void)callSuccessBlock:(id /* block */)block withPromiseResult:(id)result;
- (void)flushCompletionBlocksWithPromiseResult:(id)result;
@end

#endif /* SSPromiseCompletionBlocks_h */
