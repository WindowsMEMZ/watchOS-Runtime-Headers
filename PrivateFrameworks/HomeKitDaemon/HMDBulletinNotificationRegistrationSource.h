//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDBulletinNotificationRegistrationSource_h
#define HMDBulletinNotificationRegistrationSource_h
@import Foundation;

#include "HMFObject.h"
#include "HMDBulletinNotificationRegistrationRemoteCoding-Protocol.h"
#include "HMDDevice.h"
#include "HMDDeviceAddress.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSUUID;

@interface HMDBulletinNotificationRegistrationSource : HMFObject<NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (readonly, copy) NSUUID *userUUID;
@property (readonly, copy) HMDDeviceAddress *deviceAddress;
@property (readonly, copy) HMDDevice *device;

/* class methods */
+ (id)type;
+ (BOOL)supportsSecureCoding;
+ (BOOL)doesTypeMatch:(id)match against:(id)against;

/* instance methods */
- (id)initWithUserUUID:(id)uuid deviceAddress:(id)address;
- (id)initWithDictionary:(id)dictionary;
- (id)serializedRegistrationForRemoteMessage;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)attributeDescriptions;
@end

#endif /* HMDBulletinNotificationRegistrationSource_h */
