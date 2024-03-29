//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3302.23.5.2.1
//
#ifndef AFAudioPowerUpdater_h
#define AFAudioPowerUpdater_h
@import Foundation;

#include "AFAudioPowerProviding-Protocol.h"
#include "AFAudioPowerUpdaterDelegate-Protocol.h"

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFAudioPowerUpdater : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSObject<OS_dispatch_source> *_timer;
  NSObject<AFAudioPowerUpdaterDelegate> *_delegate;
  void * _sharedMemory;
  float _averagePower;
  float _peakPower;
}

@property (readonly, nonatomic) NSObject<AFAudioPowerProviding> *provider;
@property (readonly, nonatomic) long long frequency;

/* instance methods */
- (id)initWithProvider:(id)provider queue:(id)queue frequency:(long long)frequency delegate:(id)delegate;
- (void)dealloc;
- (void)beginUpdate;
- (void)getPowerWithCompletion:(id /* block */)completion;
- (void)endUpdate;
- (void)invalidate;
- (void)createNewXPCWrapperWithCompletion:(id /* block */)completion;
- (void)_beginUpdate;
- (void)_endUpdate;
- (void)_timerFired;
- (void)_getPowerWithCompletion:(id /* block */)completion;
- (void)_updatePowerWithAveragePower:(float)power andPeakPower:(float)power;
- (void)_invalidate;
- (BOOL)_createSharedMemory;
- (id)_createSharedMemoryXPCObject;
- (void)_writeSharedMemoryWithAveragePower:(float)power peakPower:(float)power;
- (void)_destroySharedMemory;
- (void)_createNewXPCWrapperWithCompletion:(id /* block */)completion;
- (id)_createNewXPCWrapper;
- (float)_unsafeAveragePower;
- (float)_unsafePeakPower;
@end

#endif /* AFAudioPowerUpdater_h */
