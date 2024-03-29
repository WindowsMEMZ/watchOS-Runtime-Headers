//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 45.2.1.0.0
//
#ifndef WNUIAlertIdentityProvider_h
#define WNUIAlertIdentityProvider_h
@import Foundation;

#include "WNUIAlertDefinitionRegistry.h"
#include "WNUIAlertIdentityProviding-Protocol.h"

@class NSString;

@interface WNUIAlertIdentityProvider : NSObject<WNUIAlertIdentityProviding>

@property (readonly, nonatomic) WNUIAlertDefinitionRegistry *registry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAlertDefinitionRegistry:(id)registry;
- (id)sceneClientIdentityForAlertIdentity:(id)identity;
- (id)sceneIdentityForAlertIdentity:(id)identity;
@end

#endif /* WNUIAlertIdentityProvider_h */
