//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 767.3.3.0.0
//
#ifndef __HMFLocationManagerOperation_h
#define __HMFLocationManagerOperation_h
@import Foundation;

#include "HMFOperation.h"
#include "HMFLocationAuthorization.h"
#include "HMFLogging-Protocol.h"

@class CLLocationManager, NSString;

@interface __HMFLocationManagerOperation : HMFOperation<HMFLogging> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _ready;
}

@property (readonly) HMFLocationAuthorization *authorization;
@property (readonly) CLLocationManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;
+ (id)logCategory;

/* instance methods */
- (id)initWithTimeout:(double)timeout;
- (id)initWithAuthorization:(id)authorization;
- (void)dealloc;
- (BOOL)isReady;
- (void)main;
- (void)observeValueForKeyPath:(id)path ofObject:(id)object change:(id)change context:(void *)context;
@end

#endif /* __HMFLocationManagerOperation_h */
