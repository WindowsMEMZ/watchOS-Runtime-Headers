//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.21.3.0.0
//
#ifndef CSSiriAudioPlaybackService_h
#define CSSiriAudioPlaybackService_h
@import Foundation;

#include "AFAudioPlaybackService-Protocol.h"
#include "AFMemoryPressureListening-Protocol.h"
#include "CSAudioSessionController.h"
#include "CSAudioSessionControllerDelegate-Protocol.h"

@class AVAudioSession, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CSSiriAudioPlaybackService : NSObject<AFMemoryPressureListening, CSAudioSessionControllerDelegate, AFAudioPlaybackService> {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSHashTable *_listeners;
  NSMutableDictionary *_activeSessionsByRequest;
  NSMutableDictionary *_reusableSessionsByRequest;
  unsigned int _audioSessionID;
  AVAudioSession *_audioSession;
  CSAudioSessionController *_audioSessionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedService;

/* instance methods */
- (id)initWithAudioSessionController:(id)controller;
- (void)startRequest:(id)request options:(unsigned long long)options preparationHandler:(id /* block */)handler executionHandler:(id /* block */)handler finalizationHandler:(id /* block */)handler;
- (void)addListener:(id)listener;
- (void)removeListener:(id)listener;
- (void)removeAllListeners;
- (void)prewarmRequest:(id)request completion:(id /* block */)completion;
- (void)startRequest:(id)request options:(unsigned long long)options completion:(id /* block */)completion;
- (void)stopRequest:(id)request immediately:(BOOL)immediately;
- (void)stopAllRequests:(BOOL)requests completion:(id /* block */)completion;
- (void)stopAllRequestsSynchronously;
- (void)_prewarmRequest:(id)request completion:(id /* block */)completion;
- (void)_startRequest:(id)request options:(unsigned long long)options preparationHandler:(id /* block */)handler executionHandler:(id /* block */)handler finalizationHandler:(id /* block */)handler;
- (void)_handlePreparationForSession:(id)session;
- (void)_handleExecutionForSession:(id)session;
- (void)_handleFinalizationForSession:(id)session error:(id)error;
- (void)_stopRequest:(id)request immediately:(BOOL)immediately;
- (void)_stopAllRequests:(BOOL)requests completion:(id /* block */)completion;
- (void)_stopAllRequestsSynchronously;
- (void)_invalidate;
- (void)_enumerateListenersUsingBlock:(id /* block */)block;
- (void)_evictAllReusableSessionsForReason:(id)reason;
- (unsigned int)_audioSessionID;
- (void)_setAudioSessionID:(unsigned int)id;
- (id)_audioSession;
- (id)_createAudioPlaybackSessionWithRequest:(id)request options:(unsigned long long)options;
- (void)audioSessionController:(id)controller didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)info;
- (void)audioSessionController:(id)controller didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)info;
- (void)audioSessionController:(id)controller didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)info;
- (void)audioSessionController:(id)controller didReceiveAudioSessionOwnerLostNotification:(id)notification;
- (void)audioSessionController:(id)controller didReceiveAudioSessionOwnerResetNotification:(id)notification;
- (void)memoryPressureObserver:(id)observer didChangeFromCondition:(long long)condition toCondition:(long long)condition;
@end

#endif /* CSSiriAudioPlaybackService_h */
