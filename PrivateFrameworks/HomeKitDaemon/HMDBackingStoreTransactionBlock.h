//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBackingStoreTransactionBlock_h
#define HMDBackingStoreTransactionBlock_h
@import Foundation;

#include "HMFObject.h"
#include "HMDBackingStore.h"
#include "HMDBackingStoreTransactionOptions.h"
#include "HMFLogging-Protocol.h"

@class NSMutableArray, NSString;

@interface HMDBackingStoreTransactionBlock : HMFObject<HMFLogging>

@property (weak, nonatomic) HMDBackingStore *backingStore;
@property (retain, nonatomic) NSMutableArray *objects;
@property (nonatomic) BOOL committed;
@property (readonly, nonatomic) HMDBackingStoreTransactionOptions *options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)sort:(id)sort;
+ (id)logCategory;

/* instance methods */
- (id)initWithBackingStore:(id)store options:(id)options label:(id)label;
- (void)add:(id)add;
- (void)add:(id)add withMessage:(id)message;
- (void)addObjects:(id)objects;
- (void)run:(id /* block */)run;
- (void)run;
- (void)runWithoutSave:(id /* block */)save;
- (void)save:(id /* block */)save;
- (void)save;
- (void)dumpWithVerbosity:(BOOL)verbosity prefix:(id)prefix logType:(unsigned char)type;
- (void)dumpDebug:(id)debug;
- (void)dumpDebug;
- (id)logIdentifier;
@end

#endif /* HMDBackingStoreTransactionBlock_h */
