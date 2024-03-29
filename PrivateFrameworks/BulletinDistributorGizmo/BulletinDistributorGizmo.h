//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 379.2.3.0.0
//
#ifndef BulletinDistributorGizmo_h
#define BulletinDistributorGizmo_h

#import "BLTActionInfo.h"
#import "BLTActionTypeFactory.h"
#import "BLTAddBulletinBatchAssertion.h"
#import "BLTAddBulletinBatchSingleBulletinAssertion.h"
#import "BLTAlertStateTester.h"
#import "BLTAttachmentsCleaner.h"
#import "BLTAttachmentsCleanerActivity.h"
#import "BLTBBBulletinKey.h"
#import "BLTBBObserver.h"
#import "BLTBBObserverDelegate.h"
#import "BLTBulletinDistributorClient.h"
#import "BLTBulletinDistributorSubscriber.h"
#import "BLTBulletinDistributorSubscriberList.h"
#import "BLTBulletinDistributorSubscriptionInfo.h"
#import "BLTBulletinReplyInfo.h"
#import "BLTBulletinReplyInfoCompanionInfo.h"
#import "BLTBulletinSendQueue.h"
#import "BLTBulletinSendQueueAttachmentInfo.h"
#import "BLTBulletinSendQueueAttachmentSender.h"
#import "BLTBulletinSendQueuePassthrough.h"
#import "BLTBulletinStore.h"
#import "BLTBulletinStoreReplyInfoItem.h"
#import "BLTCircularBitBuffer.h"
#import "BLTClientReplyTimeout.h"
#import "BLTClientReplyTimeoutManager.h"
#import "BLTDataProvider.h"
#import "BLTDataProviderConnection.h"
#import "BLTDataProviderManager.h"
#import "BLTGizmoMuteSync.h"
#import "BLTIDSDevice.h"
#import "BLTIDSService.h"
#import "BLTImageAttachmentInfo.h"
#import "BLTLightsAndSirensCache.h"
#import "BLTLocalPingSubscriberService.h"
#import "BLTMessageDigest.h"
#import "BLTMuteSync.h"
#import "BLTNanoPingSubscriberList.h"
#import "BLTObjectSerializer.h"
#import "BLTObjectStore.h"
#import "BLTPBAckInitialSequenceNumberRequest.h"
#import "BLTPBAction.h"
#import "BLTPBActionFactory.h"
#import "BLTPBActionFactoryVersion1.h"
#import "BLTPBActionInformation.h"
#import "BLTPBAddBulletinRequest.h"
#import "BLTPBAddBulletinSummaryRequest.h"
#import "BLTPBAppearance.h"
#import "BLTPBBulletin.h"
#import "BLTPBBulletinAttachment.h"
#import "BLTPBBulletinIdentifier.h"
#import "BLTPBBulletinSummary.h"
#import "BLTPBBulletinSummaryKey.h"
#import "BLTPBCancelBulletinRequest.h"
#import "BLTPBCommunicationContext.h"
#import "BLTPBContact.h"
#import "BLTPBDateComponents.h"
#import "BLTPBFileURLMetaData.h"
#import "BLTPBFullBulletinList.h"
#import "BLTPBHandleAcknowledgeActionRequest.h"
#import "BLTPBHandleDidPlayLightsAndSirensReplyRequest.h"
#import "BLTPBHandleDismissActionRequest.h"
#import "BLTPBHandleLaunchSessionActionRequest.h"
#import "BLTPBHandlePairedDeviceReady.h"
#import "BLTPBHandleSnoozeActionRequest.h"
#import "BLTPBHandleSupplementaryActionRequest.h"
#import "BLTPBImage.h"
#import "BLTPBMuteAssertion.h"
#import "BLTPBProtobuf.h"
#import "BLTPBProtobufSequenceNumberManager.h"
#import "BLTPBRemoveBulletinRequest.h"
#import "BLTPBRemoveSectionRequest.h"
#import "BLTPBSectionBulletinList.h"
#import "BLTPBSectionIcon.h"
#import "BLTPBSectionIconVariant.h"
#import "BLTPBSectionInfo.h"
#import "BLTPBSectionInfoSettings.h"
#import "BLTPBSelectorItem.h"
#import "BLTPBSetNotificationsAlertLevelRequest.h"
#import "BLTPBSetNotificationsCriticalAlertRequest.h"
#import "BLTPBSetNotificationsGroupingRequest.h"
#import "BLTPBSetNotificationsSoundRequest.h"
#import "BLTPBSetRemoteGlobalSettingsRequest.h"
#import "BLTPBSetRemoteGlobalSpokenSettingEnabledRequest.h"
#import "BLTPBSetSectionInfoRequest.h"
#import "BLTPBSetSectionInfoResponse.h"
#import "BLTPBSetSectionSubtypeParametersIconRequest.h"
#import "BLTPBSetSectionSubtypeParametersIconResponse.h"
#import "BLTPBShouldSuppressLightsAndSirensNowRequest.h"
#import "BLTPBShouldSuppressLightsAndSirensNowResponse.h"
#import "BLTPBThreadMuteAssertion.h"
#import "BLTPBTransportData.h"
#import "BLTPBUpdateBulletinListRequest.h"
#import "BLTPBWillSendLightsAndSirensRequest.h"
#import "BLTPBWillSendLightsAndSirensResponse.h"
#import "BLTPairedSyncCoordinator.h"
#import "BLTPairedSyncState.h"
#import "BLTPairedSyncStateChangedInfo.h"
#import "BLTPingHandlerHolder.h"
#import "BLTPingSubscriber.h"
#import "BLTPingSubscriberManager.h"
#import "BLTPreviouslySentMessageStore.h"
#import "BLTReferenceCountedFile.h"
#import "BLTRemoteCompanionServer.h"
#import "BLTRemoteGlobalSettingsChangeset.h"
#import "BLTRemoteGlobalSettingsSyncServer.h"
#import "BLTRemoteObject.h"
#import "BLTRemotePingSubscriberService.h"
#import "BLTRemoteRequest.h"
#import "BLTRemoteRequestLogItem.h"
#import "BLTSectionConfiguration.h"
#import "BLTSectionConfigurationCMASItem.h"
#import "BLTSectionConfigurationInternal.h"
#import "BLTSectionConfigurationItem.h"
#import "BLTSectionConfigurationItemFactory.h"
#import "BLTSectionConfigurationMessagesItem.h"
#import "BLTSectionIdentifierMapper.h"
#import "BLTSectionIdentifierMapping.h"
#import "BLTSectionInfoItem.h"
#import "BLTSectionInfoList.h"
#import "BLTSectionInfoListItem.h"
#import "BLTSectionInfoObserver.h"
#import "BLTSectionInfoOverride.h"
#import "BLTSectionInfoSectionIDs.h"
#import "BLTSectionInfoStore.h"
#import "BLTSectionParametersSubtypeIconStore.h"
#import "BLTSendQueueSerializer.h"
#import "BLTSettingAndCompletion.h"
#import "BLTSettingSync.h"
#import "BLTSettingSyncInternal.h"
#import "BLTSettingSyncServer.h"
#import "BLTSettingsAllowsNotificationsInfo.h"
#import "BLTSettingsAllowsNotificationsObserverInfo.h"
#import "BLTSettingsApplicationInfo.h"
#import "BLTSettingsGateway.h"
#import "BLTSettingsSendSerializer.h"
#import "BLTSettingsSendSerializerPassthrough.h"
#import "BLTSettingsService.h"
#import "BLTSettingsServiceServer.h"
#import "BLTSimpleCache.h"
#import "BLTSingleBulletinReplyInfo.h"
#import "BLTSpokenSettingSync.h"
#import "BLTStandaloneBulletinDistributorClient.h"
#import "BLTSubscriberRemoteClient.h"
#import "BLTSupplementaryActionInfo.h"
#import "BLTTestIDSDevice.h"
#import "BLTTestIDSService.h"
#import "BLTTestIDSServiceDelegate.h"
#import "BLTTransaction.h"
#import "BLTUniversalBulletinReplyInfo.h"
#import "BLTUniversalBulletinReplyInfoReplyHolder.h"
#import "BLTWatchKitAppDefinition.h"
#import "BLTWatchKitAppList.h"
#import "BLTWristStateObserver.h"
#import "BLTXPCActivity.h"
#import "MockRemoteGlobalSettingsProvider.h"
#import "UNAudioNotificationAttachmentOptions.h"
#import "UNImageNotificationAttachmentOptions.h"
#import "UNMovieNotificationAttachmentOptions.h"
#import "BBDataProvider-Protocol.h"
#import "BBObserverDelegate-Protocol.h"
#import "BBRemoteDataProvider-Protocol.h"
#import "BBSectionIdentity-Protocol.h"
#import "BLTAbstractIDSDevice-Protocol.h"
#import "BLTAbstractIDSService-Protocol.h"
#import "BLTAddBulletinBatchAssertionDelegate-Protocol.h"
#import "BLTBBObserverDelegateDelegate-Protocol.h"
#import "BLTBulletinActionResponder-Protocol.h"
#import "BLTBulletinDistributorClientProtocol-Protocol.h"
#import "BLTBulletinDistributorSubscriberDelegate-Protocol.h"
#import "BLTBulletinDistributorSubscriberDeviceDelegate-Protocol.h"
#import "BLTBulletinSendQueueDelegate-Protocol.h"
#import "BLTCompanionServer-Protocol.h"
#import "BLTGizmoClient-Protocol.h"
#import "BLTLightsAndSirensSystemStateProvider-Protocol.h"
#import "BLTPingService-Protocol.h"
#import "BLTPingSubscribing-Protocol.h"
#import "BLTPingSubscriptionInfo-Protocol.h"
#import "BLTRemoteCompanionServerClient-Protocol.h"
#import "BLTRemoteGlobalSettingsProvider-Protocol.h"
#import "BLTRemoteGlobalSettingsSyncServerLocalEndpoint-Protocol.h"
#import "BLTRemoteGlobalSettingsSyncServerRemoteEndpoint-Protocol.h"
#import "BLTSectionIdentifierMapperDelegate-Protocol.h"
#import "BLTSectionInfoObserverDelegate-Protocol.h"
#import "BLTSectionInfoStoreObserver-Protocol.h"
#import "BLTSendQueueSerializerDelegate-Protocol.h"
#import "BLTSettingSyncDelegate-Protocol.h"
#import "BLTSettingSyncing-Protocol.h"
#import "BLTSettingSyncingClient-Protocol.h"
#import "BLTSettingsAllowsNotificationsObserver-Protocol.h"
#import "BLTSettingsApplicationInfoObserver-Protocol.h"
#import "BLTSettingsMuteNotificationsObserver-Protocol.h"
#import "BLTSettingsSendSerializerDelegate-Protocol.h"
#import "BLTSettingsServiceClientExportedInterface-Protocol.h"
#import "BLTSettingsServiceServerExportedInterface-Protocol.h"
#import "BLTWatchKitAppListDelegate-Protocol.h"
#import "BLTXPCActivityProtocol-Protocol.h"
#import "BSDescriptionProviding-Protocol.h"
#import "CSLSConnectionStatusObserver-Protocol.h"
#import "CSLSUIProvider-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"
#import "LSApplicationWorkspaceObserverProtocol-Protocol.h"
#import "MCProfileConnectionObserver-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "PSYSyncClientStateObserver-Protocol.h"
#import "UNNotificationContent+BLTBackwardCompatible.h"
#import "NSArray+BLTNSNullRemoval.h"
#import "NSDictionary+BLTNSNullRemoval.h"
#import "NSObject+BLTNSNullRemoval.h"
#import "NSURL+BLTReferenceCountedFile.h"
#import "BBGlobalSettings+BLTRemoteGlobalSettingsProvider.h"
#import "BBSettingsGateway+BLTRemoteGlobalSettingsProvider.h"
#import "BBSectionInfo+BLTSettingSyncLevel.h"
#import "NSString+BLTSizeOf.h"
#import "NSData+BLTSizeOf.h"
#import "NRPairedDeviceRegistry+BoundedWait.h"
#import "IDSProtobuf+ExtendedDescription.h"
#import "NSMutableDictionary+IDSMetadataURLType.h"
#import "BBBulletin+MatchID.h"
#import "PBCodable+Redactor.h"
#import "UNNotificationAttachment+UNNotificationAttachmentBackwardCompatible.h"
#import "NRDevice+VersionFactories.h"
#import "BBBulletinRequest+protobuf.h"
#import "BBSectionIconVariant+protobuf.h"
#import "BBContact+protobuf.h"
#import "NSFileManager+protobuf.h"
#import "BBCommunicationContext+protobuf.h"
#import "BBSectionInfoSettings+protobuf.h"

#endif /* BulletinDistributorGizmo_h */
