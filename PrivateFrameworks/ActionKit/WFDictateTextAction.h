//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFDictateTextAction_h
#define WFDictateTextAction_h
@import Foundation;

#include "WFAction.h"
#include "AFDictationDelegate-Protocol.h"
#include "WFDictateTextActionUserInterface-Protocol.h"

@class AFDictationConnection, NSString;

@interface WFDictateTextAction : WFAction<AFDictationDelegate>

@property (retain, nonatomic) NSObject<WFDictateTextActionUserInterface> *actionUserInterface;
@property (retain, nonatomic) AFDictationConnection *dictationConnection;
@property (copy, nonatomic) NSString *latestTranscription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)userInterfaceProtocol;
+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

/* instance methods */
- (void)runAsynchronouslyWithInput:(id)input;
- (void)runWithRemoteUserInterface:(id)interface locale:(id)locale stopListeningValue:(id)value;
- (void)runWithSiriUserInterface:(id)interface input:(id)input;
- (void)cancel;
- (void)stopListening;
- (void)finishRunningWithError:(id)error;
- (id)recognitionError;
- (void)dictationConnection:(id)connection speechRecordingDidFail:(id)fail;
- (void)dictationConnection:(id)connection speechRecognitionDidFail:(id)fail;
- (void)dictationConnection:(id)connection didRecognizeTokens:(id)tokens languageModel:(id)model;
- (void)dictationConnection:(id)connection didRecognizePackage:(id)package;
- (id)contentDestinationWithError:(id *)error;
- (id)smartPromptWithContentDescription:(id)description contentDestination:(id)destination workflowName:(id)name;
@end

#endif /* WFDictateTextAction_h */
