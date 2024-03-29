//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDHomeKeyDataRecorder_h
#define HMDHomeKeyDataRecorder_h
@import Foundation;

#include "HMFObject.h"

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HMDHomeKeyDataRecorder : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, copy) NSMutableArray *mutableRecords;
@property (readonly, copy) NSArray *records;

/* class methods */
+ (id)sharedRecorder;

/* instance methods */
- (id)init;
- (void)recordInitialWalletKeys:(id)keys;
- (void)recordAddedWalletKey:(id)key passJSONDict:(id)jsondict;
- (void)recordUpdatedWalletKey:(id)key passJSONDict:(id)jsondict;
- (void)recordRemovedWalletKeyWithSerialNumber:(id)number noWalletKeysRemaining:(BOOL)remaining;
- (void)addRecord:(id)record clearPrevious:(BOOL)previous;
@end

#endif /* HMDHomeKeyDataRecorder_h */
