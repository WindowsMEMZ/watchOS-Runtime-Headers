//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef _UIDefinitionDictionary_h
#define _UIDefinitionDictionary_h
@import Foundation;

@class MAAsset, NSString;

@interface _UIDefinitionDictionary : NSObject {
  /* instance variables */
  struct __DCSDictionary * _dictionary;
}

@property (readonly) MAAsset *rawAsset;
@property (readonly) NSString *localizedLanguageName;
@property (readonly) NSString *localizedDictionaryName;
@property (readonly) NSString *definitionLanguage;
@property BOOL activated;
@property (retain) MAAsset *assetToUpgrade;

/* class methods */
+ (id)_normalizedLanguageStringForLanguageCode:(id)code;

/* instance methods */
- (id)initWithAsset:(id)asset;
- (void)updateAsset;
- (BOOL)assetIsLocal;
- (BOOL)assetIsDeletable;
- (void)dealloc;
- (BOOL)_hasDefinitionForTerm:(id)term;
- (id)_HTMLDefinitionForTerm:(id)term type:(long long)type;
- (id)_shortHTMLDefinitionForTerm:(id)term;
- (id)_fullHTMLDefinitionForTerm:(id)term;
- (id)_attributedDefinitionForTerm:(id)term;
- (id)_definitionValueForTerm:(id)term;
- (BOOL)_isTTYDictionary;
- (id)description;
@end

#endif /* _UIDefinitionDictionary_h */
