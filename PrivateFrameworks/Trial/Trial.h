//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 396.4.0.0.0
//
#ifndef Trial_h
#define Trial_h

#import "TRIAllocationStatus.h"
#import "TRIAllocationStatusCursor.h"
#import "TRIAllocationStatusDefaultProvider.h"
#import "TRIAllocationStatusProviderGuardedData.h"
#import "TRIAppContainer.h"
#import "TRIAssetIdFactorName.h"
#import "TRIBMLTActiveEvaluationTuple.h"
#import "TRIBMLTDeployment.h"
#import "TRIBMLTFactorsState.h"
#import "TRIBackgroundMLTaskHistoryRecord.h"
#import "TRIBackgroundMLTaskIdentifiers.h"
#import "TRICKServerEnvironmentReader.h"
#import "TRICellularParameterGuardedData.h"
#import "TRICellularParameterManager.h"
#import "TRIClient.h"
#import "TRIClientFactorPackStreamingParser.h"
#import "TRIClientFactorPackStreamingWriter.h"
#import "TRIClientGuardedData.h"
#import "TRIClientNamespaceMetadata.h"
#import "TRIClientNamespaceMetadataStorage.h"
#import "TRIDefaultFactorProvider.h"
#import "TRIDefaultFactorProviderGuardedData.h"
#import "TRIDownloadNotification.h"
#import "TRIDownloadOptions.h"
#import "TRIEntitlement.h"
#import "TRIEvaluationStatus.h"
#import "TRIEvaluationStatusCursor.h"
#import "TRIEvaluationStatusDefaultProvider.h"
#import "TRIExcessiveStaleFactorsUsageTimer.h"
#import "TRIExcessiveStaleFactorsUsageTimerGuardedData.h"
#import "TRIExperimentAllocationStatus.h"
#import "TRIExperimentDeployment.h"
#import "TRIExperimentFactorsState.h"
#import "TRIExperimentHistoryRecord.h"
#import "TRIExperimentIdentifiers.h"
#import "TRIFBBoxedBool.h"
#import "TRIFBBoxedDouble.h"
#import "TRIFBBoxedInt64.h"
#import "TRIFBCloudKitAssetRecordAsset.h"
#import "TRIFBCloudKitAssetRecordAssetBuilder.h"
#import "TRIFBCloudKitAssetRecordAssetChanges.h"
#import "TRIFBCloudKitTreatmentRecordAsset.h"
#import "TRIFBCloudKitTreatmentRecordAssetBuilder.h"
#import "TRIFBCloudKitTreatmentRecordAssetChanges.h"
#import "TRIFBFactorLevel.h"
#import "TRIFBFactorLevelBuilder.h"
#import "TRIFBFactorLevelChanges.h"
#import "TRIFBFactorMetadataKeyValue.h"
#import "TRIFBFactorMetadataKeyValueBuilder.h"
#import "TRIFBFactorMetadataKeyValueChanges.h"
#import "TRIFBFastFactorLevels.h"
#import "TRIFBFastFactorLevelsBuilder.h"
#import "TRIFBFastFactorLevelsChanges.h"
#import "TRIFBImmutableBoxedBool.h"
#import "TRIFBImmutableBoxedDouble.h"
#import "TRIFBImmutableBoxedInt64.h"
#import "TRIFBMobileAssetReference.h"
#import "TRIFBMobileAssetReferenceBuilder.h"
#import "TRIFBMobileAssetReferenceChanges.h"
#import "TRIFBMutableBoxedBool.h"
#import "TRIFBMutableBoxedDouble.h"
#import "TRIFBMutableBoxedInt64.h"
#import "TRIFBTrialManagedAsset.h"
#import "TRIFBTrialManagedAssetBuilder.h"
#import "TRIFBTrialManagedAssetChanges.h"
#import "TRIFPNamespaceFactorProvider.h"
#import "TRIFactorDownloadValidator.h"
#import "TRIFactorProviderIdent.h"
#import "TRIFactorsState.h"
#import "TRIFactorsStateBMLTIdentifiers.h"
#import "TRIFactorsStateExperimentIdentifiers.h"
#import "TRIFactorsStateRolloutIdentifiers.h"
#import "TRIFileBackedMutableStringArray.h"
#import "TRIFileLock.h"
#import "TRIFlatbufferUtils.h"
#import "TRIFullMAAssetId.h"
#import "TRILevelChecked.h"
#import "TRILockedFactorPackSet.h"
#import "TRILogTreatmentReader.h"
#import "TRILogger.h"
#import "TRIMASpecVer.h"
#import "TRIMLRuntimeActiveEvaluationTuple.h"
#import "TRIMLRuntimeEvaluationHistoryRecord.h"
#import "TRIMisc.h"
#import "TRINaiveFactorLevelCache.h"
#import "TRINamespaceDescriptor.h"
#import "TRINamespaceFactorProvider.h"
#import "TRINamespaceFactorProviderChain.h"
#import "TRINamespaceLogPolicy.h"
#import "TRINamespaceOptionalParams.h"
#import "TRINamespaceRecord.h"
#import "TRINamespaceResolver.h"
#import "TRINamespaceResolverGuardedData.h"
#import "TRINamespaceStatus.h"
#import "TRINamespaceStatusProvider.h"
#import "TRINamespaceUpdateNotification.h"
#import "TRINotificationCallback.h"
#import "TRINotificationState.h"
#import "TRIPETLogHandler.h"
#import "TRIPartialBMLTRecord.h"
#import "TRIPartialExperimentRecord.h"
#import "TRIPartialRolloutRecord.h"
#import "TRIPersistedAllocationCommon.h"
#import "TRIPersistedAllocationStatusCursor.h"
#import "TRIPersistedBMLTFactorsState.h"
#import "TRIPersistedEvaluationStatus.h"
#import "TRIPersistedExperimentAllocationStatus.h"
#import "TRIPersistedExperimentAllocationStatus_VersionedNamespace.h"
#import "TRIPersistedExperimentFactorsState.h"
#import "TRIPersistedFactorsState.h"
#import "TRIPersistedNamespaceStatus.h"
#import "TRIPersistedNetworkBehavior.h"
#import "TRIPersistedRolloutAllocationStatus.h"
#import "TRIPersistedRolloutAllocationStatus_NamespaceFactorPack.h"
#import "TRIPersistedRolloutFactorsState.h"
#import "TRIProcessInfo.h"
#import "TRIPruningFactorLevelCache.h"
#import "TRIPruningFactorLevelCacheGuardedData.h"
#import "TRIPurgeabilityLevelMapper.h"
#import "TRIReferenceManagedDirReaderLock.h"
#import "TRIReferenceManagedDirReaderLockGuardedData.h"
#import "TRIRolloutAllocationStatus.h"
#import "TRIRolloutDeployment.h"
#import "TRIRolloutFactorsState.h"
#import "TRIRolloutHistoryRecord.h"
#import "TRIRolloutIdentifiers.h"
#import "TRIStandardPaths.h"
#import "TRIStopwatch.h"
#import "TRISubjectProvider.h"
#import "TRISubjectProviderGuardedData.h"
#import "TRISubjectRotationNotification.h"
#import "TRISystemConfiguration.h"
#import "TRISystemInfo.h"
#import "TRISystemInfoGuardedData.h"
#import "TRITrackingId.h"
#import "TRITreatmentInfo.h"
#import "TRITriclientNamespaceMetadataRoot.h"
#import "TRITripersistedAllocationStatusRoot.h"
#import "TRITripersistedEvaluationStatusRoot.h"
#import "TRITripersistedNamespaceStatusRoot.h"
#import "TRITripersistedNetworkBehaviorRoot.h"
#import "TRITripurgeabilityLevelRoot.h"
#import "TRITypedFactorProvider.h"
#import "TRIVersion.h"
#import "TRIVersionedNamespace.h"
#import "TRIXPCNamespaceManagementClient.h"
#import "TRIXPCUtils.h"
#import "AFBBufferReferencing-Protocol.h"
#import "CoreTelephonyClientCarrierBundleDelegate-Protocol.h"
#import "CoreTelephonyClientDataDelegate-Protocol.h"
#import "CoreTelephonyClientSubscriberDelegate-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "TRIAllocationStatusProvider-Protocol.h"
#import "TRIClientNamespaceMetadataStoring-Protocol.h"
#import "TRIDownloadNotificationProtocol-Protocol.h"
#import "TRIEvaluationStatusProvider-Protocol.h"
#import "TRIFactorLevelCaching-Protocol.h"
#import "TRIFactorProviding-Protocol.h"
#import "TRILogHandling-Protocol.h"
#import "TRINamespaceFactorProviding-Protocol.h"
#import "TRINamespaceManagementProtocol-Protocol.h"
#import "TRINamespaceResolving-Protocol.h"
#import "TRINamespaceUpdateProtocol-Protocol.h"
#import "TRINotificationToken-Protocol.h"
#import "TRIPaths-Protocol.h"
#import "TRIXPCInternalServiceProtocol-Protocol.h"
#import "TRIXPCInternalSystemServiceProtocol-Protocol.h"
#import "TRIXPCNamespaceManagementServiceProtocol-Protocol.h"
#import "TRIXPCStatusServiceProtocol-Protocol.h"
#import "TRISystemDimensions+Factory.h"
#import "TRILogEvent+Factory.h"
#import "NSData+TRI.h"
#import "NSString+TRI.h"
#import "NSURL+TRI.h"
#import "NSFileManager+TRI.h"
#import "AFBBufferBuilder+TRIFBCloudKitTreatmentRecordAsset.h"

#endif /* Trial_h */
