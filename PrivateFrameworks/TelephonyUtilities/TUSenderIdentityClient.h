//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1431.300.81.0.0
//
#ifndef TUSenderIdentityClient_h
#define TUSenderIdentityClient_h
@import Foundation;

#include "TUCoreTelephonyClient-Protocol.h"

@protocol OS_dispatch_queue;

@interface TUSenderIdentityClient : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSObject<TUCoreTelephonyClient> *client;

/* instance methods */
- (BOOL)inEmergencyMode;
- (BOOL)isEmergencyNumberForDigits:(id)digits senderIdentityUUID:(id)uuid;
- (BOOL)isEmergencyNumberForDigits:(id)digits senderIdentityUUID:(id)uuid error:(id *)error;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(id)digits senderIdentityUUID:(id)uuid;
- (BOOL)isWhitelistedEmergencyNumberForDigits:(id)digits senderIdentityUUID:(id)uuid error:(id *)error;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)uuid;
- (BOOL)shouldShowEmergencyCallbackModeAlertForSenderIdentityUUID:(id)uuid error:(id *)error;
- (id)testEmergencyHandleForAccountUUID:(id)uuid error:(id *)error;
- (BOOL)isRTTAvailableForSenderIdentityUUID:(id)uuid;
- (BOOL)isRTTSupportedForSenderIdentityUUID:(id)uuid;
- (BOOL)isTTYAvailableForSenderIdentityUUID:(id)uuid;
- (BOOL)isTTYEnabledForSenderIdentityUUID:(id)uuid;
- (BOOL)isTTYSupportedForSenderIdentityUUID:(id)uuid;
- (BOOL)isTTYHardwareAvailableForSenderIdentityUUID:(id)uuid;
- (BOOL)isTTYHardwareEnabledForSenderIdentityUUID:(id)uuid;
- (BOOL)isTTYHardwareSupportedForSenderIdentityUUID:(id)uuid;
- (BOOL)isTTYSoftwareAvailableForSenderIdentityUUID:(id)uuid;
- (BOOL)isTTYSoftwareEnabledForSenderIdentityUUID:(id)uuid;
- (BOOL)isTTYSoftwareSupportedForSenderIdentityUUID:(id)uuid;
- (id)init;
@end

#endif /* TUSenderIdentityClient_h */
