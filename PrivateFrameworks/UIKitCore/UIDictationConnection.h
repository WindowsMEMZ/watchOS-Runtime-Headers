//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 7209.1.301.0.0
//
#ifndef UIDictationConnection_h
#define UIDictationConnection_h
@import Foundation;

#include "AFDictationDelegate-Protocol.h"
#include "UIDictationConnectionDelegate-Protocol.h"
#include "UIDictationConnectionTokenFilterProtocol-Protocol.h"

@class AFDictationConnection, AFDictationOptions, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface UIDictationConnection : NSObject<AFDictationDelegate>

@property (retain, nonatomic) AFDictationOptions *dictationOptions;
@property (retain, nonatomic) AFDictationConnection *connection;
@property (nonatomic) BOOL offlineOnly;
@property (nonatomic) BOOL ignoreSpeechRecognitionResults;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *analyticsQueue;
@property (copy, nonatomic) NSString *lastUsedPrimaryLanguage;
@property (copy, nonatomic) NSString *lastUsedDetectedLanguage;
@property (retain, nonatomic) NSMutableArray *lastUsedTopLanguages;
@property (nonatomic) BOOL lowConfidenceAboutLanguageDetection;
@property (nonatomic) unsigned int charBeforeInsertionPointOnDictationStart;
@property (nonatomic) unsigned int charAfterInsertionPointOnDictationStart;
@property (retain, nonatomic) NSMutableDictionary *lastReceivedPartials;
@property (weak, nonatomic) NSObject<UIDictationConnectionDelegate> *delegate;
@property (weak, nonatomic) NSObject<UIDictationConnectionTokenFilterProtocol> *tokenFilter;
@property (nonatomic) BOOL receivedMultilingualResultsCommand;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)_log;
+ (id)analytics;
+ (BOOL)isDictationAvailable;
+ (BOOL)dictationIsSupportedForLanguageCode:(id)code error:(id *)error;
+ (void)cacheSupportedDictationLanguages;
+ (BOOL)dictationRestricted;
+ (void)afDelegate:(id)delegate didReceiveSearchResults:(id)results recognizedText:(id)text stable:(BOOL)stable final:(BOOL)final;
+ (void)_updateFromGlobalOptions:(id)options;
+ (id)interpretationFromSpeechTokens:(id)tokens startIndex:(unsigned long long)index filterBlock:(id /* block */)block;
+ (BOOL)hasSpeechRecognitionPauseAckPhrases:(id)phrases;

/* instance methods */
- (void)beginAvailabilityMonitoring;
- (void)cancelAvailabilityMonitoring;
- (void)restartDictation;
- (BOOL)dictationIsAvailableForLanguage:(id)language;
- (void)sendSpeechCorrection:(id)correction forIdentifier:(id)identifier;
- (void)sendSpeechCorrection:(id)correction interactionIdentifier:(id)identifier;
- (float)averagePower;
- (void)endSession;
- (void)pauseSpeechRecognition;
- (void)resumeSpeechRecognitionWithPrefixText:(id)text postfixText:(id)text selectedText:(id)text;
- (void)suppressLowStorageNotificationForLanguage:(id)language suppress:(BOOL)suppress;
- (void)requestOfflineDictationSupportForLanguage:(id)language completion:(id /* block */)completion;
- (id)languageDetectionUserContext;
- (id)_dictationOptions:(id)options;
- (long long)speechEventTypeForDictationActivationType:(unsigned long long)type;
- (id)_speechOptions:(id)options;
- (id)_createConnectionOptions;
- (void)start;
- (void)startForFileAtURL:(id)url forLanguage:(id)language;
- (id)_initializeWithOptions:(id)options;
- (void)_startWithOptions:(id)options;
- (void)stopSpeech:(id)speech activationType:(unsigned long long)type result:(id)result suppressAlert:(BOOL)alert;
- (void)cancelSpeech;
- (void)logDidShowAlternatives:(id)alternatives correctionIdentifier:(id)identifier interactionIdentifier:(id)identifier;
- (void)logDidSelectAlternative:(id)alternative correctionIdentifier:(id)identifier interactionIdentifier:(id)identifier;
- (void)logDidAcceptDictationResult:(id)result reason:(id)reason result:(id)result correctionIdentifier:(id)identifier;
- (void)logDidAcceptReplacement:(id)replacement replacementLanguageCode:(id)code originalText:(id)text correctionIdentifier:(id)identifier interactionIdentifier:(id)identifier;
- (void)synthesizeDidRecognizeTokens:(id)tokens languageModel:(id)model;
- (void)synthesizeDidRecognizePhrases:(id)phrases languageModel:(id)model correctionIdentifier:(id)identifier;
- (void)preheat;
- (BOOL)isSecureInput;
- (void)dictationConnection:(id)connection didDetectLanguage:(id)language confidenceScores:(id)scores isConfident:(BOOL)confident;
- (void)dictationConnection:(id)connection languageDetectorFailedWithError:(id)error;
- (void)dictationConnectionSpeechRecordingWillBegin:(id)begin;
- (void)dictationConnectionSpeechRecordingDidBegin:(id)begin;
- (void)dictationConnection:(id)connection speechRecordingDidBeginWithOptions:(id)options;
- (void)dictationConnection:(id)connection didBeginLocalRecognitionWithModelInfo:(id)info;
- (void)dictationConnection:(id)connection speechRecordingDidFail:(id)fail;
- (void)dictationConnection:(id)connection speechRecognitionDidFail:(id)fail;
- (void)dictationConnectionSpeechRecordingDidEnd:(id)end;
- (void)dictationConnectionSpeechRecordingDidCancel:(id)cancel;
- (void)dictationConnection:(id)connection didRecognizeTokens:(id)tokens languageModel:(id)model;
- (id)dictationSerializedResultWithPhrases:(id)phrases languageModel:(id)model;
- (void)dictationConnection:(id)connection didRecognizePhrases:(id)phrases languageModel:(id)model correctionIdentifier:(id)identifier;
- (void)dictationConnection:(id)connection didRecognizePartialPackage:(id)package nluResult:(id)result languageModel:(id)model;
- (void)dictationConnection:(id)connection didRecognizeMultilingualSpeech:(id)speech;
- (void)dictationConnectionSpeechRecognitionDidSucceed:(id)succeed;
- (void)dictationConnnectionDidChangeAvailability:(id)availability;
- (void)dictationConnection:(id)connection didReceiveSearchResults:(id)results recognizedText:(id)text stable:(BOOL)stable final:(BOOL)final;
- (void)dictationConnectionDidPauseRecognition:(id)recognition;
- (void)dictationConnection:(id)connection didRecognizeFinalResultCandidatePackage:(id)package;
- (void)dictationConnection:(id)connection didRecognizeVoiceCommandCandidatePackage:(id)package nluResult:(id)result;
@end

#endif /* UIDictationConnection_h */
