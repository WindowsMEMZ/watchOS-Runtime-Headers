//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HMDNetworkRouterMulticastBridgingRule_h
#define HMDNetworkRouterMulticastBridgingRule_h
@import Foundation;

#include "HAPTLVProtocol-Protocol.h"
#include "HMDNetworkRouterIPAddress.h"
#include "HMDNetworkRouterLANIdentifierList.h"
#include "HMDNetworkRouterLANRule-Protocol.h"
#include "HMDNetworkRouterRuleDirection.h"
#include "NSCopying-Protocol.h"

@class HAPTLVUnsignedNumberValue, NSString;

@interface HMDNetworkRouterMulticastBridgingRule : NSObject<HMDNetworkRouterLANRule, NSCopying, HAPTLVProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HMDNetworkRouterRuleDirection *direction;
@property (retain, nonatomic) HMDNetworkRouterLANIdentifierList *lanIdentifierList;
@property (retain, nonatomic) HMDNetworkRouterIPAddress *destinationIPAddress;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *destinationPort;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)ruleFromFirewallRuleLAN:(id)lan;
+ (id)parsedFromData:(id)data error:(id *)error;

/* instance methods */
- (void)addTo:(id)to;
- (id)init;
- (id)initWithDirection:(id)direction lanIdentifierList:(id)list destinationIPAddress:(id)ipaddress destinationPort:(id)port;
- (BOOL)parseFromData:(id)data error:(id *)error;
- (id)serializeWithError:(id *)error;
- (id)copyWithZone:(struct _NSZone *)zone;
- (BOOL)isEqual:(id)equal;
@end

#endif /* HMDNetworkRouterMulticastBridgingRule_h */
