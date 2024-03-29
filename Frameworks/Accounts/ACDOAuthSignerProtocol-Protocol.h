//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 956.0.0.0.0
//
#ifndef ACDOAuthSignerProtocol_Protocol_h
#define ACDOAuthSignerProtocol_Protocol_h
@import Foundation;

@protocol ACDOAuthSignerProtocol <NSObject>
/* instance methods */
- (void)setShouldIncludeAppIdInRequest:(BOOL)request;
- (void)signURLRequest:(id)urlrequest withAccount:(id)account callingPID:(id)pid timestamp:(id)timestamp handler:(id /* block */)handler;
- (void)signURLRequest:(id)urlrequest withAccount:(id)account applicationID:(id)id timestamp:(id)timestamp handler:(id /* block */)handler;
- (void)setClientBundleID:(id)id withHandler:(id /* block */)handler;
@end

#endif /* ACDOAuthSignerProtocol_Protocol_h */
