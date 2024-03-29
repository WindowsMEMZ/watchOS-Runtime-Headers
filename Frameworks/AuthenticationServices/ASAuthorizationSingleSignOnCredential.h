//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef ASAuthorizationSingleSignOnCredential_h
#define ASAuthorizationSingleSignOnCredential_h
@import Foundation;

#include "ASAuthorizationCredential-Protocol.h"

@class NSArray, NSData, NSHTTPURLResponse, NSString;

@interface ASAuthorizationSingleSignOnCredential : NSObject<ASAuthorizationCredential>

@property (readonly, copy, nonatomic) NSString *state;
@property (readonly, copy, nonatomic) NSData *accessToken;
@property (readonly, copy, nonatomic) NSData *identityToken;
@property (readonly, copy, nonatomic) NSArray *authorizedScopes;
@property (readonly, copy, nonatomic) NSHTTPURLResponse *authenticatedResponse;
@property (readonly, nonatomic) NSArray *privateKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)emptyCredential;
+ (id)new;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithAuthenticatedResponse:(id)response;
- (id)initWithAuthenticatedResponse:(id)response privateKeys:(id)keys;
- (void)_initWithAuthenticatedResponse:(id)response;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* ASAuthorizationSingleSignOnCredential_h */
