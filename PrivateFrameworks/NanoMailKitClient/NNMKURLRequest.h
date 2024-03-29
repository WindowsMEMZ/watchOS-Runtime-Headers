//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 811.0.0.0.0
//
#ifndef NNMKURLRequest_h
#define NNMKURLRequest_h
@import Foundation;

@interface NNMKURLRequest : NSObject
/* class methods */
+ (id)mailNotificationURL;
+ (void)requestWithType:(unsigned long long)type baseURLString:(id)urlstring path:(id)path body:(id)body token:(id)token needsBAA:(BOOL)baa errorParser:(id /* block */)parser completion:(id /* block */)completion;
+ (void)postRequestWithBaseURLString:(id)urlstring path:(id)path body:(id)body token:(id)token completion:(id /* block */)completion;
+ (void)postRequestWithBaseURLString:(id)urlstring path:(id)path body:(id)body token:(id)token needsBAA:(BOOL)baa completion:(id /* block */)completion;
+ (void)formPostRequestWithBaseURLString:(id)urlstring path:(id)path body:(id)body token:(id)token completion:(id /* block */)completion;
+ (void)patchRequestWithBaseURLString:(id)urlstring path:(id)path body:(id)body token:(id)token completion:(id /* block */)completion;
+ (void)getRequestWithBaseURLString:(id)urlstring path:(id)path params:(id)params token:(id)token completion:(id /* block */)completion;
+ (void)_getRequestWithBaseURLString:(id)urlstring path:(id)path params:(id)params token:(id)token errorParser:(id /* block */)parser completion:(id /* block */)completion;
+ (void)_jsonBodyRequestWithBaseURLString:(id)urlstring path:(id)path body:(id)body method:(id)method token:(id)token needsBAA:(BOOL)baa errorParser:(id /* block */)parser completion:(id /* block */)completion;
+ (void)_formBodyRequestWithBaseURLString:(id)urlstring path:(id)path body:(id)body method:(id)method token:(id)token errorParser:(id /* block */)parser completion:(id /* block */)completion;
+ (void)_handleRequest:(id)request errorParser:(id /* block */)parser completion:(id /* block */)completion;
+ (id)_methodNameForType:(unsigned long long)type;
+ (id)serverFriendlyDescription;
+ (id)_systemVersionDictionary;
+ (id)_osName;
+ (id)_osVersion;
+ (id)_buildNumber;
+ (id)_hardwareModel;
@end

#endif /* NNMKURLRequest_h */
