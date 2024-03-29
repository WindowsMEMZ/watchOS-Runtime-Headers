//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIRevisionHistoryDelegate_Protocol_h
#define TIRevisionHistoryDelegate_Protocol_h
@import Foundation;

@protocol TIRevisionHistoryDelegate <NSObject>
/* instance methods */
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(id)statistic autocorrectionTypes:(unsigned int)types;
- (void)incrementUsageTrackingKey:(id)key;
- (void)incrementUsageTrackingKeyForAppWithIsSentence:(BOOL)sentence;
- (BOOL)isStringBasedModel;
- (void)incrementLanguageModelCount:(id)count tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })id contextTokens:(id)tokens saveToDifferentialPrivacy:(int)privacy;
- (void)decrementLanguageModelCount:(id)count tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })id contextTokens:(id)tokens;
- (void)softLearningRegisterAccepted:(id)accepted typed:(id)typed;
- (void)softLearningRegisterDeleted:(id)deleted;
- (void)registerNegativeEvidence:(id)evidence tokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })id contextTokens:(id)tokens intended:(id)intended intendedTokenID:(struct TITokenID { unsigned int x0; unsigned int x1; })id hint:(int)hint;
- (void)registerRevisionFrom:(id)from to:(id)to contextTokens:(id)tokens;
- (struct TITokenID { unsigned int x0; unsigned int x1; })findTokenIDForWord:(id)word contextTokens:(id)tokens tokenLookupMode:(unsigned int)mode surfaceFormPtr:(id *)ptr hasCaseInsensitiveStaticVariant:(BOOL *)variant;
- (struct TITokenID { unsigned int x0; unsigned int x1; })findTokenIDForWord:(id)word contextTokens:(id)tokens tokenLookupMode:(unsigned int)mode;
- (struct TITokenID { unsigned int x0; unsigned int x1; })addWord:(id)word contextTokens:(id)tokens surfaceFormPtr:(id *)ptr;
- (void)fillReversedConversationHistoryInContext:(id)context;
@end

#endif /* TIRevisionHistoryDelegate_Protocol_h */
