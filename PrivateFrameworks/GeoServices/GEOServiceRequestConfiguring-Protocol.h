//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1940.42.9.28.8
//
#ifndef GEOServiceRequestConfiguring_Protocol_h
#define GEOServiceRequestConfiguring_Protocol_h
@import Foundation;

@protocol GEOServiceRequestConfiguring <NSObject>
/* instance methods */
- (unsigned long long)urlType;
- (id)additionalURLQueryItems;
- (id)additionalHTTPHeaders;
- (struct { int x0; union { int x0; int x1; int x2; } x1; })dataRequestKindForRequest:(id)request traits:(id)traits;
- (id)debugRequestName;
- (id)serviceTypeNumber;
- (BOOL)supportsOffline;
@optional
/* instance methods */
- (double)timeout;
- (unsigned long long)multipathServiceType;
- (id)additionalStatesForNetworkEvent;
- (BOOL)usesBackgroundURL;
- (int)analyticNetworkServiceTypeForRequest:(id)request traits:(id)traits;
- (long long)companionRequestType;
@end

#endif /* GEOServiceRequestConfiguring_Protocol_h */
