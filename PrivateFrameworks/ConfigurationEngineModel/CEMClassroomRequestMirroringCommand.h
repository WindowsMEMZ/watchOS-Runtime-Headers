//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 171.0.0.0.0
//
#ifndef CEMClassroomRequestMirroringCommand_h
#define CEMClassroomRequestMirroringCommand_h
@import Foundation;

#include "CEMCommandBase.h"
#include "CEMRegisteredTypeProtocol-Protocol.h"

@class NSNumber, NSString;

@interface CEMClassroomRequestMirroringCommand : CEMCommandBase<CEMRegisteredTypeProtocol>

@property (copy, nonatomic) NSString *payloadDestinationName;
@property (copy, nonatomic) NSString *payloadDestinationDeviceID;
@property (copy, nonatomic) NSNumber *payloadScanTime;
@property (copy, nonatomic) NSString *payloadPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:(id)identifier withDestinationName:(id)name withDestinationDeviceID:(id)id withScanTime:(id)time withPassword:(id)password;
+ (id)buildRequiredOnlyWithIdentifier:(id)identifier;

/* instance methods */
- (BOOL)mustBeSupervised;
- (int)executionLevel;
- (BOOL)loadPayload:(id)payload error:(id *)error;
- (id)serializePayloadWithAssetProviders:(id)providers;
- (id)copyWithZone:(struct _NSZone *)zone;
@end

#endif /* CEMClassroomRequestMirroringCommand_h */
