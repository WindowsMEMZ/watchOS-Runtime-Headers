//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncSharedSummaryUpdateParticipantOperation_h
#define HDCloudSyncSharedSummaryUpdateParticipantOperation_h
@import Foundation;

#include "HDCloudSyncOperation.h"
#include "HDCodableSummarySharingEntry.h"

@class NSArray;

@interface HDCloudSyncSharedSummaryUpdateParticipantOperation : HDCloudSyncOperation {
  /* instance variables */
  NSArray *_authorizationIdentifiersToAdd;
  NSArray *_authorizationIdentifiersToDelete;
}

@property (copy, nonatomic) HDCodableSummarySharingEntry *entry;

/* instance methods */
- (id)initWithConfiguration:(id)configuration codableEntry:(id)entry authorizationIdentifiersToAdd:(id)add authorizationIdentifiersToDelete:(id)delete;
- (void)main;
- (id)_createOrUpdateParticipantRecordInZone:(id)zone entry:(id)entry error:(id *)error;
- (id)_createOrUpdateAuthorizationRecordInZone:(id)zone participantRecord:(id)record error:(id *)error;
- (BOOL)_containsOnlyCategoriesToAddWithError:(id *)error;
@end

#endif /* HDCloudSyncSharedSummaryUpdateParticipantOperation_h */
