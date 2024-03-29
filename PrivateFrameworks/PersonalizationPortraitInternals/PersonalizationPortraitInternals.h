//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef PersonalizationPortraitInternals_h
#define PersonalizationPortraitInternals_h

#import "PPAllowancePolicyGuardedData.h"
#import "PPAppLaunchMonitor.h"
#import "PPAppLaunchMonitorGuardedData.h"
#import "PPAppLaunchMonitorRegistrationContext.h"
#import "PPAppLinkCacheGuardedData.h"
#import "PPBaseScoreInputSet.h"
#import "PPBoatEventsAggregator.h"
#import "PPBundleAlgorithmCount.h"
#import "PPBundleIdAllowancePolicy.h"
#import "PPBusEventsAggregator.h"
#import "PPCarRentalDropoffEventsAggregator.h"
#import "PPCarRentalPickupEventsAggregator.h"
#import "PPCoalescedScoredNamedEntity.h"
#import "PPCoalescedScoredTopic.h"
#import "PPCollaborativeFilteringSampler.h"
#import "PPCombinedScoreInputSet.h"
#import "PPConfigServerDelegate.h"
#import "PPConfigServerHandler.h"
#import "PPConfiguration.h"
#import "PPConfigurationGuardedData.h"
#import "PPConnectionsAddressFormatter.h"
#import "PPConnectionsCalendarSource.h"
#import "PPConnectionsDataDetectors.h"
#import "PPConnectionsDonationStore.h"
#import "PPConnectionsDuetSource.h"
#import "PPConnectionsFoundInAppsSource.h"
#import "PPConnectionsMetricsTracker.h"
#import "PPConnectionsNamedEntitySource.h"
#import "PPConnectionsParameters.h"
#import "PPConnectionsPasteboardSource.h"
#import "PPConnectionsPasteboardSourceGuardedData.h"
#import "PPConnectionsPredictionStore.h"
#import "PPConnectionsScoredLocationGuardedData.h"
#import "PPConnectionsServerDelegate.h"
#import "PPConnectionsServerRequestHandler.h"
#import "PPConnectionsSource.h"
#import "PPConnectionsUtils.h"
#import "PPContactDiskCache.h"
#import "PPContactDiskCacheHistoryRecordSet.h"
#import "PPContactDiskCacheManager.h"
#import "PPContactNameRecordChangeHistoryAccumulator.h"
#import "PPContactQueryResultGuardedData.h"
#import "PPContactRecordResultBuffer.h"
#import "PPContactScorer.h"
#import "PPContactServerDelegate.h"
#import "PPContactServerRequestHandler.h"
#import "PPContactStorage.h"
#import "PPContactsImporter.h"
#import "PPCoreMLUtils.h"
#import "PPCountVectorizer.h"
#import "PPDKStorage.h"
#import "PPDKStorageGuardedData.h"
#import "PPDataDetectors.h"
#import "PPDecayedFeedbackCounts.h"
#import "PPDocumentTopicInfo.h"
#import "PPEventCache.h"
#import "PPEventCacheGuardedData.h"
#import "PPEventFeatureScore.h"
#import "PPEventMetadata.h"
#import "PPEventMetadataCacheEntry.h"
#import "PPEventMetricsLogger.h"
#import "PPEventRankerDateUtils.h"
#import "PPEventRankerFeaturizer.h"
#import "PPEventScorer.h"
#import "PPEventServerDelegate.h"
#import "PPEventServerRequestHandler.h"
#import "PPEventStorage.h"
#import "PPEventStorageGuardedData.h"
#import "PPEventStreamHandler.h"
#import "PPEventsAggregator.h"
#import "PPEvictingMaxTokenCountPriorityQueue.h"
#import "PPEvictingMinPriorityQueue.h"
#import "PPFeatureRedactor.h"
#import "PPFeatureRedactorGuardedData.h"
#import "PPFeaturizerModel.h"
#import "PPFeedbackExclusionProvider.h"
#import "PPFeedbackStorage.h"
#import "PPFeedbackUtils.h"
#import "PPFileErrorCode.h"
#import "PPFixup49995922Tuple.h"
#import "PPFlightAirport.h"
#import "PPFlightEventsAggregator.h"
#import "PPFoodEventsAggregator.h"
#import "PPHealthKitImporter.h"
#import "PPITunesStoreURLOverrideChecker.h"
#import "PPInternalContactNameRecord.h"
#import "PPInternalFeedback.h"
#import "PPInternalRequestHandler.h"
#import "PPInternalServerDelegate.h"
#import "PPKVOObserver.h"
#import "PPLabelMatcher.h"
#import "PPLabelStrengthSets.h"
#import "PPLocalConnectionsStore.h"
#import "PPLocalContactStore.h"
#import "PPLocalEventStore.h"
#import "PPLocalEventStoreGuardedData.h"
#import "PPLocalLocationStore.h"
#import "PPLocalNamedEntityStore.h"
#import "PPLocalNamedEntityStoreGuardedData.h"
#import "PPLocalQuickTypeBroker.h"
#import "PPLocalSocialHighlightStore.h"
#import "PPLocalTemporalClusterStore.h"
#import "PPLocalTopicStore.h"
#import "PPLocalTopicStoreGuardedData.h"
#import "PPLocationAggScoreInputSet.h"
#import "PPLocationCache.h"
#import "PPLocationClusterID.h"
#import "PPLocationFinalScoreInputSet.h"
#import "PPLocationReadOnlyServerDelegate.h"
#import "PPLocationReadOnlyServerRequestHandler.h"
#import "PPLocationReadWriteServerDelegate.h"
#import "PPLocationReadWriteServerRequestHandler.h"
#import "PPLocationStorage.h"
#import "PPLocationSupport.h"
#import "PPLodgingEventsAggregator.h"
#import "PPM2AttributedFeedback.h"
#import "PPM2DatabaseCheckViolationCount.h"
#import "PPM2DatabaseRecordCount.h"
#import "PPM2DatabaseRemoteRecordCount.h"
#import "PPM2DeviceStats.h"
#import "PPM2DonationInterval.h"
#import "PPM2EngagementRatio.h"
#import "PPM2ExperimentDeployed.h"
#import "PPM2FeedbackAtK.h"
#import "PPM2FeedbackPortraitRegistered.h"
#import "PPM2FrustrationEvent.h"
#import "PPM2LocationDonation.h"
#import "PPM2LocationDonationError.h"
#import "PPM2LocationItemDonation.h"
#import "PPM2LocationsScored.h"
#import "PPM2LogEventOccurred.h"
#import "PPM2NamedEntitiesFiltered.h"
#import "PPM2NamedEntitiesPerDonation.h"
#import "PPM2NamedEntitiesScored.h"
#import "PPM2NamedEntityDonationError.h"
#import "PPM2NamedEntityInitialDonation.h"
#import "PPM2NamedEntityNewItemDonation.h"
#import "PPM2NamedEntitySourceLanguage.h"
#import "PPM2ObjectsDeleted.h"
#import "PPM2PositivePersonalizationEvent.h"
#import "PPM2SourceAlgPair.h"
#import "PPM2TopicDonation.h"
#import "PPM2TopicDonationError.h"
#import "PPM2TopicInitialDonation.h"
#import "PPM2TopicItemDonation.h"
#import "PPM2TopicUniqueItems.h"
#import "PPM2TopicsPerDonation.h"
#import "PPM2TopicsScored.h"
#import "PPM2TopicsScoredForMapping.h"
#import "PPM2UniqueLocationsFound.h"
#import "PPM2UniqueNamedEntitiesFound.h"
#import "PPM2UnmappedMatchedFeedback.h"
#import "PPM2UserCreatedMetadata.h"
#import "PPMailMetadataHelper.h"
#import "PPMaintenance.h"
#import "PPMapsSupport.h"
#import "PPMeCardCache.h"
#import "PPMeCardCacheManager.h"
#import "PPMetricsDispatcher.h"
#import "PPMetricsUtils.h"
#import "PPMockLocationGuardedData.h"
#import "PPMockRTAddress.h"
#import "PPMockRTLocation.h"
#import "PPMockRTLocationOfInterest.h"
#import "PPMockRTLocationOfInterestVisit.h"
#import "PPMockRTMapItem.h"
#import "PPMockRTRoutineManager.h"
#import "PPMostCommonFeatureValue.h"
#import "PPMutableContactDiskCache.h"
#import "PPNamedEntityAggScoreInputSet.h"
#import "PPNamedEntityFilter.h"
#import "PPNamedEntityFinalScoreInputSet.h"
#import "PPNamedEntityReadOnlyServerDelegate.h"
#import "PPNamedEntityReadOnlyServerRequestHandler.h"
#import "PPNamedEntityReadWriteServerDelegate.h"
#import "PPNamedEntityReadWriteServerRequestHandler.h"
#import "PPNamedEntityStorage.h"
#import "PPNamedEntitySupport.h"
#import "PPNeuralNetwork.h"
#import "PPNeuralNetworkBuilder.h"
#import "PPPBContact.h"
#import "PPPBContactNameRecord.h"
#import "PPPBContactNameRecordCache.h"
#import "PPPBContactRelatedName.h"
#import "PPPBDateComponents.h"
#import "PPPBEvaluationRecord.h"
#import "PPPBExperimentalGroup.h"
#import "PPPBExtractedDonationRecord.h"
#import "PPPBFeatureIdFeatureValuePair.h"
#import "PPPBFeedbackItem.h"
#import "PPPBFeedbackLog.h"
#import "PPPBFeedbackMetadata.h"
#import "PPPBLabeledPostalAddress.h"
#import "PPPBLabeledSocialProfile.h"
#import "PPPBLabeledString.h"
#import "PPPBMusicDataCollectionArray.h"
#import "PPPBMusicDataCollectionRecord.h"
#import "PPPBScoredItemWithFeatures.h"
#import "PPPasteboardLocationItem.h"
#import "PPPaths.h"
#import "PPPeopleSuggester.h"
#import "PPPeopleSuggesterCacheEntry.h"
#import "PPPeopleSuggesterGuardedData.h"
#import "PPPortraitSystem.h"
#import "PPQuickTypeCachedNameLookup.h"
#import "PPQuickTypeConnectionsServant.h"
#import "PPQuickTypeContactsServant.h"
#import "PPQuickTypeEventsServant.h"
#import "PPQuickTypeFormatter.h"
#import "PPQuickTypeItemCache.h"
#import "PPQuickTypeItemCacheEntry.h"
#import "PPQuickTypeLabeledValue.h"
#import "PPQuickTypeMetrics.h"
#import "PPQuickTypeNavigationServant.h"
#import "PPQuickTypeServerDelegate.h"
#import "PPQuickTypeServerHandler.h"
#import "PPQuickTypeSettings.h"
#import "PPQuickTypeURLServant.h"
#import "PPQuickTypeURLServantGuardedData.h"
#import "PPRankableSocialHighlight.h"
#import "PPRankableSocialHighlightUtils.h"
#import "PPReadTransaction.h"
#import "PPRecordStorageHelper.h"
#import "PPRegexModel.h"
#import "PPReusableContextWrapper.h"
#import "PPRoutineSupport.h"
#import "PPSQLDatabase.h"
#import "PPSQLDatabaseHandlePool.h"
#import "PPSQLKVStore.h"
#import "PPSanitizedStringFilter.h"
#import "PPScoreDict.h"
#import "PPScoreInterpreter.h"
#import "PPScoreInterpreterBytecode.h"
#import "PPScoreInterpreterCoreMLModel.h"
#import "PPScoreInterpreterCoreMLModelFeature.h"
#import "PPScoreInterpreterCtx.h"
#import "PPSettings.h"
#import "PPSettingsGuardedData.h"
#import "PPSmallBloomFilter.h"
#import "PPSocialHighlightCache.h"
#import "PPSocialHighlightContact.h"
#import "PPSocialHighlightEngagementProvider.h"
#import "PPSocialHighlightFeature.h"
#import "PPSocialHighlightFeaturizer.h"
#import "PPSocialHighlightFeedback.h"
#import "PPSocialHighlightFeedbackUtils.h"
#import "PPSocialHighlightFractionalEngagementProvider.h"
#import "PPSocialHighlightMLScorer.h"
#import "PPSocialHighlightMetrics.h"
#import "PPSocialHighlightPropertyValueProvider.h"
#import "PPSocialHighlightRanker.h"
#import "PPSocialHighlightServerDelegate.h"
#import "PPSocialHighlightServerRequestHandler.h"
#import "PPSocialHighlightStaticFeatureProvider.h"
#import "PPSocialHighlightStorage.h"
#import "PPSocialHighlightStorageGuardedData.h"
#import "PPSocialHighlightStorageUtilities.h"
#import "PPSocialHighlightTimeSinceEngagementProvider.h"
#import "PPSourceQuery.h"
#import "PPSourceStats.h"
#import "PPSourceStorage.h"
#import "PPStorableFeedback.h"
#import "PPStorableFeedbackItem.h"
#import "PPStreamingLocationScorer.h"
#import "PPStreamingNamedEntityScorer.h"
#import "PPStreamingTopicScorer.h"
#import "PPTTLDeletionPolicy.h"
#import "PPTTLDeletionPolicyRule.h"
#import "PPTemporalClusterServerDelegate.h"
#import "PPTemporalClusterServerRequestHandler.h"
#import "PPTemporalClusterStorage.h"
#import "PPTextToTopicTransform.h"
#import "PPTextToTopicTransformGuardedData.h"
#import "PPTokenCount.h"
#import "PPTopicAggScoreInputSet.h"
#import "PPTopicAllowlist.h"
#import "PPTopicBlocklist.h"
#import "PPTopicFinalScoreInputSet.h"
#import "PPTopicReadOnlyServerDelegate.h"
#import "PPTopicReadOnlyServerRequestHandler.h"
#import "PPTopicReadWriteServerDelegate.h"
#import "PPTopicReadWriteServerRequestHandler.h"
#import "PPTopicStorage.h"
#import "PPTopicTransform.h"
#import "PPTrainEventsAggregator.h"
#import "PPTransaction.h"
#import "PPTrialWrapper.h"
#import "PPTrialWrapperGuardedData.h"
#import "PPTripAggregator.h"
#import "PPTripCandidate.h"
#import "PPU16CountedSet.h"
#import "PPUniversalSearchSpotlightIndexScorer.h"
#import "PPWriteTransaction.h"
#import "PPXPCServer.h"
#import "PPXPCServerHelper.h"
#import "PPXPCServerPipelinedBatchQueryManager.h"
#import "BMStoreData-Protocol.h"
#import "CNChangeHistoryEventVisitor-Protocol.h"
#import "GEONavigationListenerDelegate-Protocol.h"
#import "HVConsumer-Protocol.h"
#import "HVMessagesConsumer-Protocol.h"
#import "HVSafariConsumer-Protocol.h"
#import "MLCustomModel-Protocol.h"
#import "MLFeatureProvider-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"
#import "PPConfigServerProtocol-Protocol.h"
#import "PPConnectionsClientProtocol-Protocol.h"
#import "PPConnectionsLocationSource-Protocol.h"
#import "PPConnectionsServerProtocol-Protocol.h"
#import "PPContactClientProtocol-Protocol.h"
#import "PPContactServerProtocol-Protocol.h"
#import "PPEventClientProtocol-Protocol.h"
#import "PPEventServerProtocol-Protocol.h"
#import "PPFeedbackAccepting-Protocol.h"
#import "PPFeedbackProcessing-Protocol.h"
#import "PPInternalServerProtocol-Protocol.h"
#import "PPLocationClientProtocol-Protocol.h"
#import "PPLocationReadOnlyServerProtocol-Protocol.h"
#import "PPLocationReadWriteServerProtocol-Protocol.h"
#import "PPNamedEntityClientProtocol-Protocol.h"
#import "PPNamedEntityReadOnlyServerProtocol-Protocol.h"
#import "PPNamedEntityReadWriteServerProtocol-Protocol.h"
#import "PPQuickTypeServantProtocol-Protocol.h"
#import "PPQuickTypeServerProtocol-Protocol.h"
#import "PPSocialHighlightClientProtocol-Protocol.h"
#import "PPSocialHighlightFeatureProvider-Protocol.h"
#import "PPSocialHighlightInternalServerProtocol-Protocol.h"
#import "PPSocialHighlightScorer-Protocol.h"
#import "PPSocialHighlightServerProtocol-Protocol.h"
#import "PPTemporalClusterClientProtocol-Protocol.h"
#import "PPTemporalClusterServerProtocol-Protocol.h"
#import "PPTopicClientProtocol-Protocol.h"
#import "PPTopicReadOnlyServerProtocol-Protocol.h"
#import "PPTopicReadWriteServerProtocol-Protocol.h"
#import "PPUniversalSearchSpotlightFeedbackAccepting-Protocol.h"
#import "_PASDatabaseMigrationProtocol-Protocol.h"
#import "EKEvent+Aggregation.h"
#import "CLPlacemark+PPSpecificityComparison.h"

#endif /* PersonalizationPortraitInternals_h */
