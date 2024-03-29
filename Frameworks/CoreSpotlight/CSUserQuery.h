//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2274.8.0.0.0
//
#ifndef CSUserQuery_h
#define CSUserQuery_h
@import Foundation;

#include "CSSearchQuery.h"
#include "CSSearchQueryContext.h"

@class NSArray, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface CSUserQuery : CSSearchQuery {
  /* instance variables */
  CSSearchQueryContext *_clientContext;
  NSDictionary *_parserOptions;
  NSString *_searchString;
  NSMutableArray *_nlpSuggestions;
  NSMutableArray *_templateSuggestions;
  NSMutableArray *_suggestions;
  NSMutableArray *_completions;
  NSMutableArray *_instantAnswers;
  long long _tokenCount;
  BOOL _queryRewritten;
  BOOL _queryIsTopHit;
  BOOL _didProcessTopHits;
  long long _currentTokenKind;
  long long _currentTokenScope;
}

@property (copy) id /* block */ foundInstantAnswersHandler;
@property (copy) id /* block */ foundInstantAnswersHandlerOld;
@property (copy, nonatomic) NSArray *contactSearchResults;
@property (readonly, nonatomic) NSObject<OS_dispatch_semaphore> *contactSearchSemaphore;
@property (readonly, nonatomic) unsigned long long contactSearchSemaphoreWaitTime;
@property (readonly) long long foundSuggestionCount;
@property (copy) id /* block */ foundSuggestionsHandler;

/* class methods */
+ (id)trimSuggestions:(id)suggestions options:(id)options peopleSelectedScope:(long long)scope isShortQuery:(BOOL)query;
+ (id)dedupSuggestions:(id)suggestions queryContextScopeIsToPerson:(BOOL)person seenContactInfoToSuggestion:(id)suggestion;
+ (id)suggestionsByDetectingEmailIntentForPeopleSuggestions:(id)suggestions;
+ (id)dedupedDateSuggestions:(id)suggestions;
+ (id)dedupedSuggestions:(id)suggestions options:(id)options;
+ (id)dedupedSuggestions:(id)suggestions queryContextScopeIsToPerson:(BOOL)person options:(id)options;
+ (id)orderedSuggestionsForPhotos:(id)photos options:(id)options;
+ (id)collectUnigrams:(id)unigrams locale:(id)locale;
+ (id)emailSpecialChars;
+ (id)computeEmailAddressTopicalityScore:(id)score inputEmailAddress:(id)address queryUnigrams:(id)unigrams locale:(id)locale;
+ (double)computeTopicalityScoreForName:(id)name inputName:(id)name numTokensInName:(unsigned long long)name isContactsSuggestion:(BOOL)suggestion queryUnigrams:(id)unigrams isFirstName:(BOOL)name locale:(id)locale;
+ (double)computeScoreForNameUnigrams:(id)unigrams queryUnigrams:(id)unigrams queryString:(id)string locale:(id)locale isContactsSuggestion:(BOOL)suggestion;
+ (id)computeRankingScoreForSuggestion:(id)suggestion queryString:(id)string locale:(id)locale;
+ (void)computeRankingScoreForSuggestions:(id)suggestions queryString:(id)string locale:(id)locale;
+ (id)orderedSuggestions:(id)suggestions options:(id)options;
+ (id)dedupedNextTokenSuggestions:(id)suggestions context:(id)context;
+ (void)filteredTemplateSuggestions:(id)suggestions nlpSuggestions:(id)suggestions;
+ (void)sortSearchableItems:(id)items;
+ (void)updateWithTemplateSuggestions:(id)suggestions searchString:(id)string currentSuggestion:(id)suggestion;
+ (id)flattenCSFieldSpecifications:(id)specifications;
+ (id)queryContextWithUserQueryString:(id)string searchString:(id)string clientContext:(id)context;
+ (id)advancedComponentsWithSearchString:(id)string parseResult:(id)result parseOptions:(id)options queryContext:(id)context;
+ (id)parseSearchString:(id)string parseOptions:(id)options queryContext:(id)context;
+ (id)parseResultWithSearchString:(id)string parseOptions:(id)options queryContext:(id)context isZKW:(BOOL)zkw;
+ (id)generateFilterQueriesBasedOnPreviousSuggestions:(id)suggestions;

/* instance methods */
- (void)handleFoundInstantAnswer:(id)answer;
- (void)processInstantAnswersWithFoundItems:(id)items;
- (BOOL)isTopHitQuery;
- (id)queryStringWithQueryContext:(id)context searchString:(id)string options:(id)options;
- (id)initWithQueryString:(id)string queryContext:(id)context;
- (id)initWithQueryString:(id)string context:(id)context;
- (id)initWithUserQueryString:(id)string queryContext:(id)context;
- (id)initWithUserQueryString:(id)string userQueryContext:(id)context;
- (id)queryContext;
- (id)clientContext;
- (id)foundNLPSuggestions;
- (id)foundTemplateSuggestions;
- (id)foundSuggestions;
- (id)foundCompletions;
- (id)foundInstantAnswers;
- (void)handleFoundNLPSuggestions:(id)nlpsuggestions;
- (void)handleFoundTemplateSuggestions:(id)suggestions;
- (void)handleFoundInstantAnswers:(id)answers;
- (void)handleFoundSuggestions:(id)suggestions;
- (void)handleFirstBatch:(id)batch;
- (void)handleFoundItems:(id)items;
- (void)handleFoundCompletions:(id)completions;
- (id)processToContacts:(id)contacts resultsToMultiQuery:(id)query contactsTo:(id)to processedContacts:(id)contacts;
- (id)processFromContacts:(id)contacts resultsFromMultiQuery:(id)query contactsFrom:(id)from processedContacts:(id)contacts;
- (void)filterContactPeopleSuggestions:(id)suggestions cachedSuggestionsEmailToScope:(id)scope completionHandler:(id /* block */)handler;
- (id)peopleSuggestionsWithContactSearchResults:(id)results;
- (void)handleSuggestions;
- (void)handleInstantAnswers;
- (void)handleCompletion:(id)completion;
- (void)handleQueryRewritten;
- (void)userEngagedWithResult:(id)result visibleResults:(id)results interactionType:(int)type;
- (void)userEngagedWithSuggestion:(id)suggestion visibleSuggestions:(id)suggestions interactionType:(int)type;
- (void)updateRecentSuggestions:(id)suggestions;
- (BOOL)queryRewritten;
- (void)start;
- (void)cancel;
- (void)startContactSearchIfNeededWithSearchQuery:(id)query;
- (id)initWithSearchString:(id)string keyboardLanguage:(id)language attributes:(id)attributes;
- (id)initWithUserString:(id)string queryContext:(id)context;
- (id)keyboardLanguage;
- (void)willStartQuery;
- (void)setFilterQueries:(id)queries;
- (id)filterQueries;
- (void)userEngagedWithResult:(id)result interactionType:(int)type;
- (void)prepareSearch;
@end

#endif /* CSUserQuery_h */
