//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKFieldDetector_h
#define PKFieldDetector_h
@import Foundation;

#include "PKFieldProperties.h"

@class NSHashTable;
@protocol OS_dispatch_queue, PKFieldDetectorDelegate;

@interface PKFieldDetector : NSObject {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  NSHashTable *_observers;
  unsigned long long _enablePersistentFieldDetectionReasons;
  NSObject<OS_dispatch_queue> *_fieldDetectorSerialQueue;
  NSObject<OS_dispatch_queue> *_replyQueue;
}

@property (readonly, weak, nonatomic) PKFieldProperties *fieldProperties;
@property (weak, nonatomic) NSObject<PKFieldDetectorDelegate> *delegate;

/* instance methods */
- (id)init;
- (id)initWithDelegate:(id)delegate;
- (void)dealloc;
- (void)updateRadioState;
- (void)requestPersistentFieldDetectionEnabled:(BOOL)enabled withReason:(unsigned long long)reason;
- (void)setPersistentFieldDetectionEnabled:(BOOL)enabled;
- (void)registerObserver:(id)observer;
- (void)unregisterObserver:(id)observer;
- (void)_evaulatePersistentFieldDetectionEnablementReasons;
- (void)_setPersistentFieldDetectionEnabled:(BOOL)enabled;
@end

#endif /* PKFieldDetector_h */
