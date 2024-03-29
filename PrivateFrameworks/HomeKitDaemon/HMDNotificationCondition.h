//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNotificationCondition_h
#define HMDNotificationCondition_h
@import Foundation;

#include "HMFObject.h"
#include "HMDBulletinNotificationRegistrationRemoteCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@interface HMDNotificationCondition : HMFObject<NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>
/* class methods */
+ (BOOL)doesTypeMatch:(id)match against:(id)against;
+ (id)type;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)serializedRegistrationForRemoteMessage;
- (id)initWithDictionary:(id)dictionary;
- (BOOL)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HMDNotificationCondition_h */
