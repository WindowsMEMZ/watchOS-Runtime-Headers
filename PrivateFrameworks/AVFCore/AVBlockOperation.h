//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2220.14.1.0.0
//
#ifndef AVBlockOperation_h
#define AVBlockOperation_h
@import Foundation;

#include "AVOperation.h"

@interface AVBlockOperation : AVOperation {
  /* instance variables */
  id /* block */ _block;
}

/* instance methods */
- (id)init;
- (id)initWithBlock:(id /* block */)block;
- (void)dealloc;
- (void)start;
- (void)cancel;
@end

#endif /* AVBlockOperation_h */
