//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTSpeechRecognizer_h
#define _LTSpeechRecognizer_h
@import Foundation;

#include "_EARSpeechRecognitionResultStream-Protocol.h"

@class NSLocale, NSString, NSURL, _EARSpeechRecognitionAudioBuffer, _EARSpeechRecognitionResultPackage, _EARSpeechRecognizer;
@protocol OS_dispatch_queue;

@interface _LTSpeechRecognizer : NSObject<_EARSpeechRecognitionResultStream> {
  /* instance variables */
  _EARSpeechRecognizer *_recognizer;
  _EARSpeechRecognitionAudioBuffer *_buffer;
  BOOL _detectedSpeechEndpoint;
  _EARSpeechRecognitionResultPackage *_finalResult;
  NSObject<OS_dispatch_queue> *_recognitionQueue;
}

@property (copy, nonatomic) id /* block */ recognitionHandler;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) NSString *modelVersion;
@property (readonly, nonatomic) NSLocale *language;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithModelURL:(id)url language:(id)language modelVersion:(id)version;
- (void)startRecognitionWithAutoStop:(BOOL)stop resultHandler:(id /* block */)handler;
- (void)addSpeechAudioData:(id)data;
- (void)endAudio;
- (void)cancelRecognition;
- (void)triggerServerSideEndPointer;
- (void)_recognizedResult:(id)result error:(id)error;
- (void)speechRecognizer:(id)recognizer didFinishRecognitionWithError:(id)error;
- (void)speechRecognizer:(id)recognizer didRecognizeFinalResultPackage:(id)package;
- (void)speechRecognizer:(id)recognizer didRecognizePartialResult:(id)result;
- (void)speechRecognizer:(id)recognizer didRecognizeFinalResults:(id)results;
@end

#endif /* _LTSpeechRecognizer_h */
