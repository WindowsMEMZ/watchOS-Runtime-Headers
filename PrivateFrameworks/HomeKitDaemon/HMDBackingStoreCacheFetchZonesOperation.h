//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBackingStoreCacheFetchZonesOperation_h
#define HMDBackingStoreCacheFetchZonesOperation_h
@import Foundation;

#include "HMDBackingStoreOperation.h"

@interface HMDBackingStoreCacheFetchZonesOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id /* block */ fetchResult;

/* instance methods */
- (id)initWithFetchResult:(id /* block */)result;
- (id)mainReturningError;
@end

#endif /* HMDBackingStoreCacheFetchZonesOperation_h */
