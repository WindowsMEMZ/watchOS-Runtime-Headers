//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1814.300.81.4.2
//
#ifndef IDSSOSLogger_h
#define IDSSOSLogger_h
@import Foundation;

#include "CUTMetricLogger-Protocol.h"
#include "IDSRateLimiter.h"

@class NSString;

@interface IDSSOSLogger : NSObject<CUTMetricLogger>

@property (retain, nonatomic) NSString *sosURLString;
@property (retain, nonatomic) IDSRateLimiter *rateLimiter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)logger;
+ (id)loggerWithURLString:(id)urlstring;

/* instance methods */
- (id)initWithSOSURLString:(id)sosurlstring;
- (void)logMetric:(id)metric;
@end

#endif /* IDSSOSLogger_h */
