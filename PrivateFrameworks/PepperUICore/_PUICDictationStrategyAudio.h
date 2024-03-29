//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef _PUICDictationStrategyAudio_h
#define _PUICDictationStrategyAudio_h
@import Foundation;

#include "CKAudioRecorderDelegate-Protocol.h"
#include "_PUICDictationStrategy-Protocol.h"
#include "_PUICDictationStrategyDelegate-Protocol.h"

@class CKAudioRecorder, NSString, STSiriContext;

@interface _PUICDictationStrategyAudio : NSObject<CKAudioRecorderDelegate, _PUICDictationStrategy> {
  /* instance variables */
  CKAudioRecorder *_audioRecorder;
  BOOL _sentDidBeginRecordingNotification;
  float _averagePower;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<_PUICDictationStrategyDelegate> *delegate;
@property (readonly, nonatomic) BOOL isListening;
@property (readonly, nonatomic) BOOL didCancel;
@property (readonly, nonatomic) float audioAveragePower;
@property (retain, nonatomic) NSString *languageCode;
@property (retain, nonatomic) STSiriContext *context;
@property (nonatomic) BOOL isTinker;

/* class methods */
+ (BOOL)isEnabled;
+ (BOOL)isDisabledWithoutNetworkConnectionForLanguage:(id)language;
+ (BOOL)usesAssistantDictationConnection;
+ (id)analyticsName;

/* instance methods */
- (void)startPrelisteningForDelegate:(id)delegate;
- (void)cancelPrelistening;
- (void)startListeningForDelegate:(id)delegate;
- (void)finishListening:(id /* block */)listening;
- (void)cancelListening;
- (void)audioRecorderRecordingDidChange:(id)change;
- (void)audioRecorderDidStartRecording:(id)recording;
- (void)audioRecorderRecordingDidFail:(id)fail;
- (void)audioRecorderDidUpdateAveragePower:(float)power;
@end

#endif /* _PUICDictationStrategyAudio_h */
