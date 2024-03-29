//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMDCKInitialAttachmentSyncController_h
#define IMDCKInitialAttachmentSyncController_h
@import Foundation;

#include "IMDCKAttachmentSyncController.h"

@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController

@property (retain, nonatomic) CKServerChangeToken *syncToken;

/* instance methods */
- (void)setLatestSyncToken:(id)token;
- (void)setLatestSyncToken:(id)token forSyncType:(id)type;
- (id)latestSyncToken;
- (BOOL)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)count maxBatchCount:(long long)count;
- (BOOL)_deviceConditionsAllowsMessageSyncForActivity:(id)activity deviceConditionsToCheck:(unsigned long long)check currentBatchCount:(long long)count maxBatchCount:(long long)count;
- (BOOL)_deviceConditionsAllowsMessageSync;
- (BOOL)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(BOOL)enabled;
- (BOOL)_kickOffWriteIfNeededForSyncType:(long long)type activity:(id)activity completion:(id /* block */)completion;
- (id)ckUtilities;
@end

#endif /* IMDCKInitialAttachmentSyncController_h */
