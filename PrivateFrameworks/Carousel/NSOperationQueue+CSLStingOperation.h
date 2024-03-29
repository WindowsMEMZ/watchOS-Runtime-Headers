//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef NSOperationQueue_CSLStingOperation_h
#define NSOperationQueue_CSLStingOperation_h
@import Foundation;

#include "NSOperation.h"

@interface NSOperationQueue (CSLStingOperation)
/* instance methods */
- (void)cancelOperationsWithPriority:(long long)priority;
- (void)releaseDebounceOperations;
- (void)addOperations:(id)operations withPriority:(long long)priority;
- (void)addOperation:(id)operation withPriority:(long long)priority;
- (void)cancelAllPossibleOperations;
- (void)cancelNonSettleOperations;
@end

#endif /* NSOperationQueue_CSLStingOperation_h */
