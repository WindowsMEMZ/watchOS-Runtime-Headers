//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 198.0.0.0.0
//
#ifndef RCNetworkEvent_h
#define RCNetworkEvent_h
@import Foundation;

@class NSDate, NSError, NSHTTPURLResponse, NSString, NSURLRequest, NSURLSessionTaskTransactionMetrics;

@interface RCNetworkEvent : NSObject

@property (readonly, nonatomic) long long resultType;
@property (readonly, nonatomic) NSURLRequest *request;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSString *requestID;
@property (readonly, nonatomic) NSString *operationID;
@property (readonly, nonatomic) NSHTTPURLResponse *response;
@property (readonly, nonatomic) NSURLSessionTaskTransactionMetrics *metrics;
@property (readonly, nonatomic) NSError *error;

/* instance methods */
- (id)initWithResultType:(long long)type request:(id)request startDate:(id)date operationID:(id)id requestID:(id)id response:(id)response metrics:(id)metrics error:(id)error;
@end

#endif /* RCNetworkEvent_h */
