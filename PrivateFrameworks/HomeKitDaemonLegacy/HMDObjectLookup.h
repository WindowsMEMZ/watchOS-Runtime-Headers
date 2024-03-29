//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDObjectLookup_h
#define HMDObjectLookup_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"

@class NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface HMDObjectLookup : HMFObject<HMFLogging>

@property (readonly, nonatomic) NSMapTable *uuidToObjectMapping;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logCategory;

/* instance methods */
- (id)initWithWorkQueue:(id)queue;
- (void)lookUpAndApplyObjectChange:(id)change previous:(id)previous result:(id)result completionHandler:(id /* block */)handler;
- (id)_lookUpObjectWithUUID:(id)uuid applyObjectChange:(id)change previous:(id)previous result:(id)result completionHandler:(id /* block */)handler;
- (void)scanObjects;
- (void)resetObjects;
- (void)applyChange:(id)change previous:(id)previous onObject:(id)object result:(id)result completionHandler:(id /* block */)handler;
@end

#endif /* HMDObjectLookup_h */
