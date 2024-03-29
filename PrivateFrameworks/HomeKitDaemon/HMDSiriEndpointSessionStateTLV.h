//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDSiriEndpointSessionStateTLV_h
#define HMDSiriEndpointSessionStateTLV_h
@import Foundation;

#include "HAPTLVProtocol-Protocol.h"
#include "HMDSiriEndpointSessionStateTypeWrapper.h"
#include "NSCopying-Protocol.h"

@class NSData, NSString, NSUUID;

@interface HMDSiriEndpointSessionStateTLV : NSObject<NSCopying, HAPTLVProtocol>

@property (readonly) NSUUID *hubUUID;
@property (retain, nonatomic) HMDSiriEndpointSessionStateTypeWrapper *sessionState;
@property (retain, nonatomic) NSData *hubIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)parsedFromData:(id)data error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithSessionState:(id)state hubIdentifier:(id)identifier;
- (BOOL)parseFromData:(id)data error:(id *)error;
- (id)serializeWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HMDSiriEndpointSessionStateTLV_h */
