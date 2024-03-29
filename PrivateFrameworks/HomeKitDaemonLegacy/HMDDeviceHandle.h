//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDDeviceHandle_h
#define HMDDeviceHandle_h
@import Foundation;

#include "HMFObject.h"
#include "HMDAccountHandle.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "_HMDDeviceHandle.h"

@class NSData, NSString, NSUUID;

@interface HMDDeviceHandle : HMFObject<NSCopying, NSSecureCoding>

@property (readonly, copy, nonatomic) _HMDDeviceHandle *internal;
@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy) NSString *destination;
@property (readonly, copy) NSData *pushToken;
@property (readonly) BOOL local;
@property (readonly) BOOL global;
@property (readonly, copy) NSUUID *identifier;

/* class methods */
+ (id)deviceHandleForDestination:(id)destination;
+ (id)deviceHandleForDeviceIdentifier:(id)identifier;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)init;
- (id)initWithInternal:(id)internal;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)shortDescription;
- (id)attributeDescriptions;
- (BOOL)isLocal;
- (BOOL)isGlobal;
- (BOOL)matchesPushToken:(id)token;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* HMDDeviceHandle_h */
