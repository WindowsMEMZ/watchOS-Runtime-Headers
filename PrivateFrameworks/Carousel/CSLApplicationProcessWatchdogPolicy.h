//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLApplicationProcessWatchdogPolicy_h
#define CSLApplicationProcessWatchdogPolicy_h
@import Foundation;

#include "FBProcessWatchdogProviding-Protocol.h"

@class NSString;

@interface CSLApplicationProcessWatchdogPolicy : NSObject<FBProcessWatchdogProviding>

@property (retain, nonatomic) NSObject<FBProcessWatchdogProviding> *sourcePolicyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)defaultPolicy;

/* instance methods */
- (id)initWithSourcePolicyProvider:(id)provider;
- (id)watchdogPolicyForProcess:(id)process eventContext:(id)context;
- (id)policiesFromTransitionContext:(id)context;
- (id)policyByCombiningPolicies:(id)policies name:(id)name;
- (id)watchdogTerminationRequestForProcess:(id)process error:(id)error;
- (id)overrideWatchdogPolicyForProcess:(id)process eventContext:(id)context sourcePolicy:(id)policy;
- (id)systemAppSceneUpdateWatchdogPolicyForProcess:(id)process eventContext:(id)context sourcePolicy:(id)policy;
@end

#endif /* CSLApplicationProcessWatchdogPolicy_h */
