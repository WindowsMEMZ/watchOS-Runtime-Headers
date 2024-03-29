//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BLTPairedSyncCoordinator_h
#define BLTPairedSyncCoordinator_h
@import Foundation;

#include "PSYSyncClientStateObserver-Protocol.h"

@class NSString, PSYSyncClientStateObserver;

@interface BLTPairedSyncCoordinator : NSObject<PSYSyncClientStateObserver>

@property (retain, nonatomic) PSYSyncClientStateObserver *pairedSyncClientStateObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)syncState;
+ (void)syncDidComplete;
+ (void)reportProgress:(double)progress;

/* instance methods */
- (id)init;
- (void)syncClientActivity:(id)activity didChangeToSyncState:(long long)state;
@end

#endif /* BLTPairedSyncCoordinator_h */
