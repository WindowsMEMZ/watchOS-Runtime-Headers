//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMAddAccessoryRequest_h
#define HMAddAccessoryRequest_h
@import Foundation;

#include "HMAccessoryCategory.h"
#include "HMFObject-Protocol.h"
#include "HMHome.h"
#include "HMSetupAccessoryDescription.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString, NSUUID;

@interface HMAddAccessoryRequest : NSObject<HMFObject, NSSecureCoding>

@property (retain, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSUUID *requestIdentifier;
@property (retain, nonatomic) HMSetupAccessoryDescription *accessoryDescription;
@property (readonly, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) HMAccessoryCategory *accessoryCategory;
@property (readonly, nonatomic) BOOL requiresSetupPayloadURL;
@property (readonly, nonatomic) BOOL requiresOwnershipToken;
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
- (id)payloadWithOwnershipToken:(id)token;
- (id)payloadWithURL:(id)url ownershipToken:(id)token;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)initWithIdentifier:(id)identifier accessoryName:(id)name accessoryCategory:(id)category;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HMAddAccessoryRequest_h */
