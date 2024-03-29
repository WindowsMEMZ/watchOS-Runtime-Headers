//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef EMFocusController_h
#define EMFocusController_h
@import Foundation;

#include "EFCancelable-Protocol.h"
#include "EMFocus.h"

@class NSHashTable;
@protocol EFAssertableScheduler;

@interface EMFocusController : NSObject {
  /* instance variables */
  NSHashTable *_observers;
  NSObject<EFAssertableScheduler> *_observationScheduler;
  NSObject<EFCancelable> *_observationToken;
  EMFocus *_currentFocus;
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

/* class methods */
+ (id)updatedPredicateForFocus:(id)focus currentPredicate:(id)predicate usingAccountRepository:(id)repository;
+ (id)predicateForFocus:(id)focus usingAccountRepository:(id)repository;

/* instance methods */
- (id)init;
- (void)getCurrentFocus:(id /* block */)focus;
- (void)_focusModeChanged;
- (id)addObserver:(id)observer currentFocus:(id *)focus;
- (id)_currentFocusedAccountIdentifiers;
@end

#endif /* EMFocusController_h */
