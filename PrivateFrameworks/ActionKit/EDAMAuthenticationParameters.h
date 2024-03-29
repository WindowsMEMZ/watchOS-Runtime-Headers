//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2206.0.5.0.0
//
#ifndef EDAMAuthenticationParameters_h
#define EDAMAuthenticationParameters_h
@import Foundation;

#include "FATObject.h"

@class NSNumber, NSString;

@interface EDAMAuthenticationParameters : FATObject

@property (retain, nonatomic) NSString *usernameOrEmail;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *ssoLoginToken;
@property (retain, nonatomic) NSString *consumerKey;
@property (retain, nonatomic) NSString *consumerSecret;
@property (retain, nonatomic) NSString *deviceIdentifier;
@property (retain, nonatomic) NSString *deviceDescription;
@property (retain, nonatomic) NSNumber *supportsTwoFactor;
@property (retain, nonatomic) NSNumber *supportsBusinessOnlyAccounts;

/* class methods */
+ (id)structName;
+ (id)structFields;

/* instance methods */
@end

#endif /* EDAMAuthenticationParameters_h */
