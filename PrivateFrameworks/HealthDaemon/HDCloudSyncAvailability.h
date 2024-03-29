//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDCloudSyncAvailability_h
#define HDCloudSyncAvailability_h
@import Foundation;

@interface HDCloudSyncAvailability : NSObject

@property (readonly, nonatomic) BOOL shouldPull;
@property (readonly, nonatomic) BOOL shouldPush;
@property (readonly, nonatomic) BOOL shouldSyncMedicalID;
@property (readonly, nonatomic) BOOL shouldSyncSummarySharing;
@property (readonly, nonatomic) BOOL shouldSyncAttachments;
@property (readonly, nonatomic) BOOL shouldSyncDeviceContext;
@property (readonly, nonatomic) BOOL shouldSyncStateEntities;

/* instance methods */
- (id)initWithProfile:(id)profile;
- (void)_setShouldPullWithProfile:(id)profile;
- (void)_setShouldPushWithProfile:(id)profile;
- (void)_setShouldSyncMedicalIDWithProfile:(id)profile;
- (void)_setShouldSyncSummarySharingWithProfile:(id)profile;
- (void)_setShouldSyncAttachmentsWithProfile:(id)profile;
- (void)_setShouldSyncDeviceContextWithProfile:(id)profile;
- (void)_setShouldSyncStateEntitiesWithProfile:(id)profile;
@end

#endif /* HDCloudSyncAvailability_h */
