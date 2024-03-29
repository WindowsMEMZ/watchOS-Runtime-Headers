//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef TMTumblrAuthenticator_h
#define TMTumblrAuthenticator_h
@import Foundation;

@class NSString;

@interface TMTumblrAuthenticator : NSObject

@property (copy, nonatomic) id /* block */ threeLeggedOAuthCallback;
@property (copy, nonatomic) NSString *threeLeggedOAuthTokenSecret;
@property (copy, nonatomic) NSString *OAuthConsumerKey;
@property (copy, nonatomic) NSString *OAuthConsumerSecret;

/* class methods */
+ (id)sharedInstance;
+ (void)signRequest:(id)request withParameters:(id)parameters consumerKey:(id)key consumerSecret:(id)secret token:(id)token tokenSecret:(id)secret;

/* instance methods */
- (void)authenticate:(id)authenticate urlBlock:(id /* block */)block callback:(id /* block */)callback;
- (BOOL)handleOpenURL:(id)url;
- (void)xAuth:(id)auth password:(id)password callback:(id /* block */)callback;
@end

#endif /* TMTumblrAuthenticator_h */
