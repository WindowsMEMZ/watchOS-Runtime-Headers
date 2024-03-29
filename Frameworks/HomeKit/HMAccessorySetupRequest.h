//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMAccessorySetupRequest_h
#define HMAccessorySetupRequest_h
@import Foundation;

#include "HMAccessorySetupPayload.h"
#include "HMFObject-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class MTRSetupPayload, NSArray, NSString, NSUUID;

@interface HMAccessorySetupRequest : NSObject<HMFObject, NSSecureCoding, NSCopying>

@property (copy) HMAccessorySetupPayload *payload;
@property (copy) NSUUID *homeUniqueIdentifier;
@property (copy) NSUUID *suggestedRoomUniqueIdentifier;
@property (copy) NSString *suggestedAccessoryName;
@property (retain) MTRSetupPayload *matterPayload;
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
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HMAccessorySetupRequest_h */
