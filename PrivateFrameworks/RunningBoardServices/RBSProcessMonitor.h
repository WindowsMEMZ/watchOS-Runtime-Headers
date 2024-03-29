//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 858.60.5.0.0
//
#ifndef RBSProcessMonitor_h
#define RBSProcessMonitor_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "RBSProcessMonitorConfiguration.h"
#include "RBSProcessMonitorConfiguring-Protocol.h"
#include "RBSServiceLocalProtocol-Protocol.h"

@class NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface RBSProcessMonitor : NSObject<RBSProcessMonitorConfiguring, NSCopying> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<RBSServiceLocalProtocol> *_service;
  BOOL _valid;
  BOOL _configuring;
  NSMutableDictionary *_stateByIdentity;
}

@property (readonly, nonatomic) RBSProcessMonitorConfiguration *configuration;
@property (readonly, nonatomic) unsigned long long events;
@property (readonly, nonatomic) unsigned int serviceClass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (readonly, copy, @dynamic, nonatomic) NSSet *states;

/* class methods */
+ (id)monitor;
+ (id)_monitorWithService:(id)service;
+ (id)monitorWithPredicate:(id)predicate updateHandler:(id /* block */)handler;
+ (id)monitorWithConfiguration:(id /* block */)configuration;
+ (id)_monitorWithService:(id)service configuration:(id /* block */)configuration;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)stateForIdentity:(id)identity;
- (void)updateConfiguration:(id /* block */)configuration;
- (id)description;
- (void)invalidate;
- (void)setPredicates:(id)predicates;
- (void)setStateDescriptor:(id)descriptor;
- (void)setUpdateHandler:(id /* block */)handler;
- (void)setPreventLaunchUpdateHandle:(id /* block */)handle;
- (void)_handleProcessStateChange:(id)change;
- (void)_handleExitEvent:(id)event;
- (void)_handlePreventLaunchUpdate:(id)update;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* RBSProcessMonitor_h */
