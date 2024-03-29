//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDRemoteAccountHandleMessageDestination_h
#define HMDRemoteAccountHandleMessageDestination_h
@import Foundation;

#include "HMDRemoteMessageDestination.h"
#include "HMDAccountHandle.h"

@class NSDictionary;

@interface HMDRemoteAccountHandleMessageDestination : HMDRemoteMessageDestination

@property (readonly, copy) HMDAccountHandle *handle;
@property (readonly) BOOL multicast;
@property (readonly, copy) NSDictionary *deviceCapabilities;

/* class methods */
+ (id)shortDescription;

/* instance methods */
- (id)initWithTarget:(id)target;
- (id)initWithTarget:(id)target handle:(id)handle multicast:(BOOL)multicast;
- (id)initWithTarget:(id)target handle:(id)handle multicast:(BOOL)multicast deviceCapabilities:(id)capabilities;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)shortDescription;
- (id)descriptionWithPointer:(BOOL)pointer;
- (id)debugDescription;
- (id)description;
- (id)privateDescription;
- (id)remoteDestinationString;
- (BOOL)isMulticast;
@end

#endif /* HMDRemoteAccountHandleMessageDestination_h */
