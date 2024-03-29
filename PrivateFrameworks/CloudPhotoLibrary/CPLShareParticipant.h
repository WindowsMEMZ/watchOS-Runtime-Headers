//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef CPLShareParticipant_h
#define CPLShareParticipant_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSPersonNameComponents, NSString;

@interface CPLShareParticipant : NSObject<NSSecureCoding, NSCopying>

@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) long long role;
@property (nonatomic) long long acceptanceStatus;
@property (nonatomic) long long permission;
@property (copy, nonatomic) NSString *userIdentifier;
@property (copy, nonatomic) NSString *email;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *participantID;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic) BOOL hasiCloudAccount;

/* class methods */
+ (id)descriptionForAcceptanceStatus:(long long)status;
+ (id)descriptionForPermission:(long long)permission;
+ (id)descriptionForRole:(long long)role;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (id)init;
- (id)initWithUserIdentifier:(id)identifier;
- (id)initWithPhoneNumber:(id)number;
- (id)initWithEmail:(id)email;
- (id)initWithParticipantID:(id)id;
- (id)initWithUserIdentifier:(id)identifier participantID:(id)id phoneNumber:(id)number email:(id)email;
- (void)encodeWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)description;
- (id)redactedDescription;
@end

#endif /* CPLShareParticipant_h */
