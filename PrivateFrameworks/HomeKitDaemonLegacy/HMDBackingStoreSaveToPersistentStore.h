//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBackingStoreSaveToPersistentStore_h
#define HMDBackingStoreSaveToPersistentStore_h
@import Foundation;

#include "HMDBackingStoreOperation.h"
#include "HMDHomeManager.h"

@class NSString;

@interface HMDBackingStoreSaveToPersistentStore : HMDBackingStoreOperation

@property (readonly, nonatomic) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) BOOL incrementGeneration;

/* instance methods */
- (id)initWithHomeManager:(id)manager reason:(id)reason incrementGeneration:(BOOL)generation;
- (id)mainReturningError;
@end

#endif /* HMDBackingStoreSaveToPersistentStore_h */
