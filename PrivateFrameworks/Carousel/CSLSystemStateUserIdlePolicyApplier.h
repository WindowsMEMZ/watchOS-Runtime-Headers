//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLSystemStateUserIdlePolicyApplier_h
#define CSLSystemStateUserIdlePolicyApplier_h
@import Foundation;

#include "CSLPISystemStateUserIdleManaging-Protocol.h"

@class NSArray, NSMutableDictionary;

@interface CSLSystemStateUserIdlePolicyApplier : NSObject {
  /* instance variables */
  NSObject<CSLPISystemStateUserIdleManaging> *_userIdleManager;
  NSArray *_userIdleConfiguringInterfaces;
  NSMutableDictionary *_activeConfigurations;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

/* instance methods */
- (id)initWithTypeEnumerator:(id)enumerator configurationProvider:(id)provider interfaceProvider:(id)provider idleManager:(id)manager;
- (void)_withLock:(id /* block */)lock;
- (id)_idleReasonForSystemStateType:(unsigned long long)type;
- (void)_systemStateForType:(unsigned long long)type didUpdate:(BOOL)update withConfiguration:(id)configuration;
- (void)_lock_systemStateForType:(unsigned long long)type didUpdate:(BOOL)update withConfiguration:(id)configuration;
- (void)_lock_updateIdleManager;
@end

#endif /* CSLSystemStateUserIdlePolicyApplier_h */
