//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CUISSOSUserPresenceValidator_h
#define CUISSOSUserPresenceValidator_h
@import Foundation;

#include "CUISSOSUserPresenceState.h"
#include "CUISSOSValidator-Protocol.h"

@class NSString;

@interface CUISSOSUserPresenceValidator : NSObject<CUISSOSValidator> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) CUISSOSUserPresenceState *state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)updateStateWithBlock:(id /* block */)block;
- (BOOL)shouldBeginSOSCountdown:(id *)soscountdown;
- (BOOL)shouldBeginSirenCountdown:(id *)countdown;
@end

#endif /* CUISSOSUserPresenceValidator_h */
