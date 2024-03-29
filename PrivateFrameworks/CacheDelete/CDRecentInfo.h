//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 660.60.3.0.0
//
#ifndef CDRecentInfo_h
#define CDRecentInfo_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSNumber;

@interface CDRecentInfo : NSObject<NSSecureCoding, NSCopying>

@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSMutableDictionary *volumes;
@property (retain, nonatomic) NSMutableSet *pushingServices;
@property (retain, nonatomic) NSMutableSet *invalidVolumes;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)recentInfoForVolumes:(id)volumes;
+ (id)fetchAllowedClassesSet;

/* instance methods */
- (id)initWithVolumes:(id)volumes;
- (id)_createNewRecentVolumeInfoWithName:(id)name;
- (id)_createNewRecentVolumeInfo;
- (id)initWithRecentInfo:(id)info;
- (BOOL)validateForVolume:(id)volume andService:(id)service atUrgency:(int)urgency;
- (id)copyInvalidsForVolume:(id)volume atUrgency:(int)urgency;
- (id)copyPushingServices;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)_recentInfoForVolume:(id)volume atUrgency:(int)urgency validateResults:(BOOL)results;
- (id)recentInfoForVolume:(id)volume atUrgency:(int)urgency;
- (long long)recentStateForVolume:(id)volume;
- (BOOL)updateRecentState:(long long)state forVolume:(id)volume;
- (void)removeServiceInfo:(id)info forVolume:(id)volume;
- (void)removeServiceInfo:(id)info;
- (BOOL)updateServiceInfoAmount:(id)amount forService:(id)service onVolume:(id)volume atUrgency:(int)urgency withTimestamp:(double)timestamp nonPurgeableAmount:(id)amount deductFromCurrentAmount:(BOOL)amount info:(id)info;
- (id)bsdDiskForVolume:(id)volume;
- (id)thresholdsForVolume:(id)volume;
- (id)servicesForVolume:(id)volume;
- (BOOL)hasSnapshotForVolume:(id)volume;
- (BOOL)isStaleForVolume:(id)volume;
- (BOOL)isInvalidForVolume:(id)volume;
- (BOOL)isStale;
- (BOOL)isEmpty;
- (BOOL)hasInvalids;
- (id)description;
- (void)log;
- (void)invalidateForVolume:(id)volume;
@end

#endif /* CDRecentInfo_h */
