//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 182.1.2.0.0
//
#ifndef PUConnectionUnlockClient_h
#define PUConnectionUnlockClient_h
@import Foundation;

#include "PUConnection.h"
#include "PUUnlockClient-Protocol.h"

@class NSString;

@interface PUConnectionUnlockClient : NSObject<PUUnlockClient>

@property (weak, nonatomic) PUConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (void)didPairForUnlock:(BOOL)unlock error:(id)error;
- (void)didUnpairForUnlock:(BOOL)unlock error:(id)error;
- (void)didEnableOnlyRemoteUnlock:(BOOL)unlock error:(id)error;
- (void)didDisableOnlyRemoteUnlock:(BOOL)unlock error:(id)error;
- (void)remoteDeviceDidCompleteRemoteAction:(BOOL)action remoteDeviceState:(id)state error:(id)error;
- (void)remoteDeviceDidUnlock;
- (void)remoteDeviceDidRemoveLockout:(BOOL)lockout error:(id)error;
- (void)didGetRemoteDeviceState:(id)state error:(id)error;
@end

#endif /* PUConnectionUnlockClient_h */
