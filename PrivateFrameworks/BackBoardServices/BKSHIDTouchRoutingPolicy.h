//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 598.10.0.0.0
//
#ifndef BKSHIDTouchRoutingPolicy_h
#define BKSHIDTouchRoutingPolicy_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class BSMutableSettings, NSArray;

@interface BKSHIDTouchRoutingPolicy : NSObject<NSSecureCoding>

@property (retain, nonatomic) BSMutableSettings *settings;
@property (copy, nonatomic) NSArray *contextIDsToAlwaysSendTouches;
@property (copy, nonatomic) NSArray *contextIDsToExcludeFromHitTesting;
@property (nonatomic) BOOL avoidHitTesting;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (void)inspectChangesWithOldPolicy:(id)policy newPolicy:(id)policy usingBlock:(id /* block */)block;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)shouldAvoidHitTesting;
@end

#endif /* BKSHIDTouchRoutingPolicy_h */
