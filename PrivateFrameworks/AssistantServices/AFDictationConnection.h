//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFDictationConnection_h
#define AFDictationConnection_h
@import Foundation;

#include "AFAnalyticsEvent.h"
#include "AFAnalyticsTurnBasedInstrumentationContext.h"
#include "AFAudioPowerUpdater.h"
#include "AFCallSiteInfo.h"
#include "AFInstanceContext.h"
#include "AFNetworkAvailabilityObserver-Protocol.h"
#include "AFSpeechRequestOptions.h"

@class NSArray, NSMutableData, NSMutableDictionary, NSSet, NSString, NSXPCConnection;
@protocol AFDictationDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface AFDictationConnection : NSObject<AFNetworkAvailabilityObserver> {
  /* instance variables */
  NSXPCConnection *_connection;
  NSString *_lastUsedLanguage;
  NSSet *_knownOfflineInstalledLanguages;
  AFCallSiteInfo *_initiationCallSiteInfo;
  AFAudioPowerUpdater *_inputAudioPowerUpdater;
  BOOL _isCapturingSpeech;
  BOOL _hasActiveRequest;
  BOOL _isWaitingForAudioFile;
  BOOL _recognizingIncrementally;
  BOOL _shouldClassifyIntent;
  BOOL _shouldRecognizeCommands;
  NSObject<OS_dispatch_group> *_speechCallbackGroup;
  NSObject<OS_dispatch_queue> *_internalQueue;
  NSObject<OS_dispatch_source> *_timeoutTimer;
  NSObject<OS_dispatch_source> *_bufferTimer;
  BOOL _forceOfflineRecognition;
  AFSpeechRequestOptions *_stopOptions;
  NSMutableData *_buffer;
  double _audioStartTime;
  double _amountDataSent;
  BOOL _narrowband;
  NSString *_requestIdString;
  NSArray *_previouslyRecognizedPhrases;
  NSString *_onDeviceDictationUIInteractionIdentifier;
  AFInstanceContext *_instanceContext;
  AFAnalyticsEvent *_preheatEvent;
  AFAnalyticsTurnBasedInstrumentationContext *_intstrumentationContext;
  BOOL _isDetectingUtterances;
  NSMutableDictionary *_languagesLoggingInfo;
}

@property (weak, nonatomic) NSObject<AFDictationDelegate> *delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)getForcedOfflineDictationSupportedLanguagesWithCompletion:(id /* block */)completion;
+ (BOOL)languageDetectorIsEnabled;
+ (BOOL)dictationIsEnabled;
+ (BOOL)dictationIsSupportedForLanguageCode:(id)code error:(id *)error;
+ (void)fetchSupportedLanguageCodes:(id /* block */)codes;

