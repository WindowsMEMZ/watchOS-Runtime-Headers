//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef _HMDGlobalDeviceHandle_h
#define _HMDGlobalDeviceHandle_h
@import Foundation;

#include "_HMDDeviceHandle.h"
#include "HMDAccountHandle.h"

@class NSData;

@interface _HMDGlobalDeviceHandle : _HMDDeviceHandle

@property (readonly, copy) HMDAccountHandle *accountHandle;
@property (readonly, copy, nonatomic) NSData *pushToken;

/* class methods */
+ (BOOL)isValidDestination:(id)destination;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPushToken:(id)token accountHandle:(id)handle;
- (id)initWithDestination:(id)destination;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)description;
- (id)privateDescription;
- (BOOL)isGlobal;
- (id)destination;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
@end

#endif /* _HMDGlobalDeviceHandle_h */
