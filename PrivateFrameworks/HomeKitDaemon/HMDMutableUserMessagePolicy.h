//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDMutableUserMessagePolicy_h
#define HMDMutableUserMessagePolicy_h
@import Foundation;

#include "HMDUserMessagePolicy.h"

@interface HMDMutableUserMessagePolicy : HMDUserMessagePolicy

@property (@dynamic) unsigned long long userPrivilege;
@property (@dynamic) BOOL requiresRemoteAccess;
@property (@dynamic) BOOL requiresCameraStreamingAccess;

/* class methods */
+ (id)userMessagePolicyWithHome:(id)home userPrivilege:(unsigned long long)privilege remoteAccessRequired:(BOOL)required requiresCameraStreamingAccess:(BOOL)access;
+ (id)userMessagePolicyWithHome:(id)home userPrivilege:(unsigned long long)privilege remoteAccessRequired:(BOOL)required;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* HMDMutableUserMessagePolicy_h */
