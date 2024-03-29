//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBlockTransaction_h
#define CSLBlockTransaction_h
@import Foundation;

#include "IOSSHLTransaction.h"

@interface CSLBlockTransaction : IOSSHLTransaction

@property (copy, nonatomic) id /* block */ block;

/* class methods */
+ (id)transactionWithBlock:(id /* block */)block;

/* instance methods */
- (void)_begin;
@end

#endif /* CSLBlockTransaction_h */
