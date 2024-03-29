//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef VSTextPreProcessor_h
#define VSTextPreProcessor_h
@import Foundation;

@class NSArray, NSString;

@interface VSTextPreProcessor : NSObject {
  /* instance variables */
  NSArray *_rules;
  NSString *_languageID;
  struct __CFStringTokenizer * _tokenizer;
}

/* instance methods */
- (id)initWithContentsOfPath:(id)path languageIdentifier:(id)identifier;
- (void)dealloc;
- (id)processedTextFromString:(id)string;
@end

#endif /* VSTextPreProcessor_h */
