//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tools: [ld (857.1), ld (902.8)]
//    - LC_SOURCE_VERSION: 981.5.1.0.0
//
#ifndef AAAvailabilityResponse_h
#define AAAvailabilityResponse_h
@import Foundation;

#include "AAResponse.h"

@class NSString;

@interface AAAvailabilityResponse : AAResponse

@property (readonly, nonatomic) NSString *status;
@property (readonly, nonatomic) NSString *eta;
@property (readonly, nonatomic) NSString *feature;

/* instance methods */
- (id)initWithHTTPResponse:(id)httpresponse data:(id)data;
@end

#endif /* AAAvailabilityResponse_h */
