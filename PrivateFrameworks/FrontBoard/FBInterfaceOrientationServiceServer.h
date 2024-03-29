//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 867.10.0.0.0
//
#ifndef FBInterfaceOrientationServiceServer_h
#define FBInterfaceOrientationServiceServer_h
@import Foundation;

#include "FBSServiceFacility.h"

@class NSMutableSet;
@protocol OS_dispatch_queue;

@interface FBInterfaceOrientationServiceServer : FBSServiceFacility {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_queue;
  NSMutableSet *_interestedClients;
  long long _interfaceOrientation;
  unsigned long long _sequenceNumber;
}

/* instance methods */
- (id)init;
- (id)initWithIdentifier:(id)identifier queue:(id)queue;
- (void)noteInterfaceOrientationChanged:(long long)changed animationSettings:(id)settings direction:(long long)direction;
- (void)_queue_updateInterest:(unsigned int)interest forClient:(id)client withMessage:(id)message;
- (void)_queue_handleRegisterOrientationInterest:(id)interest fromClient:(id)client;
- (void)_queue_handleRequestActiveOrientation:(id)orientation fromClient:(id)client;
- (id)_prerequisiteMilestones;
- (void)noteClientDidConnect:(id)connect withMessage:(id)message;
- (void)noteClientDidDisconnect:(id)disconnect;
- (void)noteDidReceiveMessage:(id)message withType:(long long)type fromClient:(id)client;
@end

#endif /* FBInterfaceOrientationServiceServer_h */
