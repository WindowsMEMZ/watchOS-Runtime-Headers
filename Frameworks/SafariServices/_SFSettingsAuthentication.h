//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.1.17.12.4
//
#ifndef _SFSettingsAuthentication_h
#define _SFSettingsAuthentication_h
@import Foundation;

@interface _SFSettingsAuthentication : NSObject
/* class methods */
+ (BOOL)authenticationRequiresPasscode;
+ (void)authenticateForSettings:(id)settings allowAuthenticationReuse:(BOOL)reuse completionHandler:(id /* block */)handler;
+ (void)pushSettingsAfterAuthentication:(id)authentication onBehalfOfViewController:(id)controller resourceDictionary:(id)dictionary completionHandler:(id /* block */)handler;
+ (id)_localAuthenticationOptionsWithAuthenticationContext:(id)context;
@end

#endif /* _SFSettingsAuthentication_h */