/* instance methods */
- (void)preheatTestWithLanguage:(id)language options:(id)options;
- (void)startDictationWithSpeechFileAtURL:(id)url options:(id)options forLanguage:(id)language;
- (void)startDictationWithSpeechFileAtURL:(id)url isNarrowBand:(BOOL)band options:(id)options forLanguage:(id)language;
- (void)sendEngagementFeedback:(long long)feedback voiceQueryIdentifier:(id)identifier;
- (id)initWithInstanceContext:(id)context;
- (id)init;
- (void)dealloc;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)speech;
- (void)_dispatchAsync:(id /* block */)async;
- (void)_dispatchCallbackGroupBlock:(id /* block */)block;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellSpeechDelegateRecordingDidBeginWithOptions:(id)options;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidFail:(id)fail;
- (void)_tellSpeechDelegateDidRecognizePackage:(id)package;
- (void)_tellSpeechDelegateDidRecognizeFinalResultCandidatePackage:(id)package;
- (void)_tellSpeechDelegateDidRecognizeVoiceCommandCandidatePackage:(id)package nluResult:(id)result;
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)phrases rawPhrases:(id)phrases utterances:(id)utterances rawUtterances:(id)utterances nluResult:(id)result languageModel:(id)model correctionIdentifier:(id)identifier audioAnalytics:(id)analytics;
- (void)_delegateDidRecognizeSpeechTokens:(id)tokens nluResult:(id)result languageModel:(id)model delegate:(id)delegate;
- (void)_delegateDidRecognizePartialSpeechPackage:(id)package nluResult:(id)result languageModel:(id)model delegate:(id)delegate;
- (void)_tellSpeechDelegateDidRecognizePartialResult:(id)result;
- (void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)tokens nluResult:(id)result languageModel:(id)model;
- (void)_tellSpeechDelegateDidRecognizePartialSpeechPackage:(id)package nluResult:(id)result languageModel:(id)model;
- (void)_tellSpeechDelegateDidProcessAudioDuration:(double)duration;
- (void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)objects languageModel:(id)model;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)fail;
- (void)_tellSpeechDelegateSpeechRecognitionDidSucceed;
- (void)_tellSpeechDelegateAudioFileFinished:(id)finished error:(id)error;
- (void)_tellSpeechDelegateAvailabilityChanged;
- (void)_tellSpeechDelegateSearchResultsReceived:(id)received recognitionText:(id)text stable:(BOOL)stable final:(BOOL)final;
- (void)_tellSpeechDelegateLanguageDetected:(id)detected confidenceScores:(id)scores isConfident:(BOOL)confident;
- (void)_tellSpeechDelegateMultilingualSpeechRecognized:(id)recognized;
- (void)_tellSpeechDelegateLanguageDetectorDidFail:(id)fail;
- (void)_tellSpeechDelegateDidBeginLocalRecognitionWithModelInfo:(id)info;
- (void)_tellSpeechDelegateDidPauseRecognition;
- (void)_connectionClearedForInterruption:(BOOL)interruption;
- (void)_clearConnection;
- (void)_registerInvalidationHandlerForXPCConnection:(id)xpcconnection;
- (id)_connection;
- (id)_dictationService;
- (id)_dictationServiceWithErrorHandler:(id /* block */)handler;
- (void)_scheduleRequestTimeout;
- (void)_cancelRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_extendRequestTimeout;
- (void)_startInputAudioPowerUpdatesWithXPCWrapper:(id)xpcwrapper;
- (void)_stopInputAudioPowerUpdates;
- (BOOL)dictationIsAvailableForLanguage:(id)language;
- (BOOL)dictationIsAvailableForLanguage:(id)language synchronous:(BOOL)synchronous;
- (BOOL)forcedOfflineDictationIsAvailableForLanguage:(id)language;
- (BOOL)forcedOfflineDictationIsAvailableForLanguage:(id)language synchronous:(BOOL)synchronous;
- (void)_availabilityChanged;
- (void)networkAvailability:(id)availability isAvailable:(BOOL)available;
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)_willStartDictationWithLanguageCode:(id)code options:(id)options speechOptions:(id)options machAbsoluteTime:(unsigned long long)time;
- (void)_logRequestCompetionStatusWithEventType:(long long)type error:(id)error;
- (void)_LogUEIRequestCategorization:(int)categorization;
- (void)_willCancelDictation;
- (void)_willFailDictationWithError:(id)error;
- (void)_willCompleteDictation;
- (void)_addPreheatAnalyticsEvent;
- (void)_sendPendingAnalyticsEvents;
- (void)preheatForLanguageCode:(id)code;
- (void)preheat;
- (void)preheatWithRecordDeviceIdentifier:(id)identifier;
- (void)_setActivationTimeOnOptionsIfNecessary:(id)necessary;
- (id /* block */)startRecordingForPendingDictationWithLanguageCode:(id)code options:(id)options speechOptions:(id)options;
- (void)startDictationWithLanguageCode:(id)code options:(id)options speechOptions:(id)options;
- (void)startDictationWithLanguageCode:(id)code options:(id)options;
- (void)startRecordedAudioDictationWithOptions:(id)options forLanguage:(id)language;
- (void)startRecordedAudioDictationWithOptions:(id)options forLanguage:(id)language narrowband:(BOOL)narrowband;
- (void)startRecordedAudioDictationWithOptions:(id)options forLanguage:(id)language narrowband:(BOOL)narrowband forceSampling:(BOOL)sampling;
- (void)addRecordedSpeechSampleData:(id)data;
- (void)cancelSpeech;
- (void)stopSpeechWithOptions:(id)options;
- (void)_delayedStopSpeechWithOptions:(id)options;
- (void)stopSpeech;
- (void)updateSpeechOptions:(id)options;
- (void)sendSpeechCorrection:(id)correction forIdentifier:(id)identifier;
- (void)sendSpeechCorrection:(id)correction interactionIdentifier:(id)identifier;
- (void)sendUserSelectedAlternativeDictationLanguageCode:(id)code;
- (float)averagePower;
- (float)peakPower;
- (void)endSession;
- (void)requestOfflineAssistantSupportForLanguage:(id)language completion:(id /* block */)completion;
- (void)requestOfflineDictationSupportForLanguage:(id)language completion:(id /* block */)completion;
- (void)suppressLowStorageNotificationForLanguage:(id)language suppress:(BOOL)suppress;
- (void)_sendDataIfNeeded;
- (id)_dequeueAudioWithLength:(unsigned long long)length;
- (void)_updateBufferFlushTimerWithDelay:(double)delay;
- (void)_cancelBufferFlushTimer;
- (void)_cancelTimerClearBuffer;
- (void)reportIssueForError:(id)error eventType:(long long)type context:(id)context;
- (void)reportIssueForError:(id)error eventType:(long long)type subtype:(id)subtype context:(id)context;
- (void)pauseRecognition;
- (void)resumeRecognitionWithPrefixText:(id)text postfixText:(id)text selectedText:(id)text;
@end

#endif /* AFDictationConnection_h */
