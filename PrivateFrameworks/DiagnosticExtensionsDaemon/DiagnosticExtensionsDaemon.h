//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 170.2.3.0.0
//
#ifndef DiagnosticExtensionsDaemon_h
#define DiagnosticExtensionsDaemon_h

#import "AWDDEDBugSessionCreated.h"
#import "AWDDEDBugSessionEnded.h"
#import "AWDDEDDaemonStarted.h"
#import "AWDDEDDeferredCheckIn.h"
#import "AWDDEDExtensionCompleted.h"
#import "AWDDEDExtensionScheduled.h"
#import "AWDDEDExtensionStarted.h"
#import "AWDDEDFinisherEnded.h"
#import "AWDDEDFinisherStarted.h"
#import "DEDAEAEncryptor.h"
#import "DEDActivity.h"
#import "DEDAnalytics.h"
#import "DEDAttachmentGroup.h"
#import "DEDAttachmentHandler.h"
#import "DEDAttachmentItem.h"
#import "DEDBugSession.h"
#import "DEDBugSessionConfiguration.h"
#import "DEDBugSessionOperation.h"
#import "DEDCapability.h"
#import "DEDClientConnection.h"
#import "DEDCloudKitAttachmentGroupModel.h"
#import "DEDCloudKitAttachmentGroupStatusModel.h"
#import "DEDCloudKitAttachmentModel.h"
#import "DEDCloudKitBaseModel.h"
#import "DEDCloudKitClient.h"
#import "DEDCloudKitExtensionsUtil.h"
#import "DEDCloudKitFinisher.h"
#import "DEDCollectionNotification.h"
#import "DEDCompressionDebouncer.h"
#import "DEDConfiguration.h"
#import "DEDConstants.h"
#import "DEDController.h"
#import "DEDDaemon.h"
#import "DEDDataTask.h"
#import "DEDDeferredExtensionInfo.h"
#import "DEDDevice.h"
#import "DEDDiagnosticCollector.h"
#import "DEDDirectoriesCleanup.h"
#import "DEDEncryptorFactory.h"
#import "DEDExtension.h"
#import "DEDExtensionIdentifier.h"
#import "DEDExtensionIdentifierManager.h"
#import "DEDFBKFeedbackUpload.h"
#import "DEDFeedbackAnalytics.h"
#import "DEDFollowUpNotifier.h"
#import "DEDHealthLogsEncryptor.h"
#import "DEDHomeKitManager.h"
#import "DEDIDSConnection.h"
#import "DEDIDSInbound.h"
#import "DEDIDSOutbound.h"
#import "DEDImageResourceManager.h"
#import "DEDLocalTransport.h"
#import "DEDManager.h"
#import "DEDNotifierConfiguration.h"
#import "DEDPersistence.h"
#import "DEDRadarAttachment.h"
#import "DEDRadarFinisher.h"
#import "DEDRadarUploadItem.h"
#import "DEDRapportManager.h"
#import "DEDRequestAdvertiser.h"
#import "DEDRequestRecord.h"
#import "DEDSeedingClient.h"
#import "DEDSeedingFilerToken.h"
#import "DEDSeedingFinisher.h"
#import "DEDSeedingUploadItem.h"
#import "DEDSharingConnection.h"
#import "DEDSharingInbound.h"
#import "DEDSharingOutbound.h"
#import "DEDTestingFinisher.h"
#import "DEDUserNotificationNotifier.h"
#import "DEDUtils.h"
#import "DEDXPCConnector.h"
#import "DEDXPCInbound.h"
#import "DEDXPCOutbound.h"
#import "ResourceLoader.h"
#import "DEDClientProtocol-Protocol.h"
#import "DEDCloudKitModel-Protocol.h"
#import "DEDDeviceUISupport-Protocol.h"
#import "DEDEncryptor-Protocol.h"
#import "DEDFinisher-Protocol.h"
#import "DEDFinisherState-Protocol.h"
#import "DEDIDSInboundDelegate-Protocol.h"
#import "DEDNotificationDelivering-Protocol.h"
#import "DEDNotifier-Protocol.h"
#import "DEDSecureArchiving-Protocol.h"
#import "DEDSeedingClientDelegate-Protocol.h"
#import "DEDSharingInboundDelegate-Protocol.h"
#import "DEDWorkerProtocol-Protocol.h"
#import "DEDXPCConnectorDelegate-Protocol.h"
#import "DEDXPCInboundDelegate-Protocol.h"
#import "DEDXPCProtocol-Protocol.h"
#import "IDSServiceDelegate-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "NSURLSessionConfiguration+DEDDataUsage.h"
#import "NSSet+DEDEnumerable.h"
#import "NSArray+DEDEnumerable.h"
#import "SFDevice+DEDSupport.h"
#import "DEAttachmentGroup+GroupHandling.h"
#import "DEAttachmentItem+GroupHandling.h"
#import "NSDate+Serialization.h"

#endif /* DiagnosticExtensionsDaemon_h */
