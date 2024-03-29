//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 182.1.2.0.0
//
#ifndef PUConnection_h
#define PUConnection_h
@import Foundation;

#include "PUConnectionUnlockClient.h"

@class NSXPCConnection;
@protocol OS_dispatch_queue, PUConnectionDelegate;

@interface PUConnection : NSObject {
  /* instance variables */
  NSXPCConnection *_serverConnection;
  NSObject<OS_dispatch_queue> *_serverConnectionQueue;
  NSObject<OS_dispatch_queue> *_delegateQueue;
  PUConnectionUnlockClient *_unlockClient;
}

@property (copy, nonatomic) id /* block */ remoteDeviceRemoveLockoutHandler;
@property (weak) NSObject<PUConnectionDelegate> *delegate;

/* class methods */
+ (id)serverInterface;
+ (id)clientInterface;
+ (void)syncPasscodeState;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (id)init;
- (const char *)queueNameWithSuffix:(id)suffix;
- (void)dealloc;
- (id)serverConnection;
- (void)setServerConnection:(id)connection;
- (void)pairForUnlockWithPasscode:(id)passcode;
- (void)unpairForUnlock;
- (void)enableOnlyRemoteUnlockWithPasscode:(id)passcode;
- (void)disableOnlyRemoteUnlock;
- (void)requestRemoteDeviceRemoteAction:(long long)action type:(long long)type;
- (void)requestRemoteDeviceUnlockNotification;
- (void)requestRemoteDeviceRemoveLockout:(id /* block */)lockout;
- (void)requestDeviceSetWristDetectionDisabled:(BOOL)disabled completion:(id /* block */)completion;
- (void)getRemoteDeviceState:(id /* block */)state;
- (void)queryRemoteDeviceState:(id /* block */)state;
- (id)delegateIfRespondsToSelector:(SEL)selector;
- (void)didPairForUnlock:(BOOL)unlock error:(id)error;
- (void)didUnpairForUnlock:(BOOL)unlock error:(id)error;
- (void)didEnableOnlyRemoteUnlock:(BOOL)unlock error:(id)error;
- (void)didDisableOnlyRemoteUnlock:(BOOL)unlock error:(id)error;
- (void)remoteDeviceDidCompleteRemoteAction:(BOOL)action remoteDeviceState:(id)state error:(id)error;
- (void)remoteDeviceDidUnlock;
- (void)didGetRemoteDeviceState:(id)state error:(id)error;
- (void)remoteDeviceDidRemoveLockout:(BOOL)lockout error:(id)error;
@end

#endif /* PUConnection_h */
