//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef PocketAPIDelegate_Protocol_h
#define PocketAPIDelegate_Protocol_h
@import Foundation;

@protocol PocketAPIDelegate <NSObject>
@optional
/* instance methods */
- (void)pocketAPI:(id)api receivedRequestToken:(id)token;
- (void)pocketAPILoggedIn:(id)in;
- (void)pocketAPI:(id)api hadLoginError:(id)error;
- (void)pocketAPI:(id)api savedURL:(id)url;
- (void)pocketAPI:(id)api failedToSaveURL:(id)url error:(id)error;
- (void)pocketAPI:(id)api receivedResponse:(id)response forAPIMethod:(id)apimethod error:(id)error;
- (void)pocketAPIDidStartLogin:(id)login;
- (void)pocketAPIDidFinishLogin:(id)login;
- (void)pocketAPI:(id)api requestedOpenURL:(id)url completionHandler:(id /* block */)handler;
@end

#endif /* PocketAPIDelegate_Protocol_h */
