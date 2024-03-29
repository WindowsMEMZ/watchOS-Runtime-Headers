//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKHIDEventSenderCache_h
#define BKHIDEventSenderCache_h
@import Foundation;

#include "BKIOHIDServiceDisappearanceObserver-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface BKHIDEventSenderCache : NSObject<BKIOHIDServiceDisappearanceObserver> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *senderIDToSenderInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithQueue:(id)queue;
- (void)serviceDidDisappear:(id)disappear;
- (void)sync;
- (id)senderInfoForSenderID:(unsigned long long)id;
- (void)addSenderInfo:(id)info forSenderID:(unsigned long long)id;
- (void)addSenderInfo:(id)info;
- (void)removeSenderInfo:(id)info;
@end

#endif /* BKHIDEventSenderCache_h */
