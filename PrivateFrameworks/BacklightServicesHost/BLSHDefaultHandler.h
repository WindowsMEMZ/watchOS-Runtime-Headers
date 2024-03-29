//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3.2.4.0.0
//
#ifndef BLSHDefaultHandler_h
#define BLSHDefaultHandler_h
@import Foundation;

#include "BSInvalidatable-Protocol.h"

@class BLSAssertion, NSArray, NSString;

@interface BLSHDefaultHandler : NSObject<BSInvalidatable> {
  /* instance variables */
  NSString *_key;
  NSArray *_attributes;
  BLSAssertion *_lock_assertion;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  BOOL _invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)handlerForKey:(id)key attributes:(id)attributes;

/* instance methods */
- (id)initWithKey:(id)key attributes:(id)attributes;
- (void)dealloc;
- (void)invalidate;
- (void)updateForNewValue:(BOOL)value;
@end

#endif /* BLSHDefaultHandler_h */
