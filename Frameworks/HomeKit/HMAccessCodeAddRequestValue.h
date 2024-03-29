//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMAccessCodeAddRequestValue_h
#define HMAccessCodeAddRequestValue_h
@import Foundation;

#include "HMAccessCodeModificationRequestValue-Protocol.h"
#include "HMAccessCodeValue.h"
#include "HMFObject-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString, NSUUID;

@interface HMAccessCodeAddRequestValue : NSObject<HMFObject, HMAccessCodeModificationRequestValue, NSCopying, NSSecureCoding>

@property (readonly, copy) HMAccessCodeValue *accessCodeValue;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (copy) NSUUID *userUUID;
@property (copy) NSString *guestName;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)shortDescription;

/* instance methods */
- (id)initWithAccessCodeValue:(id)value accessoryUUID:(id)uuid;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HMAccessCodeAddRequestValue_h */
