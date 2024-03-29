//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDServiceBulletinNotificationRegistration_h
#define HMDServiceBulletinNotificationRegistration_h
@import Foundation;

#include "HMDBulletinNotificationRegistration.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSUUID;

@interface HMDServiceBulletinNotificationRegistration : HMDBulletinNotificationRegistration<NSCopying, NSSecureCoding>

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSNumber *serviceInstanceID;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithAccessoryUUID:(id)uuid serviceInstanceID:(id)id conditions:(id)conditions;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)attributeDescriptions;
@end

#endif /* HMDServiceBulletinNotificationRegistration_h */
