//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMApplicationRemoveApplicationCommand_h
#define CEMApplicationRemoveApplicationCommand_h
@import Foundation;

#include "CEMCommandBase.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"

@class NSString;

@interface CEMApplicationRemoveApplicationCommand : CEMCommandBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) NSString *payloadBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier withBundleIdentifier:(id)identifier;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier withBundleIdentifier:(id)identifier;

/* instance methods */
- (BOOL)mustBeSupervised;
- (int)executionLevel;
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMApplicationRemoveApplicationCommand_h */
