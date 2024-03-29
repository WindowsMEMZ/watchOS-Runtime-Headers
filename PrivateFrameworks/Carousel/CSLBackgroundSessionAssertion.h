//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBackgroundSessionAssertion_h
#define CSLBackgroundSessionAssertion_h
@import Foundation;

#include "RBSAssertionObserving-Protocol.h"

@class NSDate, NSString, RBSAssertion;

@interface CSLBackgroundSessionAssertion : NSObject<RBSAssertionObserving> {
  /* instance variables */
  RBSAssertion *_testAssertion;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) RBSAssertion *assertion;
@property (readonly, nonatomic) NSString *explanation;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) BOOL isExtendedRuntimeSession;
@property (readonly, nonatomic) NSDate *expectedExpiration;
@property (readonly, nonatomic) BOOL allowIdleSleep;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) double cpuPercentage;
@property (readonly, nonatomic) BOOL cpuViolationExempt;
@property (nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithSession:(id)session invalidationHandler:(id /* block */)handler;
- (void)_withLock:(id /* block */)lock;
- (void)dealloc;
- (void)acquire:(id /* block */)acquire;
- (void)_callHandler:(id /* block */)handler error:(id)error;
- (id)_lock_acquire;
- (void)invalidate:(id /* block */)invalidate;
- (void)_invalidateWithError:(id)error callInvalidationAlways:(BOOL)always;
- (BOOL)invalidateUnderlyingAssertion;
- (BOOL)isValid;
- (void)setTestAssertion:(id)assertion;
- (void)assertion:(id)assertion didInvalidateWithError:(id)error;
- (BOOL)isCPUViolationExempt;
@end

#endif /* CSLBackgroundSessionAssertion_h */
