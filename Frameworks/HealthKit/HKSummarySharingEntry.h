//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSummarySharingEntry_h
#define HKSummarySharingEntry_h
@import Foundation;

#include "HKProfileIdentifier.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDate, NSString, NSUUID;

@interface HKSummarySharingEntry : NSObject<NSSecureCoding, NSCopying>

@property (readonly, copy, nonatomic) NSArray *allContactIdentifiers;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *CNContactIdentifier;
@property (readonly, copy, nonatomic) NSString *primaryContactIdentifier;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic) long long userWheelchairMode;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) long long notificationStatus;
@property (readonly, copy, nonatomic) NSDate *modificationDate;
@property (readonly, copy, nonatomic) NSDate *dateInvited;
@property (readonly, copy, nonatomic) NSDate *dateAccepted;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) BOOL isPaused;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithUUID:(id)uuid primaryContactIdentifier:(id)identifier allContactIdentifiers:(id)identifiers firstName:(id)name lastName:(id)name userWheelchairMode:(long long)mode type:(long long)type status:(long long)status notificationStatus:(long long)status direction:(unsigned long long)direction modificationDate:(id)date;
- (id)initWithUUID:(id)uuid primaryContactIdentifier:(id)identifier allContactIdentifiers:(id)identifiers firstName:(id)name lastName:(id)name type:(long long)type status:(long long)status notificationStatus:(long long)status direction:(unsigned long long)direction modificationDate:(id)date;
- (id)_initWithUUID:(id)uuid primaryContactIdentifier:(id)identifier allContactIdentifiers:(id)identifiers firstName:(id)name lastName:(id)name userWheelchairMode:(long long)mode type:(long long)type status:(long long)status notificationStatus:(long long)status direction:(unsigned long long)direction modificationDate:(id)date dateAccepted:(id)accepted dateInvited:(id)invited profileIdentifier:(id)identifier CNContactIdentifier:(id)identifier isPaused:(BOOL)paused;
- (id)description;
- (void)_setProfileIdentifier:(id)identifier;
- (void)_setCNContactIdentifier:(id)identifier;
- (void)_setDateAccepted:(id)accepted;
- (void)_setDateInvited:(id)invited;
- (void)_setIsPaused:(BOOL)paused;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HKSummarySharingEntry_h */
