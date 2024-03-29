//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HDFitnessMachineStateTimers_h
#define HDFitnessMachineStateTimers_h
@import Foundation;

#include "HDFitnessMachineStateTimer.h"
#include "HDFitnessMachineStateTimersDelegate-Protocol.h"

@protocol OS_dispatch_queue;

@interface HDFitnessMachineStateTimers : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  HDFitnessMachineStateTimer *_fieldDetectTimer;
  HDFitnessMachineStateTimer *_tagReadTimer;
  HDFitnessMachineStateTimer *_machineIdentityVerificationTimer;
  HDFitnessMachineStateTimer *_userAcceptanceTimer;
  HDFitnessMachineStateTimer *_waitForMachineStartTimer;
  HDFitnessMachineStateTimer *_pauseTimer;
  HDFitnessMachineStateTimer *_disconnectTimer;
  HDFitnessMachineStateTimer *_retryConnectionTimer;
  HDFitnessMachineStateTimer *_mfaTimer;
}

@property (weak, nonatomic) NSObject<HDFitnessMachineStateTimersDelegate> *delegate;

/* instance methods */
- (id)initWithQueue:(id)queue delegate:(id)delegate;
- (void)dealloc;
- (void)cancelAllTimers;
- (void)beginFieldDetectTimeout;
- (void)cancelFieldDetectTimeout;
- (BOOL)isFieldDetectTimerValid;
- (void)beginTagReadTimeout;
- (void)cancelTagReadTimeout;
- (BOOL)isTagReadTimerValid;
- (void)beginMachineIdentityVerificationTimeout;
- (void)cancelMachineIdentityVerificationTimeout;
- (BOOL)isMachineIdentityVerificationTimerValid;
- (void)beginUserAcceptanceTimeout;
- (void)cancelUserAcceptanceTimeout;
- (BOOL)isUserAcceptanceTimerValid;
- (void)beginWaitForMachineStartTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (BOOL)isWaitForMachineStartTimerValid;
- (void)beginPauseTimeout;
- (void)cancelPauseTimeout;
- (BOOL)isPauseTimerValid;
- (void)beginDisconnectTimeout;
- (void)cancelDisconnectTimeout;
- (BOOL)isDisconnectTimerValid;
- (void)beginRetryConnectionTimeout;
- (void)cancelRetryConnectionTimeout;
- (BOOL)isRetryConnectionTimerValid;
- (void)beginMfaTimeout;
- (void)cancelMfaTimeout;
- (BOOL)isMfaTimerValid;
@end

#endif /* HDFitnessMachineStateTimers_h */
