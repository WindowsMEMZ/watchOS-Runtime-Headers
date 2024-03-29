//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef WFTodoistAccount_h
#define WFTodoistAccount_h
@import Foundation;

#include "WFOAuth2Account.h"

@interface WFTodoistAccount : WFOAuth2Account
/* class methods */
+ (id)serviceID;
+ (id)sessionManager;
+ (id)clientID;
+ (id)clientSecret;
+ (id)serviceName;
+ (id)localizedServiceName;
+ (id)scopes;
+ (id)redirectURI;
@end

#endif /* WFTodoistAccount_h */
