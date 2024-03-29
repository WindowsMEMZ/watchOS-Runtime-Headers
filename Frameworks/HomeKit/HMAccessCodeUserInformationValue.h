//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMAccessCodeUserInformationValue_h
#define HMAccessCodeUserInformationValue_h
@import Foundation;

#include "HMFObject-Protocol.h"
#include "HMRemovedUserInfo.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString, NSUUID;

@interface HMAccessCodeUserInformationValue : NSObject<HMFObject, NSCopying, NSSecureCoding>

@property (readonly, copy) NSString *simpleLabel;
@property (readonly, copy) NSUUID *labelIdentifier;
@property (readonly, copy) NSUUID *userUUID;
@property (readonly, copy) HMRemovedUserInfo *removedUserInfo;
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
- (id)initWithSimpleLabel:(id)label labelIdentifier:(id)identifier userUUID:(id)uuid removedUserInfo:(id)info;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HMAccessCodeUserInformationValue_h */
