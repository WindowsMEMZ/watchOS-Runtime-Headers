//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSDisplayLayoutMonitor_h
#define FBSDisplayLayoutMonitor_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"
#include "FBSDisplayLayout.h"
#include "_FBSDisplayLayoutServiceAssertion.h"

@class BSServiceConnectionEndpoint, NSMapTable, NSString;

@interface FBSDisplayLayoutMonitor : NSObject<BSInvalidatable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  _FBSDisplayLayoutServiceAssertion *_lock_handlerAssertion;
  BOOL _lock_invalidated;
  BSServiceConnectionEndpoint *_deprecated_endpoint;
  id /* block */ _lock_deprecated_handler;
  NSMapTable *_lock_deprecated_observerAssertions;
  char _deprecated_qos;
  long long _deprecated_displayType;
  BOOL _deprecated_singleton;
  BOOL _deprecated_mutable;
}

@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)monitorWithConfiguration:(id)configuration;
+ (id)serviceIdentifier;
+ (id)mainDisplayInstanceIdentifier;
+ (id)interface;
+ (id)_endpointForDisplayType:(long long)type;
+ (id)sharedMonitorForDisplayType:(long long)type;

/* instance methods */
- (id)init;
- (id)_initWithConfiguration:(id)configuration singleton:(BOOL)singleton needsDefaultPriority:(BOOL)priority mutable:(BOOL)mutable displayType:(long long)type mutableHandler:(id /* block */)handler;
- (void)dealloc;
- (void)invalidate;
- (id)initWithDisplayType:(long long)type;
- (id)initWithDisplayType:(long long)type handler:(id /* block */)handler;
- (id)initWithDisplayType:(long long)type qualityOfService:(unsigned long long)service handler:(id /* block */)handler;
- (long long)displayType;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)handler;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (unsigned long long)qualityOfService;
@end

#endif /* FBSDisplayLayoutMonitor_h */
