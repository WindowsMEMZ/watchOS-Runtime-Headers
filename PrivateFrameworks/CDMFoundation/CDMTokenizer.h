//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.8.1.0.0
//
#ifndef CDMTokenizer_h
#define CDMTokenizer_h
@import Foundation;

@class NSString;
@protocol OS_dispatch_queue, {unique_ptr<morphun::Tokenizer, std::default_delete<morphun::Tokenizer>>="__ptr_"{__compressed_pair<morphun::Tokenizer *, std::default_delete<morphun::Tokenizer>>="__value_"^{Tokenizer}}}, {unique_ptr<morphun::util::ULocale, std::default_delete<morphun::util::ULocale>>="__ptr_"{__compressed_pair<morphun::util::ULocale *, std::default_delete<morphun::util::ULocale>>="__value_"^{ULocale}}};

@interface CDMTokenizer : NSObject {
  /* instance variables */
  void * _analyzer;
  struct unique_ptr<morphun::Tokenizer, std::default_delete<morphun::Tokenizer>> { struct __compressed_pair<morphun::Tokenizer *, std::default_delete<morphun::Tokenizer>> { struct Tokenizer *__value_; } __ptr_; } _tokenizer;
  void * _normalizer;
  struct unique_ptr<morphun::util::ULocale, std::default_delete<morphun::util::ULocale>> { struct __compressed_pair<morphun::util::ULocale *, std::default_delete<morphun::util::ULocale>> { struct ULocale *__value_; } __ptr_; } _locale;
  NSString *_language;
  int _maxTokens;
  NSObject<OS_dispatch_queue> *_morphunForceUpdateQueue;
}

/* class methods */
+ (id)tokenizerForLocale:(id)locale;
+ (void *)analyzerFactory;
+ (void *)normalizerFactory;
+ (id)printableLocales:(id)locales;
+ (BOOL)trialAssetUpdate:(id)update;
+ (BOOL)syncTrialAsset:(id)asset;
+ (void)registerMorphunAssetsPathForLocale:(id)locale withPath:(id)path;
+ (BOOL)registerTrialAsset:(id)asset;

/* instance methods */
- (id)initWithLocale:(id)locale;
- (id)initWithLocale:(id)locale maxTokens:(int)tokens maxInputSize:(int)size;
- (id)createTokenChain:(id)chain;
@end

#endif /* CDMTokenizer_h */
