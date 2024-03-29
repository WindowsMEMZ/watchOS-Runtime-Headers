//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDLostModeManager_h
#define HMDLostModeManager_h
@import Foundation;

#include "HMFObject.h"
#include "HMFLogging-Protocol.h"

@class NSString;

@interface HMDLostModeManager : HMFObject<HMFLogging> {
  /* instance variables */
  struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL lost;

/* class methods */
+ (id)logCategory;
+ (id)sharedManager;

/* instance methods */
- (id)attributeDescriptions;
- (id)init;
- (BOOL)isLost;
@end

#endif /* HMDLostModeManager_h */
