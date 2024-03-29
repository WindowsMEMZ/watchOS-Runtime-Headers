//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1226.2.2.1.0
//
#ifndef SGQuickResponsesStore_h
#define SGQuickResponsesStore_h
@import Foundation;

@class _PASLock;

@interface SGQuickResponsesStore : NSObject {
  /* instance variables */
  _PASLock *_readerWriter;
}

/* class methods */
+ (void)warmup;
+ (id)sharedInstance;
+ (id)instanceInMemory;
+ (BOOL)isProfane:(id)profane inLocales:(id)locales;
+ (id)keyWithLanguage:(id)language andResponse:(id)response;

/* instance methods */
- (id)init;
- (id)initInDirectory:(id)directory inMemory:(BOOL)memory withMigration:(BOOL)migration;
- (id)initInDirectory:(id)directory inMemory:(BOOL)memory withMigration:(BOOL)migration forTools:(BOOL)tools;
- (BOOL)frailReadTransaction:(id /* block */)transaction;
- (BOOL)frailWriteTransaction:(id /* block */)transaction;
- (id)recordsForResponses:(id)responses language:(id)language;
- (id)recordsForResponsesInternal:(id)internal language:(id)language;
- (id)_recordsForResponses:(id)responses language:(id)language;
- (void)addDisplayedToResponses:(id)responses language:(id)language;
- (void)addSelectedToResponse:(id)response language:(id)language;
- (void)addWrittenToResponse:(id)response language:(id)language isMatch:(BOOL)match;
- (void)_addCustomResponseToDb:(id)db reply:(id)reply language:(id)language embedding:(id)embedding sentAt:(double)at recipient:(id)recipient messagesRowId:(long long)id onError:(id /* block */)error;
- (void)_incrementCustomResponseInDb:(id)db reply:(id)reply language:(id)language embedding:(id)embedding sentAt:(double)at recipient:(id)recipient messagesRowId:(long long)id onError:(id /* block */)error;
- (BOOL)addingMessageExceedsBatchLimit:(unsigned long long)limit tableLimit:(unsigned long long)limit message:(id)message language:(id)language prompt:(id)prompt recipientHandle:(id)handle sentAt:(id)at;
- (id)embeddingForPrompt:(id)prompt language:(id)language embedder:(id /* block */)embedder;
- (void)recordKnownCustomResponsesInBatchWithEmbedder:(id /* block */)embedder compatibilityVersion:(unsigned long long)version;
- (unsigned long long)designateFilteringBatch:(unsigned long long)batch;
- (void)filterBatchWithMinimumDistinctRecipients:(unsigned long long)recipients minimumReplyOccurences:(unsigned long long)occurences;
- (id)getProfanityLocale;
- (id)getModelVersion;
- (void)setProfanityLocale:(id)locale andModelVersion:(long long)version;
- (BOOL)resetDbIfNeededCompareWithCompatibilityVersion:(unsigned long long)version;
- (void)resetCustomResponsesAndResetMessages:(BOOL)messages;
- (void)resetCustomResponsesForEval:(id)eval;
- (id)messagesForEval:(id)eval;
- (void)recordMessagesInBatchAsCustomResponsesWithEmbedder:(id /* block */)embedder compatibilityVersion:(unsigned long long)version;
- (void)calculateUsageSpreads;
- (void)prunePerRecipientTableWithMaxRows:(unsigned long long)rows;
- (id)nearestCustomResponsesAndScoresToPromptEmbedding:(id)embedding recipient:(id)recipient limit:(unsigned long long)limit withinRadius:(float)radius responseCountExponent:(float)exponent minimumDecayedCount:(float)count compatibilityVersion:(unsigned long long)version language:(id)language locale:(id)locale allowProfanity:(BOOL)profanity minimumTimeInterval:(double)interval usageSpreadExponent:(float)exponent;
- (id)nearestCustomResponsesToPromptEmbedding:(id)embedding recipient:(id)recipient limit:(unsigned long long)limit withinRadius:(float)radius responseCountExponent:(float)exponent minimumDecayedCount:(float)count compatibilityVersion:(unsigned long long)version language:(id)language locale:(id)locale allowProfanity:(BOOL)profanity minimumTimeInterval:(double)interval usageSpreadExponent:(float)exponent;
- (void)decayAllCustomResponsesWithDecayFactor:(double)factor filteringBatchSize:(unsigned long long)size;
- (unsigned long long)countCustomResponsesAfterPruningWithMinimumCountThreshold:(double)threshold;
- (unsigned long long)countCustomResponsesAfterTruncatingTable:(unsigned long long)table;
- (BOOL)deltaForResponsesOnRow:(id /* block */)row completion:(id /* block */)completion;
- (void)destroyInstanceInMemory;
- (double)getPerRecipientCountForReply:(id)reply language:(id)language recipient:(id)recipient;
- (double)getUsageSpreadForReply:(id)reply language:(id)language;
@end

#endif /* SGQuickResponsesStore_h */
