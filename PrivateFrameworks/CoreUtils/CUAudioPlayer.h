//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 730.8.0.0.0
//
#ifndef CUAudioPlayer_h
#define CUAudioPlayer_h
@import Foundation;

#include "AVAudioPlayerDelegate-Protocol.h"
#include "CUAudioPlayer.h"
#include "CUAudioRequest.h"

@class AVAudioSession, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CUAudioPlayer : NSObject<AVAudioPlayerDelegate> {
  /* instance variables */
  AVAudioSession *_audioSession;
  CUAudioRequest *_currentRequest;
  BOOL _invalidateCalled;
  BOOL _invalidateDone;
  unsigned int _invalidateFlags;
  NSMutableArray *_playRequests;
  NSMutableDictionary *_preparedRequests;
  CUAudioPlayer *_selfRef;
  struct LogCategory { int x0; int x1; char * x2; unsigned int x3; char * x4; char * x5; int x6; struct LogCategory * x7; struct LogOutput * x8; struct LogOutput * x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char * x14; struct LogCategoryPrivate * x15; } * _ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) unsigned int enableSmartRouting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)activate;
- (void)_activate;
- (void)invalidateWithFlags:(unsigned int)flags;
- (void)_invalidateWithFlags:(unsigned int)flags;
- (void)_invalidated;
- (void)playPreparedIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)_playPreparedIdentifier:(id)identifier completion:(id /* block */)completion;
- (void)playURL:(id)url completion:(id /* block */)completion;
- (void)playURL:(id)url loop:(BOOL)loop completion:(id /* block */)completion;
- (void)_playURL:(id)url loop:(BOOL)loop completion:(id /* block */)completion;
- (void)prepareURL:(id)url identifier:(id *)identifier completion:(id /* block */)completion;
- (void)_prepareURL:(id)url identifier:(id)identifier completion:(id /* block */)completion;
- (void)_processRequests;
- (void)_completeRequest:(id)request error:(id)error;
- (void)_abortRequestsWithError:(id)error;
- (void)audioPlayerDecodeErrorDidOccur:(id)occur error:(id)error;
- (void)audioPlayerDidFinishPlaying:(id)playing successfully:(BOOL)successfully;
- (void)audioSessionInterrupted:(id)interrupted;
@end

#endif /* CUAudioPlayer_h */
