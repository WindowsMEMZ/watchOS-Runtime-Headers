//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKHIDPrimaryEventProcessor_h
#define BKHIDPrimaryEventProcessor_h
@import Foundation;

#include "BKHIDBufferedEventProcessor-Protocol.h"
#include "BKHIDEventProcessor-Protocol.h"

@class NSSet, NSString;

@interface BKHIDPrimaryEventProcessor : NSObject<BKHIDEventProcessor, BKHIDBufferedEventProcessor> {
  /* instance variables */
  NSArray * _subProcessors[41];
  NSObject<BKHIDEventProcessor> *_defaultProcessor;
  NSArray * _bufferedSubProcessors[41];
  NSSet *_allBufferedEventProcessors;
  NSObject<BKHIDBufferedEventProcessor> *_defaultBufferedEventProcessor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSubProcessors:(id x[41])processors defaultProcessor:(id)processor;
- (long long)processEvent:(inout struct __IOHIDEvent * *)event sender:(id)sender dispatcher:(id)dispatcher;
- (void)conformsToBKHIDBufferedEventProcessor;
- (long long)processEvent:(inout struct __IOHIDEvent * *)event withContext:(id)context buffer:(id)buffer sequence:(id)sequence sender:(id)sender dispatcher:(id)dispatcher resolution:(id)resolution;
- (void)postEvent:(struct __IOHIDEvent *)event withContext:(id)context toResolution:(id)resolution fromSequence:(id)sequence;
- (void)bufferingDidAddNewBuffers:(id)buffers;
- (void)bufferWillBeginDraining:(id)draining;
- (void)bufferDidEndDraining:(id)draining;
- (id)_eventProcessorsForEventType:(unsigned int)type;
@end

#endif /* BKHIDPrimaryEventProcessor_h */
