//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHAssertionAttributeTimer_h
#define BLSHAssertionAttributeTimer_h
@import Foundation;

#include "BLSAssertionServiceResponding-Protocol.h"
#include "BLSHAssertionAttributeHandlerService-Protocol.h"
#include "BLSHLocalAssertionAttributeHandlerEntry-Protocol.h"
#include "BSCancellable-Protocol.h"
#include "BSInvalidatable-Protocol.h"

@class BLSDurationAttribute, NSString;

@interface BLSHAssertionAttributeTimer : NSObject<BLSHLocalAssertionAttributeHandlerEntry, BSInvalidatable, BSCancellable> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSObject<BSInvalidatable> *_timer;
  BOOL _invalidated;
}

@property (readonly, weak, nonatomic) BLSDurationAttribute *attribute;
@property (readonly, weak, nonatomic) NSObject<BLSAssertionServiceResponding> *assertion;
@property (readonly, weak, nonatomic) NSObject<BLSHAssertionAttributeHandlerService> *service;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)activateForAttribute:(id)attribute fromAssertion:(id)assertion forService:(id)service attributeHandler:(id)handler;

/* instance methods */
- (id)initForAttribute:(id)attribute fromAssertion:(id)assertion forService:(id)service;
- (void)dealloc;
- (BOOL)reactivateIfPossible;
- (void)cancel;
- (void)invalidate;
- (void)timerFired;
@end

#endif /* BLSHAssertionAttributeTimer_h */
