//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef WBSSearchParameters_h
#define WBSSearchParameters_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@interface WBSSearchParameters : NSObject<NSSecureCoding>

@property (nonatomic) BOOL isCFSearch;
@property (nonatomic) double CFSearchTimeout;
@property (nonatomic) BOOL isForVoiceSearch;
@property (nonatomic) BOOL isResultFilteringDisabled;
@property (nonatomic) BOOL isDedupeThroughAlternativeURLsEnabled;
@property (nonatomic) BOOL isLocalPhantomTophitDisabled;
@property (nonatomic) BOOL strengthenAutocompleteTriggerExtensionMatching;
@property (nonatomic) BOOL enableCompletionListHistoryDeduplicationValue;
@property (nonatomic) BOOL enableCompletionListHistoryDeduplicationSwitchToTabValue;
@property (nonatomic) long long characterThresholdForAnywhereInTitleOrURL;
@property (nonatomic) double percentageThresholdForAnywhereInTitle;
@property (nonatomic) double percentageThresholdForAnywhereInURL;
@property (nonatomic) long long characterThresholdForStartOfURLPathComponent;
@property (nonatomic) long long matchingWordsInTitleThreshold;
@property (nonatomic) long long characterThresholdForStartOfTitle;
@property (nonatomic) long long characterThresholdForStartOfTitleWord;
@property (nonatomic) long long characterThresholdForStartOfTitleWordMatchLongEnoughForTopHit;
@property (nonatomic) long long characterThresholdForStartOfURL;
@property (nonatomic) double normalizedTopSitesScoreAndVisitCountMultiplier;
@property (nonatomic) long long maxBookmarksAndHistoryItems;
@property (nonatomic) BOOL isResponsiveCompletionListEnabled;
@property (nonatomic) BOOL isMoreSearchProviderSuggestionsEnabled;
@property (nonatomic) BOOL isStreamlinedCompletionListEnabled;
@property (nonatomic) BOOL isReflectUserIntentInSearchEnabled;

/* class methods */
+ (id)searchParameters;
+ (id)getSearchParametersHelper:(id)helper withCache:(BOOL)cache;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithPreferences:(id)preferences;
- (void)updateWithDefaults;
- (void)updateUsingPreferenceKeys:(id)keys;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WBSSearchParameters_h */
