//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 752.2.0.0.0
//
#ifndef ActivitySharingDaemonCore_h
#define ActivitySharingDaemonCore_h

#import "ASAchievementManager.h"
#import "ASActivityDataBulletinManager.h"
#import "ASActivityDataManager.h"
#import "ASActivityDataNotificationManager.h"
#import "ASActivityDataValidator.h"
#import "ASActivitySharingManager.h"
#import "ASActivitySharingProfileExtension.h"
#import "ASAsyncTransactionQueue.h"
#import "ASCloudKitManager.h"
#import "ASCloudKitServerChangeTokenCache.h"
#import "ASCloudKitUtility.h"
#import "ASCompanionBulletinPostingManager.h"
#import "ASCompanionBulletinPostingManagerSubtitleBodyPair.h"
#import "ASCompetitionAwardingSource.h"
#import "ASCompetitionBulletinManager.h"
#import "ASCompetitionManager.h"
#import "ASCompetitionStore.h"
#import "ASCompetitionTemplateSource.h"
#import "ASContactsManager.h"
#import "ASDaemonWakeCoordinator.h"
#import "ASDatabaeCompetitionListEntryBulkDeletionJournalEntry.h"
#import "ASDatabaseClient.h"
#import "ASDatabaseCompetitionBulkDeletionJournalEntry.h"
#import "ASDatabaseCompetitionDeletionJournalEntry.h"
#import "ASDatabaseCompetitionEntity.h"
#import "ASDatabaseCompetitionJournalEntry.h"
#import "ASDatabaseCompetitionListEntryEncoder.h"
#import "ASDatabaseCompetitionListEntryEntity.h"
#import "ASDatabaseCompetitionListEntryJournalEntry.h"
#import "ASDatabaseSampleEntity.h"
#import "ASDatabaseServer.h"
#import "ASDatabseCompetitionEncoder.h"
#import "ASFakeBulletinManager.h"
#import "ASFakingManager.h"
#import "ASFriendInviteBulletinManager.h"
#import "ASFriendListManager.h"
#import "ASFriendListQueryServer.h"
#import "ASFriendNotificationContainer.h"
#import "ASGatewayManager.h"
#import "ASGizmoBulletinPostingManager.h"
#import "ASIDSMessageCenter.h"
#import "ASMessage.h"
#import "ASMessageHandler.h"
#import "ASMessageQueue.h"
#import "ASNotificationSentinelKeys.h"
#import "ASNotificationStep.h"
#import "ASOnWristMonitor.h"
#import "ASPeriodicUpdateManager.h"
#import "ASPredicateContainer.h"
#import "ASRelationshipBeganPlaceholder.h"
#import "ASRelationshipManager.h"
#import "ASServer.h"
#import "ASSetupManager.h"
#import "ASXPCClient.h"
#import "_ASContactPlaceholder.h"
#import "ACHAchievementStoreObserving-Protocol.h"
#import "ACHDataStorePropertyProviding-Protocol.h"
#import "ACHEarnedInstanceAwarding-Protocol.h"
#import "ACHTemplateSource-Protocol.h"
#import "APSConnectionDelegate-Protocol.h"
#import "ASActivityDataManagerObserver-Protocol.h"
#import "ASActivitySharingManagerProvider-Protocol.h"
#import "ASActivitySharingManagerReadyObserver-Protocol.h"
#import "ASActivitySharingPluginInterface-Protocol.h"
#import "ASBulletinPostingManager-Protocol.h"
#import "ASBulletinPostingManagerDelegate-Protocol.h"
#import "ASCloudKitManagerChangesObserver-Protocol.h"
#import "ASCompetitionAwardingSourceDataProvider-Protocol.h"
#import "ASCompetitionManagerObserver-Protocol.h"
#import "ASCompetitionTemplateSourceDataProvider-Protocol.h"
#import "ASContactsManagerObserver-Protocol.h"
#import "ASDatabaseServerInterface-Protocol.h"
#import "ASFriendInviteBulletinManagerDelegate-Protocol.h"
#import "ASFriendListObserver-Protocol.h"
#import "ASGatewayManagerChangesObserver-Protocol.h"
#import "ASIDSMessageCenterDelegate-Protocol.h"
#import "ASOnWristMonitorDelegate-Protocol.h"
#import "ASPeriodicUpdateRecordProvider-Protocol.h"
#import "ASServerInterface-Protocol.h"
#import "ASXPCInterface-Protocol.h"
#import "CHFitnessAppBadgeCountProvider-Protocol.h"
#import "CSLSOnWristMonitorDelegate-Protocol.h"
#import "FIFitnessAppsStateObserverDelegate-Protocol.h"
#import "HDCurrentActivitySummaryHelperObserver-Protocol.h"
#import "HDDataObserver-Protocol.h"
#import "HDDatabaseProtectedDataObserver-Protocol.h"
#import "HDHealthDaemonReadyObserver-Protocol.h"
#import "HDNanoAlertSuppressionObserver-Protocol.h"
#import "HDProfileExtension-Protocol.h"
#import "HDTaskServer-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "UNUserNotificationCenterDelegate-Protocol.h"
#import "_HKXPCExportable-Protocol.h"
#import "_HKFitnessFriendActivitySnapshot+Filterable.h"
#import "_HKFitnessFriendWorkout+Filterable.h"
#import "_HKFitnessFriendAchievement+Filterable.h"

#endif /* ActivitySharingDaemonCore_h */
