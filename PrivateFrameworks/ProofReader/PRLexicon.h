//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 619.2.0.0.0
//
#ifndef PRLexicon_h
#define PRLexicon_h
@import Foundation;

@class NSString;

@interface PRLexicon : NSObject {
  /* instance variables */
  NSString *_localization;
  NSString *_unigramsPath;
  const void * _lexicon;
}

@property (readonly) NSString *name;

/* class methods */
+ (id)lexiconWithLocalization:(id)localization unigramsPath:(id)path;
+ (id)lexiconWithLexicon:(const void *)lexicon;
+ (id)lexiconWithName:(id)name words:(id)words;

/* instance methods */
- (id)initWithLocalization:(id)localization unigramsPath:(id)path;
- (id)initWithLexicon:(const void *)lexicon;
- (id)initWithName:(id)name words:(id)words;
- (id)description;
- (void)dealloc;
- (struct _LXLexicon *)lexicon;
- (id)createCursor;
- (void)enumerateEntriesForString:(id)string usingBlock:(id /* block */)block;
- (unsigned int)tokenIDForString:(id)string;
- (id)stringForTokenID:(unsigned int)id;
- (BOOL)getProbabilityForString:(id)string probability:(double *)probability;
- (BOOL)getProbabilityForTokenID:(unsigned int)id probability:(double *)probability;
- (void)enumerateCompletionsForPrefix:(id)prefix maxCompletions:(unsigned long long)completions withBlock:(id /* block */)block;
- (void)enumerateCompletionEntriesForPrefix:(id)prefix maxCompletions:(unsigned long long)completions withBlock:(id /* block */)block;
- (void)enumerateCorrectionEntriesForWord:(id)word maxCorrections:(unsigned long long)corrections withBlock:(id /* block */)block;
@end

#endif /* PRLexicon_h */
