//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 200.0.0.0.0
//
#ifndef NSLinguisticTagger_RKPrivate_h
#define NSLinguisticTagger_RKPrivate_h
@import Foundation;

@interface NSLinguisticTagger (RKPrivate)
/* instance methods */
- (BOOL)containsAsianCharacters;
- (id)languageOfRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withAdditionalContext:(id)context withPreferredLanguages:(id)languages;
@end

#endif /* NSLinguisticTagger_RKPrivate_h */
