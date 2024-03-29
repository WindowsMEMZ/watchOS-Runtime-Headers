//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 523.0.0.0.0
//
#ifndef WFReachabilityConfigurationResponse_h
#define WFReachabilityConfigurationResponse_h
@import Foundation;

#include "WFResponse.h"
#include "NSSecureCoding-Protocol.h"

@class NSURL, NWPathEvaluator;

@interface WFReachabilityConfigurationResponse : WFResponse<NSSecureCoding>

@property (copy, nonatomic) NSURL *reachabilityHostURL;
@property (readonly, nonatomic) NWPathEvaluator *pathEvaluator;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* WFReachabilityConfigurationResponse_h */
