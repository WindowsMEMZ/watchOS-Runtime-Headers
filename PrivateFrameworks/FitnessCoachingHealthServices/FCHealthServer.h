//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 138.2.0.0.0
//
#ifndef FCHealthServer_h
#define FCHealthServer_h
@import Foundation;

#include "HDStandardTaskServer.h"
#include "FCHealthProfileExtending-Protocol.h"

@class HDDaemonTransaction, NSUUID;

@interface FCHealthServer : HDStandardTaskServer {
  /* instance variables */
  HDDaemonTransaction *_daemonTransaction;
  NSObject<FCHealthProfileExtending> *_profileExtension;
  NSUUID *_taskUUID;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

/* class methods */
+ (id)requiredEntitlements;
+ (id)taskIdentifier;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)pluginMessage:(unsigned long long)message data:(id)data completionHandler:(id /* block */)handler;
- (void)handleRegisterGoalProgressConfigurationData:(id)data service:(id)service completion:(id /* block */)completion;
@end

#endif /* FCHealthServer_h */
