//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1880.5.0.0.0
//
#ifndef NLMindfulnessDNDServer_h
#define NLMindfulnessDNDServer_h
@import Foundation;

#include "HDStandardTaskServer.h"

@class HDDaemonTransaction, NLMindfulnessDNDAssertionConfiguration, NLNanoHealthProfileExtension, NSUUID, RBSProcessHandle;
@protocol OS_dispatch_queue;

@interface NLMindfulnessDNDServer : HDStandardTaskServer {
  /* instance variables */
  NLMindfulnessDNDAssertionConfiguration *_configuration;
  HDDaemonTransaction *_daemonTransaction;
  NSObject<OS_dispatch_queue> *_dispatchQueue;
  RBSProcessHandle *_processHandle;
  NLNanoHealthProfileExtension *_profileExtension;
  NSUUID *_taskUUID;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

/* class methods */
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (Class)configurationClass;
+ (BOOL)validateConfiguration:(id)configuration client:(id)client error:(id *)error;

/* instance methods */
- (id)initWithUUID:(id)uuid configuration:(id)configuration client:(id)client delegate:(id)delegate;
- (void)dealloc;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)connectionInvalidated;
- (void)remote_acquireAssertionWithCompetionHandler:(id /* block */)handler;
- (void)remote_pauseWithCompletionHandler:(id /* block */)handler;
- (void)remote_resumeWithCompletionHandler:(id /* block */)handler;
- (void)remote_stopWithCompletionHandler:(id /* block */)handler;
- (void)_stopWithCompletionHandler:(id /* block */)handler;
- (void)_acquireTransaction;
- (void)_releaseTransaction;
- (unsigned long long)_biomeSessionTypeForSessionType:(unsigned long long)type;
@end

#endif /* NLMindfulnessDNDServer_h */
