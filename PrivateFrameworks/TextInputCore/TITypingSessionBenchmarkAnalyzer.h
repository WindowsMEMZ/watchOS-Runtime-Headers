//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3431.206.0.0.0
//
#ifndef TITypingSessionBenchmarkAnalyzer_h
#define TITypingSessionBenchmarkAnalyzer_h
@import Foundation;

#include "TITypingSession.h"
#include "TITypingSessionAligned.h"
#include "TITypingSessionAnalyzing-Protocol.h"

@class NSString;

@interface TITypingSessionBenchmarkAnalyzer : NSObject<TITypingSessionAnalyzing> {
  /* instance variables */
  TITypingSession *_session;
  TITypingSessionAligned *_alignedSession;
  unsigned long long _typingSessionConfidence;
  double _sessionAlignmentConfidence;
  int _sessionWords;
  int _alignedWords;
  int _sessionWordsWithText;
  int _alignedWordsWithText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (unsigned long long)evaluateConfidenceInSession:(id)session alignedSession:(id)session;
- (BOOL)analyzeSession:(id)session alignedSession:(id)session withConfidence:(unsigned long long)confidence;
- (void)registerEventSpec;
- (void)dispatchEvent;
@end

#endif /* TITypingSessionBenchmarkAnalyzer_h */
