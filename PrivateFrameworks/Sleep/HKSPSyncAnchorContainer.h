//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSPSyncAnchorContainer_h
#define HKSPSyncAnchorContainer_h
@import Foundation;

#include "BSDescriptionProviding-Protocol.h"
#include "HKSPSyncAnchor-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface HKSPSyncAnchorContainer : NSObject<BSDescriptionProviding, NSSecureCoding, NSCopying> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSMutableDictionary *_backingDictionary;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepScheduleSyncAnchor;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepSettingsSyncAnchor;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepEventRecordSyncAnchor;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepScheduleStateSyncAnchor;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepModeSyncAnchor;
@property (readonly, nonatomic) NSObject<HKSPSyncAnchor> *sleepEventSyncAnchor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)allKeys;
+ (id)descriptionForKey:(id)key;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithIdentifier:(id)identifier;
- (void)_withLock:(id /* block */)lock;
- (id)syncAnchorForKey:(id)key;
- (id)lock_syncAnchorForKey:(id)key;
- (id)lock_getSyncAnchorForKey:(id)key;
- (void)updateSyncAnchor:(id)anchor forKey:(id)key;
- (void)lock_updateSyncAnchor:(id)anchor forKey:(id)key;
- (void)lock_setSyncAnchor:(id)anchor forKey:(id)key;
- (void)lock_removeSyncAnchorForKey:(id)key;
- (id)incrementSyncAnchorForKey:(id)key;
- (id)lock_incrementSyncAnchorForKey:(id)key;
- (void)updateWithContainer:(id)container;
- (void)compareWithContainer:(id)container sleepScheduleSyncAnchorOutOfDate:(id /* block */)date sleepSettingsSyncAnchorOutOfDate:(id /* block */)date sleepEventRecordSyncAnchorOutOfDate:(id /* block */)date sleepScheduleStateSyncAnchorOutOfDate:(id /* block */)date sleepModeSyncAnchorOutOfDate:(id /* block */)date sleepEventSyncAnchorOutOfDate:(id /* block */)date;
- (void)updateSleepScheduleSyncAnchor:(id)anchor;
- (void)updateSleepSettingsSyncAnchor:(id)anchor;
- (void)updateSleepEventRecordSyncAnchor:(id)anchor;
- (void)updateSleepScheduleStateSyncAnchor:(id)anchor;
- (void)updateSleepModeSyncAnchor:(id)anchor;
- (void)updateSleepEventSyncAnchor:(id)anchor;
- (id)incrementSleepScheduleSyncAnchor;
- (id)incrementSleepSettingsSyncAnchor;
- (id)incrementSleepEventRecordSyncAnchor;
- (id)incrementSleepScheduleStateSyncAnchor;
- (id)incrementSleepModeSyncAnchor;
- (id)incrementSleepEventSyncAnchor;
- (void)forceSetSleepScheduleSyncAnchor:(id)anchor;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)descriptionWithMultilinePrefix:(id)prefix;
- (id)descriptionBuilderWithMultilinePrefix:(id)prefix;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
@end

#endif /* HKSPSyncAnchorContainer_h */
