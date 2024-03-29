//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFInstapaperAccessResource_h
#define WFInstapaperAccessResource_h
@import Foundation;

#include "WFAccessResource.h"

@interface WFInstapaperAccessResource : WFAccessResource
/* class methods */
+ (void)initialize;
+ (id)instapaperUsername;
+ (void)setInstapaperUsername:(id)username;
+ (id)instapaperToken;
+ (void)setInstapaperToken:(id)token;
+ (id)keychain;
+ (id)instapaperTokenSecret;
+ (void)setInstapaperTokenSecret:(id)secret;
+ (id)userInterfaceProtocol;
+ (id)userInterfaceClasses;

/* instance methods */
- (id)associatedAppIdentifier;
- (id)protectedResourceDescription;
- (unsigned long long)status;
- (void)makeAvailableWithRemoteInterface:(id)interface completionHandler:(id /* block */)handler;
- (id)resourceName;
- (id)username;
- (BOOL)canLogOut;
- (void)logOut;
@end

#endif /* WFInstapaperAccessResource_h */
