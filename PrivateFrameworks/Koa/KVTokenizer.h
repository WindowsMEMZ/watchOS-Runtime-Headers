//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef KVTokenizer_h
#define KVTokenizer_h
@import Foundation;

@class NSLocale;
@protocol struct shared_ptr<skitbridge::Tokenizer> { struct Tokenizer * x0; struct __shared_weak_count * x1; }, {shared_ptr<skitbridge::Tokenizer>="__ptr_"^{Tokenizer}"__cntrl_"^{__shared_weak_count}};

@interface KVTokenizer : NSObject {
  /* instance variables */
  NSLocale *_locale;
}

@property (readonly, nonatomic) struct shared_ptr<skitbridge::Tokenizer> { struct Tokenizer * x0; struct __shared_weak_count * x1; } tokenizer;

/* class methods */
+ (void)initialize;

/* instance methods */
- (id)initWithLocale:(id)locale;
- (id)initWithLocale:(id)locale assetPath:(id)path normalizeWords:(BOOL)words;
- (id)init;
- (id)locale;
- (void)enumerateTokensOfText:(id)text usingBlock:(id /* block */)block;
- (id)queryFromText:(id)text;
@end

#endif /* KVTokenizer_h */
