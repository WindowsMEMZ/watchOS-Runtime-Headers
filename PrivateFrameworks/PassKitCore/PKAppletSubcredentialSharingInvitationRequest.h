//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1552.3.6.1.1
//
#ifndef PKAppletSubcredentialSharingInvitationRequest_h
#define PKAppletSubcredentialSharingInvitationRequest_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSString, NSUUID;

@interface PKAppletSubcredentialSharingInvitationRequest : NSObject<NSSecureCoding>

@property (copy, nonatomic) NSString *credentialIdentifier;
@property (copy, nonatomic) NSString *sharedCredentialIdentifier;
@property (retain, nonatomic) NSUUID *sharingSessionIdentifier;
@property (nonatomic) long long deviceType;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)description;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* PKAppletSubcredentialSharingInvitationRequest_h */
