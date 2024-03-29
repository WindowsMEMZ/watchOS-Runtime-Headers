//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPuzzleHistory_h
#define FCPuzzleHistory_h
@import Foundation;

#include "FCPrivateDataController.h"
#include "FCCloudContext.h"
#include "FCMTWriterLock.h"

@class NSMutableDictionary;

@interface FCPuzzleHistory : FCPrivateDataController {
  /* instance variables */
  NSMutableDictionary *_itemsByPuzzleID;
  FCCloudContext *_cloudContext;
  FCMTWriterLock *_itemsLock;
}

/* class methods */
+ (id)desiredKeys;
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

/* instance methods */
- (id)initWithContext:(id)context pushNotificationCenter:(id)center storeDirectory:(id)directory;
- (BOOL)isPuzzleInPuzzleHistory:(id)history;
- (BOOL)isPuzzleHistoryEmpty;
- (id)puzzleHistoryItemForPuzzleID:(id)id;
- (void)addPuzzleToPuzzleHistory:(id)history puzzleTypeID:(id)id;
- (void)updatePuzzle:(id)puzzle puzzleTypeID:(id)id progressData:(id)data progressLevel:(long long)level playDuration:(long long)duration isSolved:(BOOL)solved;
- (void)removePuzzleFromPuzzleHistory:(id)history;
- (id)datePuzzleWasLastPlayed:(id)played;
- (id)allSortedPuzzleIDsSinceLastPlayedDate:(id)date;
- (id)sortedPuzzleIDsForPuzzleTypeID:(id)id sinceLastPlayedDate:(id)date;
- (BOOL)hasPuzzleBeenCompleted:(id)completed;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)loadLocalCachesFromStore;
- (void)handleSyncWithChangedRecords:(id)records deletedRecordNames:(id)names;
- (id)allKnownRecordNamesWithinRecordZoneWithID:(id)id;
- (BOOL)canHelpRestoreZoneName:(id)name;
- (id)recordsForRestoringZoneName:(id)name;
@end

#endif /* FCPuzzleHistory_h */
