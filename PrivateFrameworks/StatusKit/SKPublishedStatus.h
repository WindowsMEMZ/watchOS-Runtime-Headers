//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 25.300.51.0.0
//
#ifndef SKPublishedStatus_h
#define SKPublishedStatus_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"
#include "SKInvitationPayload.h"
#include "SKStatusPayload.h"

@class NSDate, NSString;

@interface SKPublishedStatus : NSObject<NSSecureCoding>

@property (readonly, nonatomic) SKStatusPayload *statusPayload;
@property (readonly, nonatomic) NSString *statusUniqueIdentifier;
@property (readonly, nonatomic) NSDate *datePublished;
@property (readonly, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) NSDate *dateReceived;
@property (readonly, nonatomic) SKInvitationPayload *invitationPayload;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStatusPayload:(id)payload statusUniqueIdentifier:(id)identifier datePublished:(id)published dateCreated:(id)created dateReceived:(id)received invitationPayload:(id)payload;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)description;
@end

#endif /* SKPublishedStatus_h */
