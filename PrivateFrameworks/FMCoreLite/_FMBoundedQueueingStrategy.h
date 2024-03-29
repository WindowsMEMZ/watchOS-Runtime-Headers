//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 210.0.0.0.0
//
#ifndef _FMBoundedQueueingStrategy_h
#define _FMBoundedQueueingStrategy_h
@import Foundation;

#include "FMQueueingStrategy-Protocol.h"

@class NSString;

@interface _FMBoundedQueueingStrategy : NSObject<FMQueueingStrategy> {
  /* instance variables */
  unsigned long long _capacity;
  id /* block */ _overflowHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithCapacity:(unsigned long long)capacity;
- (id)initWithCapacity:(unsigned long long)capacity overflowHandler:(id /* block */)handler;
- (void)enqueueObject:(id)object buffer:(id)buffer;
@end

#endif /* _FMBoundedQueueingStrategy_h */
