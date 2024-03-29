//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 346.2.9.0.0
//
#ifndef BRLTBrailleStateManagerDelegate_Protocol_h
#define BRLTBrailleStateManagerDelegate_Protocol_h
@import Foundation;

@protocol BRLTBrailleStateManagerDelegate <NSObject>
/* instance methods */
- (void)brailleDisplayInsertedCharacter:(id)character modifiers:(id)modifiers;
- (void)brailleDisplayDeletedCharacter:(id)character;
- (void)brailleDisplayStringDidChange:(id)change brailleSelection:(struct _NSRange { unsigned long long x0; unsigned long long x1; })selection modifiers:(id)modifiers;
- (void)replaceScriptStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })range withScriptString:(id)string cursorLocation:(unsigned long long)location;
- (void)scriptSelectionDidChange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })change;
- (void)didInsertScriptString:(id)string;
- (void)requestSpeech:(id)speech language:(id)language;
@end

#endif /* BRLTBrailleStateManagerDelegate_Protocol_h */
