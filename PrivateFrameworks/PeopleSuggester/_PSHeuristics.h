//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1852.4.7.0.3
//
#ifndef _PSHeuristics_h
#define _PSHeuristics_h
@import Foundation;

#include "_PSContactResolver.h"

@class NSDictionary, _CDInteractionCache, _CDInteractionStore;
@protocol _DKKnowledgeQuerying;

@interface _PSHeuristics : NSObject

@property (retain, nonatomic) _CDInteractionCache *recencyCache;
@property (nonatomic) double recencyMargin;
@property (retain, nonatomic) NSDictionary *recencyHeuristicLimitNumberOfProxiesByReason;
@property (readonly, nonatomic) NSObject<_DKKnowledgeQuerying> *knowledgeStore;
@property (readonly, nonatomic) _CDInteractionStore *interactionStore;
@property (readonly, nonatomic) _PSContactResolver *contactResolver;
@property (readonly, nonatomic) _CDInteractionCache *messageInteractionCache;

/* class methods */
+ (id)templateForPhoneCallHeuristicFromSuggestionProxy:(id)proxy;
+ (id)PSHeuristicsRecencyReasonToString:(long long)string;

/* instance methods */
- (id)initWithKnowledgeStore:(id)store interactionStore:(id)store contactResolver:(id)resolver messageInteractionCache:(id)cache;
- (id)initWithKnowledgeStore:(id)store interactionStore:(id)store contactResolver:(id)resolver shareSheetSupportedBundleIds:(id)ids messageInteractionCache:(id)cache;
- (void)updateModelProperties:(id)properties;
- (void)prepareRecencyCacheWithSupportedBundleIds:(id)ids;
- (id)seedSuggestionsForChatGuidsAndTransports:(id)transports;
- (id)recentNonSystemSuggestionsForBundleIDs:(id)ids numberOfSuggestion:(unsigned long long)suggestion;
- (id)proximityBoostingHeuristicWithProximityBooster:(id)booster existingSuggestions:(id)suggestions;
- (id)hyperRecentHeuristicSuggestionProxiesWithReferenceDate:(id)date predictionContextBundleId:(id)id;
- (id)inPhoneCallHeuristicSuggestionProxiesWithBundleIds:(id)ids predictionContext:(id)context;
- (id)proxiesByRecencyUsingInteractions:(id)interactions startIndex:(unsigned long long)index reason:(long long)reason allowNonSupportedBundleIDs:(BOOL)ids;
- (id)returnDocumentToSender:(id)sender;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)contacts;
@end

#endif /* _PSHeuristics_h */
