//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSAnalyticsEventServiceRequest_h
#define TPSAnalyticsEventServiceRequest_h
@import Foundation;

#include "TPSAnalyticsEvent.h"

@class NSString, NSURL;

@interface TPSAnalyticsEventServiceRequest : TPSAnalyticsEvent {
  /* instance variables */
  NSString *_type;
  NSURL *_url;
  long long _statusCode;
  NSString *_etag;
  unsigned long long _requestTime;
  unsigned long long _requestTtfb;
  long long _responseHeadersSize;
  long long _responseSize;
  unsigned long long _responseTime;
  unsigned long long _timeToDownloadResponse;
}

/* class methods */
+ (id)serviceRequestEventWithType:(id)type metrics:(id)metrics;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)_initWithType:(id)type metrics:(id)metrics;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)eventName;
- (id)mutableAnalyticsEventRepresentation;
@end

#endif /* TPSAnalyticsEventServiceRequest_h */
