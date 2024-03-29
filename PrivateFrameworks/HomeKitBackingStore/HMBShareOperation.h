//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMBShareOperation_h
#define HMBShareOperation_h
@import Foundation;

#include "HMBFutureOperation.h"
#include "HMBCloudZone.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMBShareOperation : HMBFutureOperation<HMFLogging>

@property (readonly) HMBCloudZone *cloudZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithCloudZone:(id)zone block:(id /* block */)block;
- (void)main;
@end

#endif /* HMBShareOperation_h */
