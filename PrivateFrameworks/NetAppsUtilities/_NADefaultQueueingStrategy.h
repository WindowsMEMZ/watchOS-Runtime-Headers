//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 93.0.0.0.0
//
#ifndef _NADefaultQueueingStrategy_h
#define _NADefaultQueueingStrategy_h
@import Foundation;

#include "NAQueueingStrategy-Protocol.h"

@class NSString;

@interface _NADefaultQueueingStrategy : NSObject<NAQueueingStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)enqueueObject:(id)object buffer:(id)buffer;
@end

#endif /* _NADefaultQueueingStrategy_h */
