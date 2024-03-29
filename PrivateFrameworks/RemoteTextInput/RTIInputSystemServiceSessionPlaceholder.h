//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 139.203.0.0.0
//
#ifndef RTIInputSystemServiceSessionPlaceholder_h
#define RTIInputSystemServiceSessionPlaceholder_h
@import Foundation;

#include "RTIInputSystemServiceSession.h"

@interface RTIInputSystemServiceSessionPlaceholder : RTIInputSystemServiceSession
/* class methods */
+ (id)placeholderServiceSessionWithIdentifier:(id)identifier traits:(id)traits state:(id)state;

/* instance methods */
- (id)initWithConnection:(id)connection;
- (id)initWithIdentifier:(id)identifier traits:(id)traits state:(id)state;
- (int)pid;
- (id)bundleIdentifier;
- (id)valueForEntitlement:(id)entitlement;
- (void)didInitializeWithConnection:(id)connection;
- (void)_killConnectionWithCallback;
- (void)_updateAppIdsFromConnectionOnInternalQueueWithCompletionHandler:(id /* block */)handler;
- (void)flushOperations;
- (void)flushOperationsWithResultHandler:(id /* block */)handler;
@end

#endif /* RTIInputSystemServiceSessionPlaceholder_h */
