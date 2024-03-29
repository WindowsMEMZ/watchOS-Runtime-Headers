//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TIMathSymbolPunctuationController_h
#define TIMathSymbolPunctuationController_h
@import Foundation;

@class NSString;

@interface TIMathSymbolPunctuationController : NSObject {
  /* instance variables */
  unsigned long long _state;
  long long _location;
  unsigned short _replacementCharacter;
}

@property (copy, nonatomic) NSString *decimalSeparator;
@property (nonatomic) BOOL replaceAfterNumerals;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) BOOL converted;

/* instance methods */
- (id)init;
- (void)reset;
- (void)setInputString:(id)string;
- (BOOL)updateInputString:(id)string;
- (id)mathSymbolPunctuationedStringForInputString:(id)string;
@end

#endif /* TIMathSymbolPunctuationController_h */
