//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1033.64.3.0.0
//
#ifndef TransparencySFAnalytics_h
#define TransparencySFAnalytics_h
@import Foundation;

#include "SFAnalytics.h"

@interface TransparencySFAnalytics : SFAnalytics
/* class methods */
+ (id)logger;
+ (id)databasePath;

/* instance methods */
- (void)backgroundPerform:(id /* block */)perform;
- (void)logSuccessForEventNamed:(id)named;
- (void)logHardFailureForEventNamed:(id)named withAttributes:(id)attributes;
- (void)logSoftFailureForEventNamed:(id)named withAttributes:(id)attributes;
- (void)noteEventNamed:(id)named;
- (void)logResultForEvent:(id)event hardFailure:(BOOL)failure result:(id)result;
- (void)logResultForEvent:(id)event hardFailure:(BOOL)failure result:(id)result withAttributes:(id)attributes;
- (void)logMetric:(id)metric withName:(id)name;
@end

#endif /* TransparencySFAnalytics_h */
