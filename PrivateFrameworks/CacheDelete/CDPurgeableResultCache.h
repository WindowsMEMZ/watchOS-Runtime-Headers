//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 660.60.3.0.0
//
#ifndef CDPurgeableResultCache_h
#define CDPurgeableResultCache_h
@import Foundation;

#include "CDPurgeableResultCache-Protocol.h"
#include "CDRecentInfo.h"

@protocol OS_dispatch_queue;

@interface CDPurgeableResultCache : NSObject<CDPurgeableResultCache>

@property (retain, nonatomic) CDRecentInfo *recentPurgeableResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

/* class methods */
+ (id)sharedPurgeableResultsCache;
+ (id)fetchVolumeWithPath:(id)path;

/* instance methods */
- (id)initEmpty;
- (id)_recentPurgeableTotals:(int)totals validateResults:(BOOL)results;
- (id)recentPurgeableTotals:(int)totals;
- (id)recentInfoForVolume:(id)volume atUrgency:(int)urgency;
- (id)recentInfoForVolume:(id)volume atUrgency:(int)urgency validateResults:(BOOL)results;
- (id)dictionaryByMerging:(id)merging with:(id)with;
- (id)recentInfoForVolumes:(id)volumes atUrgency:(int)urgency validateResults:(BOOL)results targetVolume:(id)volume;
- (id)recentInfoForVolumes:(id)volumes atUrgency:(int)urgency;
- (long long)recentStateForVolume:(id)volume;
- (void)updateRecentVolumeInfo:(id)info;
- (void)invalidateAllForgettingPushers:(BOOL)pushers;
- (BOOL)isEmpty;
- (BOOL)isStale;
- (BOOL)hasInvalids;
- (id)bsdDiskForVolume:(id)volume;
- (id)thresholdsForVolume:(id)volume;
- (id)servicesForVolume:(id)volume;
- (BOOL)hasSnapshotForVolume:(id)volume;
- (BOOL)isStaleForVolume:(id)volume;
- (BOOL)isInvalidForVolume:(id)volume;
- (void)absorbRecentInfo:(id)info;
- (void)log;
- (void)keepUpToDate:(id)date;
@end

#endif /* CDPurgeableResultCache_h */
