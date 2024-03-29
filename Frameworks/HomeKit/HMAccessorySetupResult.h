//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMAccessorySetupResult_h
#define HMAccessorySetupResult_h
@import Foundation;

#include "HMFObject-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSString, NSUUID;

@interface HMAccessorySetupResult : NSObject<HMFObject, NSSecureCoding, NSCopying>

@property (readonly, copy) NSUUID *homeUniqueIdentifier;
@property (readonly, copy) NSArray *accessoryUniqueIdentifiers;
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
- (id)initWithHomeUniqueIdentifier:(id)identifier accessoryUniqueIdentifiers:(id)identifiers;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
@end

#endif /* HMAccessorySetupResult_h */
