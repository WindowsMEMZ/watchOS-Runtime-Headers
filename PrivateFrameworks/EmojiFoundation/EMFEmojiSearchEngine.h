//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.200.0.0.0
//
#ifndef EMFEmojiSearchEngine_h
#define EMFEmojiSearchEngine_h
@import Foundation;

#include "EMFAutocompleteCandidateProvider-Protocol.h"
#include "EMFIndexManager.h"
#include "EMFQueryLogger.h"
#include "EMFQueryResultOverrideList.h"
#include "EMFStringStemmer.h"

@class NSLocale;

@interface EMFEmojiSearchEngine : NSObject {
  /* instance variables */
  struct __EmojiLocaleDataWrapper * _localeData;
  EMFQueryLogger *_queryLogger;
}

@property (readonly, nonatomic) NSObject<EMFAutocompleteCandidateProvider> *autocompleteProvider;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) EMFIndexManager *indexManager;
@property (readonly, nonatomic) EMFStringStemmer *stringStemmer;
@property (readonly, nonatomic) EMFQueryResultOverrideList *overrideList;
@property (nonatomic) BOOL enableAutocomplete;

/* class methods */
+ (BOOL)isLocaleSupported:(id)supported;

/* instance methods */
- (id)init;
- (id)initWithLocale:(id)locale;
- (id)initWithLocale:(id)locale andAssetBundle:(id)bundle;
- (id)initWithLocale:(id)locale andIndexManager:(id)manager andStringStemmer:(id)stemmer andAutocompleteProvider:(id)provider;
- (void)dealloc;
- (void)preheat;
- (id)performStringQuery:(id)query;
- (id)performQuery:(id)query usingIndex:(id)index;
- (id)_performStringQueryOverride:(id)override usingIndex:(id)index;
- (id)_performStringQueryUntokenized:(id)untokenized usingIndex:(id)index;
- (id)_performStringQuery:(id)query usingIndex:(id)index shouldAutocomplete:(BOOL)autocomplete shouldStem:(BOOL)stem;
- (id)_performAutocompletedQueryForQuery:(id)query usingIndex:(id)index;
@end

#endif /* EMFEmojiSearchEngine_h */
