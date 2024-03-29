//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBSDisplayLayoutPublisher_h
#define FBSDisplayLayoutPublisher_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"
#include "BSServiceConnectionListenerDelegate-Protocol.h"
#include "FBSDisplayConfiguration.h"
#include "FBSDisplayLayout.h"
#include "FBSDisplayLayoutPublishing-Protocol.h"

@class BSAtomicSignal, BSServiceConnectionListener, NSHashTable, NSMutableOrderedSet, NSMutableSet, NSString;
@protocol OS_xpc_object, [3@"NSObject<OS_dispatch_queue>"], [3@"NSObject<OS_xpc_object>"];

@interface FBSDisplayLayoutPublisher : NSObject<BSServiceConnectionListenerDelegate, FBSDisplayLayoutPublishing, BSInvalidatable> {
  /* instance variables */
  BSAtomicSignal *_invalidatedSignal;
  BSServiceConnectionListener *_listener;
  NSObject<OS_dispatch_queue> * _queuesByQOS[3];
  NSObject<OS_xpc_object> * _queues_xLayoutByQOS[3];
  NSMutableSet * _queues_connectionsByQOS[3];
  FBSDisplayLayout *_mutableLayout;
  NSMutableSet *_mutableElementKeys;
  NSHashTable *_observers;
  NSObject<OS_xpc_object> *_xLayout;
  NSMutableOrderedSet *_transitionReasons;
  unsigned long long _transitionsCount;
  BOOL _dirty;
}

@property (copy, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long backlightLevel;
@property (readonly, nonatomic) BOOL transitioning;
@property (readonly, nonatomic) FBSDisplayLayout *currentLayout;

/* class methods */
+ (id)publisherWithConfiguration:(id)configuration;

/* instance methods */
- (id)init;
- (id)_initWithConfiguration:(id)configuration;
- (void)activate;
- (void)invalidate;
- (id)addElement:(id)element;
- (BOOL)isTransitioning;
- (id)transitionAssertionWithReason:(id)reason;
- (void)addObserver:(id)observer;
- (void)removeObserver:(id)observer;
- (void)flush;
- (id)_addElement:(id)element forKey:(id)key;
- (void)listener:(id)listener didReceiveConnection:(id)connection withContext:(id)context;
@end

#endif /* FBSDisplayLayoutPublisher_h */
