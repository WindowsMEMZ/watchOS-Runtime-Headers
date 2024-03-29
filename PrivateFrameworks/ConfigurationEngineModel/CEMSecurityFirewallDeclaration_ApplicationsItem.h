//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMSecurityFirewallDeclaration_ApplicationsItem_h
#define CEMSecurityFirewallDeclaration_ApplicationsItem_h
@import Foundation;

#include "CEMPayloadBase.h"

@class NSNumber, NSString;

@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadApplication;
@property (copy, nonatomic) NSNumber *payloadAllowed;
@property (copy, nonatomic) NSString *payloadBundleID;

/* class methods */
+ (id)allowedPayloadKeys;
+ (id)buildWithApplication:(id)application withAllowed:(id)allowed withBundleID:(id)id;
+ (id)buildRequiredOnlyWithApplication:(id)application withAllowed:(id)allowed withBundleID:(id)id;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMSecurityFirewallDeclaration_ApplicationsItem_h */
