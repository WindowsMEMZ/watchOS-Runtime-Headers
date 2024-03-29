//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.3.1.0.0
//
#ifndef VSTextPreProcessorRule_h
#define VSTextPreProcessorRule_h
@import Foundation;

@class NSString;

@interface VSTextPreProcessorRule : NSObject {
  /* instance variables */
  NSString *_matchPattern;
  NSString *_replacement;
  BOOL _caseSensitive;
  BOOL _eatPunctuation;
}

/* instance methods */
- (id)initWithDictionaryRepresentation:(id)representation;
- (void)dealloc;
- (id)matchedString:(id)string forTokenInRange:(struct { long long x0; long long x1; } *)range;
@end

#endif /* VSTextPreProcessorRule_h */
