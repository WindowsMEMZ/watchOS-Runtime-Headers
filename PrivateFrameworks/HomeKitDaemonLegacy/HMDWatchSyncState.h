//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDWatchSyncState_h
#define HMDWatchSyncState_h
@import Foundation;

#include "HMFObject.h"
#include "HMDPairedSync.h"
#include "HMDWatchSync.h"

@class NSMutableArray, NSString;

@interface HMDWatchSyncState : HMFObject {
  /* instance variables */
  NSMutableArray *_syncs;
}

@property (readonly, copy, nonatomic) NSString *deviceId;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) HMDWatchSync *currentSync;
@property (readonly, nonatomic) HMDPairedSync *pairedSync;

/* class methods */
+ (BOOL)isNewBetter:(unsigned long long)better present:(unsigned long long)present;

/* instance methods */
- (id)initWithDeviceId:(id)id pairedSync:(id)sync;
- (void)addNewSync:(id)sync;
- (BOOL)removeSync;
- (void)dealloc;
- (id)description;
@end

#endif /* HMDWatchSyncState_h */
