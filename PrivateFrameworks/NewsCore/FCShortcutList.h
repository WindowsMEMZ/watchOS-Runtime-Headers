//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCShortcutList_h
#define FCShortcutList_h
@import Foundation;

#include "FCPrivateDataController.h"
#include "FCMTWriterLock.h"

@class NSMutableDictionary, NSOrderedSet;

@interface FCShortcutList : FCPrivateDataController {
  /* instance variables */
  NSMutableDictionary *_shortcutsByID;
  FCMTWriterLock *_itemsLock;
}

@property (readonly, copy, nonatomic) NSOrderedSet *orderedShortcuts;

/* class methods */
+ (BOOL)requiresPushNotificationSupport;
+ (BOOL)requiresBatchedSync;
+ (BOOL)requiresHighPriorityFirstSync;
+ (id)backingRecordZoneIDs;
+ (id)backingRecordIDs;
+ (id)localStoreFilename;
+ (unsigned long long)localStoreVersion;
+ (id)commandStoreFileName;
+ (long long)commandQueueUrgency;
+ (id)commandsToMergeLocalDataToCloud:(id)cloud privateDataDirectory:(id)directory;
+ (id)desiredKeys;

/* instance methods */
- (id)initWithContext:(id)context pushNotificationCenter:(id)center storeDirectory:(id)directory;
- (void)addShortcut:(id)shortcut;
- (void)removeShortcutWithIdentifier:(id)identifier;
- (BOOL)moveShortcutWithIdentifier:(id)identifier toIndex:(unsigned long long)index;
- (BOOL)containsShortcut:(id)shortcut;
- (void)validateShortcuts;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (BOOL)canHelpRestoreZoneName:(id)name;
- (id)recordsForRestoringZoneName:(id)name;
- (void)handleSyncWithChangedRecords:(id)records deletedRecordNames:(id)names;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)id;
- (void)loadLocalCachesFromStore;
@end

#endif /* FCShortcutList_h */
