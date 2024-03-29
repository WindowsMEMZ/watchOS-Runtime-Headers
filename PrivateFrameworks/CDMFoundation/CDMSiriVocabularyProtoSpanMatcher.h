//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMSiriVocabularyProtoSpanMatcher_h
#define CDMSiriVocabularyProtoSpanMatcher_h
@import Foundation;

#include "CDMProtoSpanMatcher-Protocol.h"

@class CKVocabularySandbox, CKVocabularySearcher, NSArray, NSString;

@interface CDMSiriVocabularyProtoSpanMatcher : NSObject<CDMProtoSpanMatcher> {
  /* instance variables */
  CKVocabularySearcher *_searcher;
  CKVocabularySandbox *_sandbox;
}

@property (readonly) NSArray *overrideSpans;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)convertCDMTokenToCKVToken:(id)ckvtoken;
+ (id)convertCKVMatchingSpanToNLUTypesMatchingSpan:(id)span tokenChain:(id)chain;
+ (id)buildCKVTokenChain:(id)chain;
+ (id)convertCKVMatchingSpans:(id)spans tokenChain:(id)chain;

/* instance methods */
- (id)initWithSearcher:(id)searcher;
- (id)initWithSandboxId:(id)id;
- (id)initWithOverrideSpans:(id)spans;
- (void)dealloc;
- (id)sandboxId;
- (id)callSearcher:(id)searcher;
- (id)matchSpansForTokenChain:(id)chain;
@end

#endif /* CDMSiriVocabularyProtoSpanMatcher_h */
