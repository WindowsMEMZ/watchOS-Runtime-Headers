//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTTranslationCandidate_Daemon_h
#define _LTTranslationCandidate_Daemon_h
@import Foundation;

@interface _LTTranslationCandidate (Daemon)
/* instance methods */
- (id)initWithOspreyPhrase:(id)phrase;
- (id)initWithOspreyMtResponsePhrase:(id)phrase locale:(id)locale censorSpeech:(BOOL)speech;
- (id)initWithOspreyMtResponsePhrase:(id)phrase locale:(id)locale injectingGenderTranslation:(id)translation genderInjectedMetaInfo:(id)info;
- (id)initWithFormattedString:(id)string sanitizedFormattedString:(id)string confidence:(double)confidence lowConfidence:(BOOL)confidence romanization:(id)romanization tokens:(id)tokens preToPostITN:(id)itn;
- (void)updateWithEngineMeta:(id)meta locale:(id)locale;
@end

#endif /* _LTTranslationCandidate_Daemon_h */
