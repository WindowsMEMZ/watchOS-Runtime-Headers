//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDSyncAnchorEntity_h
#define HDSyncAnchorEntity_h
@import Foundation;

#include "HDHealthEntity.h"

@interface HDSyncAnchorEntity : HDHealthEntity
/* class methods */
+ (BOOL)prepareSyncAnchorsForEntityIdentifiers:(id)identifiers store:(id)store profile:(id)profile error:(id *)error;
+ (long long)syncAnchorOfType:(long long)type entityIdentifier:(id)identifier store:(id)store profile:(id)profile error:(id *)error;
+ (BOOL)updateSyncAnchor:(long long)anchor type:(long long)type entityIdentifier:(id)identifier store:(id)store updatePolicy:(long long)policy profile:(id)profile error:(id *)error;
+ (BOOL)updateSyncAnchorsWithMap:(id)map type:(long long)type store:(id)store updatePolicy:(long long)policy resetInvalid:(BOOL)invalid profile:(id)profile error:(id *)error;
+ (BOOL)updateSyncAnchor:(long long)anchor type:(long long)type updateDate:(id)date entityIdentifier:(id)identifier store:(id)store updatePolicy:(long long)policy profile:(id)profile error:(id *)error;
+ (BOOL)updateSyncAnchorsWithMap:(id)map type:(long long)type updateDate:(id)date store:(id)store updatePolicy:(long long)policy resetInvalid:(BOOL)invalid profile:(id)profile error:(id *)error;
+ (BOOL)getSyncAnchorsOfType:(long long)type anchorMap:(id)map store:(id)store profile:(id)profile error:(id *)error;
+ (BOOL)getMinimumSyncAnchorsOfType:(long long)type anchorMap:(id)map updatedSince:(id)since profile:(id)profile error:(id *)error;
+ (BOOL)resetSyncAnchorsOfType:(long long)type store:(id)store profile:(id)profile error:(id *)error;
+ (BOOL)resetAllSyncAnchorsOfType:(long long)type syncProvenances:(id)provenances transaction:(id)transaction error:(id *)error;
+ (BOOL)setAcknowledgedAnchorsWithMap:(id)map store:(id)store resetNext:(BOOL)next resetInvalid:(BOOL)invalid profile:(id)profile error:(id *)error;
+ (BOOL)resetSyncStore:(id)store profile:(id)profile error:(id *)error;
+ (BOOL)enumerateSyncAnchorsForStoreID:(long long)id database:(id)database error:(id *)error handler:(id /* block */)handler;
+ (BOOL)resetNextAnchorsIfNeededForStore:(id)store profile:(id)profile minimumElapsedTime:(double)time error:(id *)error;
+ (BOOL)updateLocalVersion:(int)version entityIdentifier:(id)identifier store:(id)store transaction:(id)transaction error:(id *)error;
+ (BOOL)updateReceivedVersion:(int)version entityIdentifier:(id)identifier store:(id)store transaction:(id)transaction error:(id *)error;
+ (BOOL)getRequestedVersion:(id *)version entityIdentifier:(id)identifier store:(id)store transaction:(id)transaction error:(id *)error;
+ (BOOL)updateRequestedVersion:(int)version entityIdentifier:(id)identifier store:(id)store transaction:(id)transaction error:(id *)error;
+ (id)databaseTable;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)count;
+ (id)uniquedColumns;
+ (long long)protectionClass;
@end

#endif /* HDSyncAnchorEntity_h */
