//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKMotionManager_h
#define PKMotionManager_h
@import Foundation;

@class CMDeviceMotion, CMMotionManager, NSHashTable;

@interface PKMotionManager : NSObject {
  /* instance variables */
  CMMotionManager *_motionManager;
  NSHashTable *_clients;
}

@property (readonly, nonatomic) BOOL monitoring;
@property (readonly, nonatomic) CMDeviceMotion *motion;

/* class methods */
+ (id)sharedManager;

/* instance methods */
- (id)init;
- (id)_init;
- (void)dealloc;
- (void)updateWithMotion:(id)motion;
- (void)registerClient:(id)client;
- (void)unregisterClient:(id)client;
- (BOOL)isMonitoring;
@end

#endif /* PKMotionManager_h */
