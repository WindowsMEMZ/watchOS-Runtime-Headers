//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMBookEnterpriseDeclaration_h
#define CEMBookEnterpriseDeclaration_h
@import Foundation;

#include "CEMAssetBase.h"
#include "CEMAssetBaseDescriptor.h"
#include "CEMAssetBaseReference.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"

@class NSString;

@interface CEMBookEnterpriseDeclaration : CEMAssetBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor;
@property (copy, nonatomic) CEMAssetBaseReference *payloadReference;
@property (copy, nonatomic) NSString *payloadKind;
@property (copy, nonatomic) NSString *payloadVersion;
@property (copy, nonatomic) NSString *payloadAuthor;
@property (copy, nonatomic) NSString *payloadTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier withDescriptor:(id)descriptor withReference:(id)reference withKind:(id)kind withVersion:(id)version withAuthor:(id)author withTitle:(id)title;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier withDescriptor:(id)descriptor withReference:(id)reference;

/* instance methods */
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMBookEnterpriseDeclaration_h */
