//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLBeaconSceneVisibilityAssertionHandler_h
#define CSLBeaconSceneVisibilityAssertionHandler_h
@import Foundation;

#include "CUISBeaconSceneVisibilityAssertionHandling-Protocol.h"

@class NSMutableDictionary, NSString;

@interface CSLBeaconSceneVisibilityAssertionHandler : NSObject<CUISBeaconSceneVisibilityAssertionHandling> {
  /* instance variables */
  NSMutableDictionary *_assertionsByUUID;
}

@property (readonly, nonatomic) BOOL acquired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (id)acquireWithCompletion:(id /* block */)completion;
- (void)relinquishAssertionWithUUID:(id)uuid;
- (BOOL)isAcquired;
@end

#endif /* CSLBeaconSceneVisibilityAssertionHandler_h */
