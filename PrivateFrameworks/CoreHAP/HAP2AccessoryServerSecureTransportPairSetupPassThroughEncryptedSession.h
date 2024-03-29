//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1092.3.10.0.0
//
#ifndef HAP2AccessoryServerSecureTransportPairSetupPassThroughEncryptedSession_h
#define HAP2AccessoryServerSecureTransportPairSetupPassThroughEncryptedSession_h
@import Foundation;

#include "HAPEncryptedSession-Protocol.h"

@class NSString;

@interface HAP2AccessoryServerSecureTransportPairSetupPassThroughEncryptedSession : NSObject<HAPEncryptedSession>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)encryptData:(id)data additionalAuthenticatedData:(id)data error:(id *)error;
- (id)decryptData:(id)data additionalAuthenticatedData:(id)data error:(id *)error;
@end

#endif /* HAP2AccessoryServerSecureTransportPairSetupPassThroughEncryptedSession_h */
