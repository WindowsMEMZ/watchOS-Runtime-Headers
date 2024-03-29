//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 466.7.8.3.2
//
#ifndef AKFidoAuthenticationResponse_h
#define AKFidoAuthenticationResponse_h
@import Foundation;

#include "AKFidoResponse-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSString;

@interface AKFidoAuthenticationResponse : NSObject<AKFidoResponse, NSSecureCoding, NSCopying>

@property (readonly, nonatomic) NSString *authenticatorData;
@property (readonly, nonatomic) NSString *signature;
@property (readonly, nonatomic) NSString *clientData;
@property (readonly, nonatomic) NSString *credentialID;
@property (readonly, nonatomic) NSString *userIdentifier;
@property (readonly, nonatomic) NSString *challenge;
@property (readonly, nonatomic) NSString *relyingPartyIdentifier;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAuthenticatorData:(id)data challengeString:(id)string relyingPartyIdentifier:(id)identifier signature:(id)signature clientData:(id)data credentialID:(id)id userIdentifier:(id)identifier;
- (id)initWithAuthenticatorDataString:(id)string challengeString:(id)string relyingPartyIdentifier:(id)identifier signature:(id)signature clientDataString:(id)string credentialID:(id)id userIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)debugDescription;
@end

#endif /* AKFidoAuthenticationResponse_h */
