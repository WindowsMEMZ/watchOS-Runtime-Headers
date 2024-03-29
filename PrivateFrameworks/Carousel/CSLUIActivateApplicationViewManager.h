//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLUIActivateApplicationViewManager_h
#define CSLUIActivateApplicationViewManager_h
@import Foundation;

#include "CSLSActivatingUIAssertionProvider-Protocol.h"
#include "_CSLUIActivationAssertionsServer.h"

@class NSLock, NSMutableDictionary, NSPointerArray, NSString;

@interface CSLUIActivateApplicationViewManager : NSObject<CSLSActivatingUIAssertionProvider> {
  /* instance variables */
  _CSLUIActivationAssertionsServer *_assertionsServer;
  NSPointerArray *_assertionsObservers;
  NSLock *_observersLock;
  NSMutableDictionary *_assertions;
  NSMutableDictionary *_assertionCounts;
  NSLock *_assertionLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (unsigned int)assertionCountForBundleID:(id)id;
- (void)addAssertionsObserver:(id)observer;
- (void)removeAssertionsObserver:(id)observer;
- (void)_notifyObserversOfAssertionTaken:(id)taken;
- (void)_notifyObserversOfAllAssertionsReleased:(id)released;
- (BOOL)takeActivatingUIAssertion:(id)uiassertion forUUID:(struct __CFUUID *)uuid;
- (void)releaseActivatingUIAssertionForUUID:(struct __CFUUID *)uuid;
@end

#endif /* CSLUIActivateApplicationViewManager_h */
