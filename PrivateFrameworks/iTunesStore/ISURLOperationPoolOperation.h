//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1450.2.4.0.0
//
#ifndef ISURLOperationPoolOperation_h
#define ISURLOperationPoolOperation_h
@import Foundation;

#include "ISOperation.h"
#include "ISURLOperation.h"

@class NSMutableArray;

@interface ISURLOperationPoolOperation : ISOperation {
  /* instance variables */
  long long _cancelCount;
  BOOL _forwardImmediately;
  NSMutableArray *_operations;
}

@property (readonly, nonatomic) ISURLOperation *mainOperation;

/* instance methods */
- (void)dealloc;
- (void)addOperation:(id)operation;
- (void)cancelOperation:(id)operation;
- (BOOL)containsOperation:(id)operation;
- (void)run;
- (void)_forwardResponseFromOperation:(id)operation toOperation:(id)operation;
@end

#endif /* ISURLOperationPoolOperation_h */
