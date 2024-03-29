//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDPendingInvitedUserMessagePolicy_h
#define HMDPendingInvitedUserMessagePolicy_h
@import Foundation;

#include "HMFMessagePolicy.h"
#include "HMDHomeManager.h"

@interface HMDPendingInvitedUserMessagePolicy : HMFMessagePolicy

@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;

/* instance methods */
- (id)init;
- (id)initWithHomeManager:(id)manager;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMDPendingInvitedUserMessagePolicy_h */
