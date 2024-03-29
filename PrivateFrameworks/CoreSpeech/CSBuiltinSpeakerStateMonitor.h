//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSBuiltinSpeakerStateMonitor_h
#define CSBuiltinSpeakerStateMonitor_h
@import Foundation;

#include "CSEventMonitor.h"
#include "CSAudioServerCrashMonitorDelegate-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface CSBuiltinSpeakerStateMonitor : CSEventMonitor<CSAudioServerCrashMonitorDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) unsigned long long builtInSpeakerState;
@property (nonatomic) BOOL isSpeakerMuted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (BOOL)_getIsSpeakerMutedDefaultVal;
- (void)_fetchSpeakerStateMutedInfo;
- (void)_fetchSpeakerStateActiveInfo;
- (unsigned long long)currentBuiltinSpeakerState;
- (BOOL)isBuiltinSpeakerMuted;
- (void)_startMonitoringWithQueue:(id)queue;
- (void)_stopMonitoring;
- (void)_didReceiveBuiltinSpeakerStateChangeNotification:(unsigned long long)notification;
- (void)_notifyObserver:(id)observer withBuiltinSpeakerState:(unsigned long long)state;
- (void)_didReceiveSpeakerMuteStateChangeNotification:(BOOL)notification;
- (void)_notifyObserver:(id)observer isSpeakerMuted:(BOOL)muted;
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)restart;
@end

#endif /* CSBuiltinSpeakerStateMonitor_h */
