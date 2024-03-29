//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncSharedSummarySynchronizeParticipantsOperation_h
#define HDCloudSyncSharedSummarySynchronizeParticipantsOperation_h
@import Foundation;

#include "HDCloudSyncOperation.h"
#include "HDCloudSyncCachedZone.h"

@class NSMutableArray, NSMutableSet;

@interface HDCloudSyncSharedSummarySynchronizeParticipantsOperation : HDCloudSyncOperation {
  /* instance variables */
  HDCloudSyncCachedZone *_privateMetadataZone;
  NSMutableSet *_updatedParticipantRecordIDs;
  NSMutableArray *_updatedAutorizationRecords;
  NSMutableArray *_updatedLocalEntries;
}

/* instance methods */
- (void)main;
- (id)_filterEntries:(id)entries active:(BOOL)active;
- (BOOL)_mergeLocalAndCloudParticipants:(id)participants error:(id *)error;
- (id)_authorizationRecordForParticipant:(id)participant error:(id *)error;
- (BOOL)_mergeLocalAndCloudParticipant:(id)participant error:(id *)error;
- (BOOL)_deleteProfilesForInactiveParticipants:(id)participants error:(id *)error;
- (BOOL)_deleteLocalProfileIfNecessaryForParticipant:(id)participant error:(id *)error;
- (BOOL)_createProfileIfNecessaryForSharingEntry:(id)entry error:(id *)error;
- (BOOL)_createProfileIfNecessaryForParticipant:(id)participant error:(id *)error;
- (BOOL)_createProfileWithUUID:(id)uuid contactIdentifier:(id)identifier firstName:(id)name lastName:(id)name ownerParticipant:(id)participant error:(id *)error;
@end

#endif /* HDCloudSyncSharedSummarySynchronizeParticipantsOperation_h */
