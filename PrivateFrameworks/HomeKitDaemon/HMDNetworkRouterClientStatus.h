//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNetworkRouterClientStatus_h
#define HMDNetworkRouterClientStatus_h
@import Foundation;

#include "HAPTLVProtocol-Protocol.h"
#include "HMDNetworkRouterIPAddressList.h"
#include "NSCopying-Protocol.h"

@class HAPTLVSignedNumberValue, HAPTLVUnsignedNumberValue, NSData, NSString;

@interface HMDNetworkRouterClientStatus : NSObject<NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *clientIdentifier;
@property (retain, nonatomic) NSData *macAddress;
@property (retain, nonatomic) HMDNetworkRouterIPAddressList *ipAddressList;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *lanIdentifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) HAPTLVSignedNumberValue *rssi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)parsedFromData:(id)data error:(id *)error;

/* instance methods */
- (id)init;
- (id)initWithClientIdentifier:(id)identifier macAddress:(id)address ipAddressList:(id)list lanIdentifier:(id)identifier name:(id)name rssi:(id)rssi;
- (BOOL)parseFromData:(id)data error:(id *)error;
- (id)serializeWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HMDNetworkRouterClientStatus_h */
