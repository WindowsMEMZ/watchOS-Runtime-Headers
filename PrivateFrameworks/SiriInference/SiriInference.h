//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.20.1.0.0
//
#ifndef SiriInference_h
#define SiriInference_h

#import "_$s13SiriInference0B5ErrorCN.h"
#import "_$s13SiriInference0aB25SuggestionsBridgeProviderCN.h"
#import "_$s13SiriInference10AppMatchesCN.h"
#import "_$s13SiriInference12Always1pRuleCN.h"
#import "_$s13SiriInference15BackgroundQueueCN.h"
#import "_$s13SiriInference15ContactResolverC14RequestContextCN.h"
#import "_$s13SiriInference15ContactResolverC4SpecCN.h"
#import "_$s13SiriInference15ContactResolverCN.h"
#import "_$s13SiriInference15SaveInteractionCN.h"
#import "_$s13SiriInference15ScrubOldRecordsCN.h"
#import "_$s13SiriInference16AppUsageProviderCN.h"
#import "_$s13SiriInference16HolidaysDatabaseCN.h"
#import "_$s13SiriInference16SeasAppUsageRuleCN.h"
#import "_$s13SiriInference17FetchInteractionsCN.h"
#import "_$s13SiriInference17HolidaysDBUpdaterCN.h"
#import "_$s13SiriInference17ScrubDodMLRecordsCN.h"
#import "_$s13SiriInference18SeasAppMatcherRuleCN.h"
#import "_$s13SiriInference20SearchTermAppsRankerCN.h"
#import "_$s13SiriInference20XPCActivityOperationCN.h"
#import "_$s13SiriInference21NoopSuggestionsBridgeCN.h"
#import "_$s13SiriInference22MegadomeEntityFeaturesCN.h"
#import "_$s13SiriInference23BiomeInteractionFetcherCN.h"
#import "_$s13SiriInference23ScrubRuntimeDataRecordsCN.h"
#import "_$s13SiriInference24ProcessUnstitchedIntentsCN.h"
#import "_$s13SiriInference25BiomeInteractionProcessorCN.h"
#import "_$s13SiriInference25DateTimeResolutionContextCN.h"
#import "_$s13SiriInference25RestartableBlockOperationCN.h"
#import "_$s13SiriInference25RolloutsAnalyticsActivityCN.h"
#import "_$s13SiriInference26HolidaysDBPollingOperationCN.h"
#import "_$s13SiriInference26HolidaysDBUpdaterOperationCN.h"
#import "_$s13SiriInference26SeasContactInSingleAppRuleCN.h"
#import "_$s13SiriInference27PhoneAppSelectionModelCacheCN.h"
#import "_$s13SiriInference28SignalProcessingPluginRunnerCN.h"
#import "_$s13SiriInference30DisambiguationEntityResolutionCN.h"
#import "_$s13SiriInference8DateTimeC0C0C7HolidayCN.h"
#import "_$s13SiriInference8DateTimeC0C0CN.h"
#import "_$s13SiriInference8DateTimeC0D0CN.h"
#import "_$s13SiriInference8DateTimeC0cD5RangeCN.h"
#import "_$s13SiriInference8DateTimeC17RecurrencePatternCN.h"
#import "_$s13SiriInference8DateTimeC8IntervalCN.h"
#import "_$s13SiriInference8DateTimeCN.h"
#import "_TtC13SiriInference10Connection.h"
#import "_TtC13SiriInference11FirstAdvent.h"
#import "_TtC13SiriInference12TrialManager.h"
#import "_TtC13SiriInference13ContactRanker.h"
#import "_TtC13SiriInference15OngoingLearning.h"
#import "_TtC13SiriInference17PhoneAppPredictor.h"
#import "_TtC13SiriInference18ContactRankerInput.h"
#import "_TtC13SiriInference18DateTimeConstraint.h"
#import "_TtC13SiriInference18LoggingDataEmitter.h"
#import "_TtC13SiriInference18ModelBasedLearning.h"
#import "_TtC13SiriInference19ContactRankerOutput.h"
#import "_TtC13SiriInference19JulianEasterHoliday.h"
#import "_TtC13SiriInference19SortingResolverRule.h"
#import "_TtC13SiriInference21HolidaysDBMobileAsset.h"
#import "_TtC13SiriInference21PickFirstResolverRule.h"
#import "_TtC13SiriInference21RecurringDateInterval.h"
#import "_TtC13SiriInference21RelationshipLocalizer.h"
#import "_TtC13SiriInference22GregorianEasterHoliday.h"
#import "_TtC13SiriInference22PhoneAppPredictorInput.h"
#import "_TtC13SiriInference23PhoneAppPredictorOutput.h"
#import "_TtC13SiriInference23UnifiedContactGenerator.h"
#import "_TtC13SiriInference24DateTimeConstraintSolver.h"
#import "_TtC13SiriInference24SeASModelAppResolverRule.h"
#import "_TtC13SiriInference25HolidaysDBHolidayResolver.h"
#import "_TtC13SiriInference25ModelBasedAppResolverRule.h"
#import "_TtC13SiriInference25PervasiveEntityResolution.h"
#import "_TtC13SiriInference26AppResolutionRulesProvider.h"
#import "_TtC13SiriInference26DateTimeSuggestionResolver.h"
#import "_TtC13SiriInference26SystemUserDefaultsProvider.h"
#import "_TtC13SiriInference27DateTimeConstraintGenerator.h"
#import "_TtC13SiriInference28CandidateContactDeduplicator.h"
#import "_TtC13SiriInference28ExperimentationTriggerLogger.h"
#import "_TtC13SiriInference29PhoneAppSelectionModelManager.h"
#import "_TtC13SiriInference30PervasiveEntityResolutionInput.h"
#import "_TtC13SiriInference30PhoneAppPredictorPeopleCentric.h"
#import "_TtC13SiriInference31ConvergenceStrategyResolverRule.h"
#import "_TtC13SiriInference31PervasiveEntityResolutionOutput.h"
#import "_TtC13SiriInference32ContactRanker_watchos_ios_baxter.h"
#import "_TtC13SiriInference32PegasusKitLocationSearchProvider.h"
#import "_TtC13SiriInference35AppResolverTrialConfigProviderPhone.h"
#import "_TtC13SiriInference35PhoneAppPredictorPeopleCentricInput.h"
#import "_TtC13SiriInference36PhoneAppPredictorPeopleCentricOutput.h"
#import "_TtC13SiriInference37ContactRanker_watchos_ios_baxterInput.h"
#import "_TtC13SiriInference37OperatingHoursConvergenceResolverRule.h"
#import "_TtC13SiriInference38ContactRanker_watchos_ios_baxterOutput.h"
#import "_TtC13SiriInference6Intent.h"
#import "_TtC13SiriInference9Statement.h"
#import "_TtC13SiriInferenceP33_9854C37A3888B3F417D68D80285BB4C228ContactSearchResultCollector.h"
#import "BMBookmark-Protocol.h"
#import "BMStoreData-Protocol.h"
#import "CKVocabularyItem-Protocol.h"
#import "CNKeyDescriptor-Protocol.h"
#import "LNSystemProtocolMetadata-Protocol.h"
#import "MLFeatureProvider-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"
#import "OS_os_transaction-Protocol.h"
#import "OS_xpc_object-Protocol.h"
#import "TRINotificationToken-Protocol.h"
#import "_TtP13SiriInference25SiriInferenceXPCInterface_-Protocol.h"
#import "CNLabeledValue+SiriInference.h"
#import "_$s20SiriInferenceIntents20GetSuggestionsIntentCN+SiriInference.h"
#import "_$s20SiriInferenceIntents28GetSuggestionsIntentResponseCN+SiriInference.h"
#import "_$s20SiriInferenceIntents21SearchForSportsIntentCN+SiriInference.h"

#endif /* SiriInference_h */
