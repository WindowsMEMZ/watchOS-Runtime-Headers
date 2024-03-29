//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 660.60.3.0.0
//
#ifndef CacheDeleteVolume_h
#define CacheDeleteVolume_h
@import Foundation;

@class NSDictionary, NSString;

@interface CacheDeleteVolume : NSObject

@property (readonly) BOOL isRoot;
@property (readonly, nonatomic) NSString *fsType;
@property (readonly, nonatomic) NSString *mountPoint;
@property (readonly) unsigned long long initialFreespace;
@property (readonly, nonatomic) NSDictionary *thresholds;
@property (readonly, @dynamic, nonatomic) long long state;
@property (readonly) int dev;
@property (readonly) unsigned int block_size;
@property (readonly, nonatomic) NSString *bsdName;

/* class methods */
+ (id)volumeWithPath:(id)path;
+ (id)volumeWithMountpoint:(id)mountpoint;
+ (id)volumeWithUUID:(id)uuid;
+ (id)mountPointForUUID:(id)uuid;
+ (id)rootVolume;
+ (id)validateVolumeAtPath:(id)path;
+ (long long)stateForPath:(id)path;

/* instance methods */
- (id)initWithVolume:(id)volume;
- (id)copyWithZone:(struct _NSZone *)zone;
- (unsigned long long)amountPurged;
- (unsigned long long)used;
- (unsigned long long)size;
- (unsigned long long)effective_size;
- (unsigned long long)freespace;
- (BOOL)freespaceIsStale:(unsigned long long)stale;
- (BOOL)validate;
- (BOOL)amountIsRational:(id)rational;
- (id)initWithPath:(id)path;
- (id)uuid;
- (id)FSEventsUUID;
- (BOOL)containsPath:(id)path;
- (BOOL)mayContainPurgeableAmount:(id)amount forService:(id)service;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (BOOL)isEqualTo:(id)to;
@end

#endif /* CacheDeleteVolume_h */
