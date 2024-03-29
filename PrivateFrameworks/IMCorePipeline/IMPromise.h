//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMPromise_h
#define IMPromise_h
@import Foundation;

#include "IMResult.h"

@class NSMutableArray;

@interface IMPromise : NSObject {
  /* instance variables */
  IMResult *_result;
  NSMutableArray *_completionBlocks;
}

/* class methods */
+ (id)all:(id)all;

/* instance methods */
- (id)initWithValue:(id)value;
- (id)initWithError:(id)error;
- (BOOL)completed;
- (void)fullfillWithValue:(id)value;
- (void)failWithError:(id)error;
- (void)registerCompletionBlock:(id /* block */)block;
- (id)then:(id /* block */)then;
@end

#endif /* IMPromise_h */
