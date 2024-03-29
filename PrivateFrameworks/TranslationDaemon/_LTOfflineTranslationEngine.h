//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 252.9.0.0.0
//
#ifndef _LTOfflineTranslationEngine_h
#define _LTOfflineTranslationEngine_h
@import Foundation;

#include "_LTDSELFLoggingManager.h"
#include "_LTMultilingualSpeechRecognizer.h"
#include "_LTOfflineSpeechSynthesizer.h"
#include "_LTSpeechTranslationAssetInfo.h"
#include "_LTTextToSpeechCache.h"
#include "_LTTranslationEngine-Protocol.h"

@class EMTTranslator, NSArray, NSDictionary, NSError, NSLocale, NSString, NSURL, _LTLanguageDetectionResult, _LTLocalePair;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface _LTOfflineTranslationEngine : NSObject<_LTTranslationEngine> {
  /* instance variables */
  _LTSpeechTranslationAssetInfo *_assetInfo;
  _LTMultilingualSpeechRecognizer *_recognizer;
  _LTOfflineSpeechSynthesizer *_synthesizer;
  NSDictionary *_etiquetteSanitizers;
  EMTTranslator *_translator;
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_queue> *_callbackQueue;
  NSObject<OS_dispatch_group> *_lidWaitGroup;
  NSLocale *_lidBestResult;
  _LTLanguageDetectionResult *_lidResult;
  BOOL _didEndpointSpeech;
  NSError *_earError;
  _LTDSELFLoggingManager *_selfLoggingManager;
}

@property (retain, nonatomic) _LTLocalePair *localePair;
@property (retain, nonatomic) NSArray *asrModelURLs;
@property (retain, nonatomic) NSURL *mtModelURL;
@property (retain, nonatomic) _LTTextToSpeechCache *ttsCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)_needToWaitForBothFinalTranslationResultsWithContext:(id)context lidResult:(id)result;

/* instance methods */
- (id)initWithLocalePair:(id)pair assetInfo:(id)info selfLoggingManager:(id)manager;
- (BOOL)translatesPair:(id)pair;
- (void)_loadRecognizers;
- (void)_loadEtiquetteSanitizers;
- (void)_loadTranslatorForTask:(id)task;
- (void)preheatAsynchronously:(BOOL)asynchronously withContext:(id)context;
- (id)_handleTranslationResults:(id)results withContext:(id)context sourceString:(id)string;
- (void)_translateString:(id)string isFinal:(BOOL)final withContext:(id)context toLocale:(id)locale withSpans:(id)spans completion:(id /* block */)completion;
- (id)_paragraphResultFromSentences:(id)sentences;
- (void)_translateParagraph:(id)paragraph withContext:(id)context toLocale:(id)locale completion:(id /* block */)completion;
- (void)_translate:(id)_translate withContext:(id)context toLocale:(id)locale paragraphResult:(id /* block */)result completion:(id /* block */)completion;
- (void)translateSentence:(id)sentence withContext:(id)context completion:(id /* block */)completion;
- (void)translate:(id)translate withContext:(id)context paragraphResult:(id /* block */)result completion:(id /* block */)completion;
- (void)cancelSpeechTranslation;
- (void)addSpeechAudioData:(id)data;
- (void)endpoint;
- (void)setLanguagesRecognized:(id)recognized context:(id)context;
- (id)_getBestRecognitionResult:(id)result context:(id)context;
- (void)_waitForLIDWithContext:(id)context completion:(id /* block */)completion;
- (void)speak:(id)speak withContext:(id)context completion:(id /* block */)completion;
- (void)_translate:(id)_translate withContext:(id)context isFinal:(BOOL)final completion:(id /* block */)completion;
- (void)_translatePrepare:(id)prepare;
- (void)startTextToSpeechTranslationWithContext:(id)context text:(id)text delegate:(id)delegate;
- (void)startSpeechTranslationWithContext:(id)context delegate:(id)delegate;
- (void)endAudio;
- (void)cancelRecognition;
@end

#endif /* _LTOfflineTranslationEngine_h */
