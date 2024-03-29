//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSiriClientBehaviorMonitor_h
#define CSSiriClientBehaviorMonitor_h
@import Foundation;

@class CSAudioRecordContext, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSSiriClientBehaviorMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) BOOL isStreaming;
@property (retain, nonatomic) CSAudioRecordContext *audioRecordContext;
@property (retain, nonatomic) NSString *recordRoute;
@property (retain, nonatomic) NSString *deviceId;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (void)notifyFetchedSiriClientAudioStream:(id)stream successfully:(BOOL)successfully;
- (void)notifyPreparedSiriClientAudioStream:(id)stream successfully:(BOOL)successfully;
- (void)notifyWillStartStreamWithContext:(id)context option:(id)option withEventUUID:(id)uuid;
- (void)notifyDidStartStreamWithContext:(id)context successfully:(BOOL)successfully option:(id)option withEventUUID:(id)uuid;
- (void)notifyWillStopStream:(id)stream reason:(unsigned long long)reason withEventUUID:(id)uuid;
- (void)notifyDidStopStream:(id)stream withEventUUID:(id)uuid;
- (void)notifyActivateAudioSessionWithReason:(unsigned long long)reason;
- (void)notifyReleaseAudioSession;
- (void)notifyAudioDeviceInfoUpdated:(id)updated;
@end

#endif /* CSSiriClientBehaviorMonitor_h */
