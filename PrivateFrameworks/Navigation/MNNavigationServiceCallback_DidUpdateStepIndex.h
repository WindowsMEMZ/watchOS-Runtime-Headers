//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2298.42.9.28.5
//
#ifndef MNNavigationServiceCallback_DidUpdateStepIndex_h
#define MNNavigationServiceCallback_DidUpdateStepIndex_h
@import Foundation;

#include "MNNavigationServiceCallbackParameters.h"

@interface MNNavigationServiceCallback_DidUpdateStepIndex : MNNavigationServiceCallbackParameters

@property (nonatomic) unsigned long long stepIndex;
@property (nonatomic) unsigned long long segmentIndex;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (unsigned long long)type;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* MNNavigationServiceCallback_DidUpdateStepIndex_h */
