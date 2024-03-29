//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef RKMessageResponseManager_h
#define RKMessageResponseManager_h
@import Foundation;

#include "RKRankLearner.h"
#include "RKResponseCollection.h"

@class NSArray;
@protocol OS_dispatch_queue;

@interface RKMessageResponseManager : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain) RKResponseCollection *collection;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain) RKRankLearner *rankLearner;

/* class methods */
+ (id)sharedManager;
+ (BOOL)_needsMirroredAnalysisForMessage:(id)message forChronologicalConversationHistory:(id)history;
+ (BOOL)_responseTypeIsSunsetted:(id)sunsetted;
+ (BOOL)_responseLooksLikeIncomingCheckInResponse:(id)response;
+ (BOOL)_responseLooksLikeOutgoingCheckInResponse:(id)response;
+ (BOOL)_isMirroredResponseValidForResponse:(id)response;
+ (id)_mostRecentTextFromChronologicalConversationHistory:(id)history;
+ (id)_chronologicalConversationHistory:(id)history;

/* instance methods */
- (id)dispatchQueue;
- (id)init;
- (id)initWithDynamicDataURL:(id)url;
- (id)initWithDynamicDataURL:(id)url withBundleURL:(id)url;
- (id)initWithAssetPlistURL:(id)url;
- (id)initWithDynamicDataURL:(id)url displayStringsProvider:(id)provider;
- (void)responsesForMessage:(id)message maximumResponses:(unsigned long long)responses forContext:(id)context withLanguage:(id)language options:(unsigned long long)options completionBlock:(id /* block */)block;
- (void)responsesForMessage:(id)message maximumResponses:(unsigned long long)responses forConversationHistory:(id)history withLanguage:(id)language options:(unsigned long long)options completionBlock:(id /* block */)block;
- (void)responsesForMessage:(id)message maximumResponses:(unsigned long long)responses recipientID:(id)id forConversationHistory:(id)history withLanguage:(id)language options:(unsigned long long)options completionBlock:(id /* block */)block;
- (id)responsesForMessage:(id)message maximumResponses:(unsigned long long)responses recipientID:(id)id forConversationHistory:(id)history withLanguage:(id)language options:(unsigned long long)options;
- (void)responsesForMessageWithLanguageDetection:(id)detection maximumResponses:(unsigned long long)responses forConversationHistory:(id)history forContext:(id)context withLanguage:(id *)language options:(unsigned long long)options completionBlock:(id /* block */)block;
- (id)responsesForMessage:(id)message maximumResponses:(unsigned long long)responses forContext:(id)context withLanguage:(id)language options:(unsigned long long)options;
- (id)responsesForMessage:(id)message maximumResponses:(unsigned long long)responses forConversationHistory:(id)history withLanguage:(id)language options:(unsigned long long)options;
- (id)responsesForMessage:(id)message maximumResponses:(unsigned long long)responses forConversationHistory:(id)history withLanguage:(id)language inputModes:(id)modes options:(unsigned long long)options;
- (id)responsesForMessageWithLanguageDetection:(id)detection maximumResponses:(unsigned long long)responses forConversationHistory:(id)history forContext:(id)context withLanguage:(id *)language options:(unsigned long long)options;
- (id)responsesForMessageImp:(id)imp maximumResponses:(unsigned long long)responses forRecipientID:(id)id forConversationHistory:(id)history forContext:(id)context withLanguage:(id)language options:(unsigned long long)options;
- (id)responseWithAttributesMatchingProactiveGrammarForMessage:(id)message languageID:(id)id kbdInputModes:(id)modes;
- (void)responseWithAttributesMatchingProactiveGrammarForMessage:(id)message languageID:(id)id kbdInputModes:(id)modes completionBlock:(id /* block */)block;
- (id)responseWithAttributesMatchingProactiveGrammarForMessageImp:(id)imp languageID:(id *)id kbdInputModes:(id)modes;
- (id)responsesForMessageWithLanguageDetectionImp:(id)imp maximumResponses:(unsigned long long)responses forRecipientID:(id)id forConversationHistory:(id)history forContext:(id)context withLanguage:(id *)language inputModes:(id)modes options:(unsigned long long)options;
- (id)categoryForMessage:(id)message langID:(id)id;
- (id)categoryForMessageWithoutQueue:(id)queue langID:(id)id;
- (void)registerResponse:(id)response forMessage:(id)message forContext:(id)context withLanguage:(id)language;
- (void)registerResponse:(id)response forMessage:(id)message forContext:(id)context withEffectiveDate:(id)date withLanguage:(id)language;
- (void)registerResponse:(id)response forMessage:(id)message metadata:(id)metadata withLanguage:(id)language;
- (id)getRankLearner;
- (BOOL)usePersonalizedRanking;
- (void)prunePersonalizedUserDatabase:(id)database;
- (void)resetRegisteredResponses;
- (void)flushDynamicData;
- (BOOL)isQuestion:(id)question withLanguage:(id)language;
@end

#endif /* RKMessageResponseManager_h */
