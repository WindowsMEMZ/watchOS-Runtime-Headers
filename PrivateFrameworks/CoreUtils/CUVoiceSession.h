//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUVoiceSession_h
#define CUVoiceSession_h
@import Foundation;

#include "CUVoiceRequest.h"
#include "VSSpeechSynthesizerDelegate-Protocol.h"

@class NSMutableArray, NSString, VSSpeechSynthesizer;
@protocol OS_dispatch_queue;

@interface CUVoiceSession : NSObject<VSSpeechSynthesizerDelegate> {
  /* instance variables */
  CUVoiceRequest *_currentRequest;
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
  unsigned int _invalidateFlags;
  NSMutableArray *_requests;
  VSSpeechSynthesizer *_speechSynthesizer;
  struct LogCategory { int x0; int x1; char * x2; unsigned int x3; char * x4; char * x5; int x6; struct LogCategory * x7; struct LogOutput * x8; struct LogOutput * x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char * x14; struct LogCategoryPrivate * x15; } * _ucat;
  NSMutableArray *_voiceRequests;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)invalidateWithFlags:(unsigned int)flags;
- (void)_invalidate;
- (void)_invalidated;
- (void)speakText:(id)text flags:(unsigned int)flags completion:(id /* block */)completion;
- (void)_speakText:(id)text flags:(unsigned int)flags completion:(id /* block */)completion;
- (void)stopSpeaking;
- (void)_processQueuedRequests;
- (void)_completeAllRequestsWithError:(id)error;
- (void)_completeRequest:(id)request error:(id)error;
- (void)speechSynthesizer:(id)synthesizer didStartSpeakingRequest:(id)request;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeakingRequest:(id)request successfully:(BOOL)successfully phonemesSpoken:(id)spoken withError:(id)error;
- (void)speechSynthesizer:(id)synthesizer didFinishSpeakingRequest:(id)request successfully:(BOOL)successfully withError2:(id)error2;
@end

#endif /* CUVoiceSession_h */
