//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef CSSearchQueryContext_h
#define CSSearchQueryContext_h
@import Foundation;

#include "CSSuggestion.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSAttributedString, NSDate, NSDictionary, NSString, _MDQueryRewriteContext;

@interface CSSearchQueryContext : NSObject<NSSecureCoding, NSCopying> {
  /* instance variables */
  BOOL _enableSuggestionTokens;
  BOOL _enableRecentSuggestions;
  BOOL _enableResultCountsPerSuggestion;
  NSString *_normalizedSearchQuery;
  NSArray *_customFieldSpecifications;
  NSDate *_instantAnswersOverrideDate;
  NSString *_customResourceDirectory;
}

@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) NSArray *protectionClasses;
@property (nonatomic) int entitledAttributes;
@property BOOL disableResultStreaming;
@property (retain, nonatomic) NSString *clientBundleID;
@property (retain, nonatomic) NSArray *bundleIDs;
@property (retain, nonatomic) NSArray *additionalBundleIDs;
@property (retain, nonatomic) NSArray *instantAnswersBundleIDs;
@property (retain, nonatomic) NSArray *rankingQueries;
@property (retain, nonatomic) NSArray *additionalQueries;
@property (retain, nonatomic) NSArray *instantAnswersQueries;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain, nonatomic) NSArray *markedTextArray;
@property (retain, nonatomic) NSArray *disableBundles;
@property (retain, nonatomic) NSString *userQuery;
@property (copy, nonatomic) CSSuggestion *suggestion;
@property (copy, nonatomic) NSArray *groupingRules;
@property (retain, nonatomic) NSArray *resultMatchingAttributes;
@property (retain, nonatomic) NSArray *resultMatchingSceneIdentifiers;
@property (nonatomic) int rankingType;
@property (retain, nonatomic) NSString *filterQuery;
@property (nonatomic) long long strongRankingQueryCount;
@property (nonatomic) long long currentTokenScope;
@property (nonatomic) long long dominantRankingQueryCount;
@property (nonatomic) long long dominatedRankingQueryCount;
@property (nonatomic) long long shortcutBit;
@property (nonatomic) long long highMatchBit;
@property (nonatomic) long long lowMatchBit;
@property (nonatomic) long long highRecencyBit;
@property (nonatomic) long long lowRecencyBit;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long minCount;
@property (nonatomic) long long maxSuggestionCount;
@property (nonatomic) long long completionResultCount;
@property (nonatomic) long long queryID;
@property (nonatomic) double minL2Score;
@property (nonatomic) double maxAge;
@property (nonatomic) BOOL internal;
@property (nonatomic) BOOL grouped;
@property (nonatomic) BOOL live;
@property (nonatomic) BOOL counting;
@property (nonatomic) BOOL attribute;
@property (nonatomic) BOOL sodium;
@property (nonatomic) BOOL pommesSuggestions;
@property (nonatomic) BOOL pommesZKW;
@property (nonatomic) BOOL lowPriority;
@property (nonatomic) BOOL parseUserQuery;
@property (nonatomic) BOOL disableNLP;
@property (nonatomic) BOOL generateSuggestions;
@property (nonatomic) BOOL enableInstantAnswers;
@property (nonatomic) BOOL fsOnly;
@property (nonatomic) BOOL playback;
@property (nonatomic) BOOL includeUserActivities;
@property (nonatomic) BOOL disableBlockingOnIndex;
@property (nonatomic) BOOL fetchl2Signals;
@property (nonatomic) BOOL priorityIndexQuery;
@property (nonatomic) BOOL advancedQuery;
@property (nonatomic) BOOL hasFreeTextQuery;
@property (nonatomic) long long feedbackQueryID;
@property (nonatomic) unsigned int128 fuzzyMask;
@property (nonatomic) unsigned int128 fuzzyMatch;
@property (retain, nonatomic) NSString *completionString;
@property (retain, nonatomic) NSArray *completionAttributes;
@property (retain, nonatomic) NSArray *completionWeights;
@property (nonatomic) unsigned int completionOptions;
@property (readonly) unsigned int qos;
@property (nonatomic) unsigned int userQueryOptions;
@property (nonatomic) double currentTime;
@property (nonatomic) unsigned long long maximumBatchSize;
@property (copy, nonatomic) NSDictionary *options;
@property (retain, nonatomic) NSArray *mountPoints;
@property (retain, nonatomic) NSArray *scopes;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) _MDQueryRewriteContext *rewriteContext;
@property (copy, nonatomic) NSDictionary *queryUnderstandingOutput;
@property (copy, nonatomic) NSAttributedString *photosEntitySearchParse;
@property (retain, nonatomic) NSArray *fetchAttributes;
@property (copy, nonatomic) NSArray *filterQueries;
@property (retain, nonatomic) NSString *keyboardLanguage;
@property (nonatomic) unsigned long long sourceOptions;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)sodiumSupportedBundleIDs;

/* instance methods */
- (id)init;
- (id)initWithQoS:(unsigned int)s;
- (void)setMaxItemCount:(long long)count;
- (long long)maxItemCount;
- (BOOL)enableSuggestionTokens;
- (void)setEnableSuggestionTokens:(BOOL)tokens;
- (BOOL)enableRecentSuggestions;
- (void)setEnableRecentSuggestions:(BOOL)suggestions;
- (BOOL)enableResultCountsPerSuggestion;
- (void)setEnableResultCountsPerSuggestion:(BOOL)suggestion;
- (BOOL)enablePhotosEntitySearch;
- (BOOL)isDateQueryContext;
- (void)setEnablePhotosEntitySearch:(BOOL)search;
- (void)setIsDateQueryContext:(BOOL)context;
- (BOOL)isMail;
- (BOOL)isPhotos;
- (BOOL)isNotes;
- (BOOL)isMessages;
- (BOOL)isSafari;
- (BOOL)isPommesCtl;
- (id)sodiumEnabledBundleID;
- (void)setNormalizedSearchQuery:(id)query;
- (id)normalizedSearchQuery;
- (void)setCustomResourceDirectory:(id)directory;
- (id)customResourceDirectory;
- (void)setInstantAnswersOverrideDate:(id)date;
- (id)instantAnswersOverrideDate;
- (id)customFieldSpecifications;
- (void)setCustomFieldSpecifications:(id)specifications;
- (id)xpc_dictionary;
- (id)initWithXPCDictionary:(id)xpcdictionary;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)debugDescription;
@end

#endif /* CSSearchQueryContext_h */
