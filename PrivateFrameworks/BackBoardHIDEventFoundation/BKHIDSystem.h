//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKHIDSystem_h
#define BKHIDSystem_h
@import Foundation;

#include "BKHIDClientConnectionManager.h"
#include "BKHIDEventBufferingHIDSystem-Protocol.h"
#include "BKHIDEventDeliveryManager.h"
#include "BKHIDEventProcessor-Protocol.h"
#include "BKHIDEventSenderCache.h"
#include "BKHIDSystemInterfacing-Protocol.h"

@class NSString;
@protocol BKHIDDisplayChangeObserving, BKHIDEventDispatcherProviding, BKHIDEventProcessor><BKHIDBufferedEventProcessor, BKHIDSystemDelegate, OS_dispatch_mach, OS_dispatch_queue;

@interface BKHIDSystem : NSObject<BKHIDEventProcessor, BKHIDEventBufferingHIDSystem, BKHIDSystemInterfacing> {
  /* instance variables */
  struct __IOHIDEventSystem * _HIDEventSystem;
  struct __IOHIDEventSystemClient * _HIDEventSystemClient;
  NSObject<OS_dispatch_queue> *_gsEventQueue;
}

@property BOOL fullyInitialized;
@property (retain) NSObject<OS_dispatch_mach> *HIDSystemChannel;
@property (readonly, nonatomic) NSObject<BKHIDEventProcessor><BKHIDBufferedEventProcessor> *eventProcessor;
@property (retain, nonatomic) NSObject<BKHIDDisplayChangeObserving> *mainDisplayObserver;
@property (retain, nonatomic) NSObject<BKHIDEventDispatcherProviding> *dispatcherProvider;
@property (weak) NSObject<BKHIDSystemDelegate> *delegate;
@property (readonly) BKHIDEventDeliveryManager *deliveryManager;
@property (readonly) BKHIDEventSenderCache *senderCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BKHIDClientConnectionManager *clientConnectionManager;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)dealloc;
- (void)startHIDSystem;
- (void)startEventRouting;
- (void)startEventProcessor:(id)processor mainDisplayObserver:(id)observer deliveryManager:(id)manager dispatcherProvider:(id)provider;
- (void)startServerWithChannel:(id)channel;
- (id)systemPropertyForKey:(id)key;
- (void)setSystemProperty:(id)property forKey:(id)key;
- (void)injectHIDEvent:(struct __IOHIDEvent *)hidevent;
- (void)injectGSEvent:(struct __GSEvent *)gsevent;
- (struct __IOHIDEvent *)systemEventOfType:(unsigned int)type matchingEvent:(struct __IOHIDEvent *)event options:(unsigned int)options;
- (void)_beginHandlingEvents;
- (void)_asyncScheduleWithHIDEventQuue:(id /* block */)quue;
- (id)IOHIDServicesMatching:(id)matching;
- (void)registerIOHIDServicesCallback:(undefined *)callback matchingDictionary:(id)dictionary target:(void *)target refCon:(void *)con;
- (void)unregisterIOHIDServicesCallback:(undefined *)callback matchingDictionary:(id)dictionary target:(void *)target refCon:(void *)con;
- (long long)processEvent:(inout struct __IOHIDEvent * *)event sender:(id)sender dispatcher:(id)dispatcher;
- (void)requestBufferReevaluationWithContext:(id)context;
- (void)buffer:(id)buffer drainEvent:(struct __IOHIDEvent *)event withContext:(id)context sender:(id)sender sequence:(id)sequence toResolution:(id)resolution;
- (void)bufferWillBeginDraining:(id)draining;
- (void)bufferDidFinishDraining:(id)draining;
- (void)bufferingDidAddNewBuffers:(id)buffers;
- (BOOL)isFullyInitialized;
@end

#endif /* BKHIDSystem_h */
