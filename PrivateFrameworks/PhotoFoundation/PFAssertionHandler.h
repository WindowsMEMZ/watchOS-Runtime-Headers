//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFAssertionHandler_h
#define PFAssertionHandler_h
@import Foundation;

#include "NSAssertionHandler.h"
#include "PFAssertionPolicyHandler-Protocol.h"

@interface PFAssertionHandler : NSAssertionHandler

@property (retain) NSObject<PFAssertionPolicyHandler> *policy;

/* class methods */
+ (id)currentHandler;
+ (void)install;
+ (BOOL)runningUnitTests;
+ (BOOL)runningUnderDebugger;

/* instance methods */
- (id)init;
- (id)defaultPolicy;
- (id)defaultTestingPolicy;
- (void)_install;
- (id)newAssertionInfoInMethod:(SEL)method object:(id)object function:(id)function file:(id)file lineNumber:(long long)number description:(id)description arguments:(char *)arguments;
- (void)handleFailureInFunction:(id)function file:(id)file lineNumber:(long long)number description:(id)description arguments:(char *)arguments;
- (void)continueAfterAssertInFunction:(id)function file:(id)file lineNumber:(long long)number description:(id)description arguments:(char *)arguments;
- (void)handleFailureInMethod:(SEL)method object:(id)object file:(id)file lineNumber:(long long)number description:(id)description;
- (void)handleFailureInFunction:(id)function file:(id)file lineNumber:(long long)number description:(id)description;
@end

#endif /* PFAssertionHandler_h */
