//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (607.2), ld (814.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 7.2.10.0.0
//
#ifndef AMSBadgeRequest_h
#define AMSBadgeRequest_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

@interface AMSBadgeRequest : NSObject<NSSecureCoding>

@property (readonly, nonatomic) NSDictionary *actionMetricsEvent;
@property (readonly, nonatomic) NSString *badgeIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSDictionary *metrics;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPushPayload:(id)payload;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* AMSBadgeRequest_h */
