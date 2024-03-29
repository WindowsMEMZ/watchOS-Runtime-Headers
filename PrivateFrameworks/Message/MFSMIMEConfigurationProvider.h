//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3774.300.42.0.0
//
#ifndef MFSMIMEConfigurationProvider_h
#define MFSMIMEConfigurationProvider_h
@import Foundation;

#include "EDSMIMEConfigurationProvider-Protocol.h"

@interface MFSMIMEConfigurationProvider : NSObject<EDSMIMEConfigurationProvider>

@property (readonly, nonatomic) BOOL signingIsConfigured;
@property (readonly, nonatomic) BOOL signingEnabledByDefault;
@property (readonly, nonatomic) BOOL encryptionIsConfigured;
@property (readonly, nonatomic) BOOL encryptionIsEnabledByDefault;

@end

#endif /* MFSMIMEConfigurationProvider_h */
