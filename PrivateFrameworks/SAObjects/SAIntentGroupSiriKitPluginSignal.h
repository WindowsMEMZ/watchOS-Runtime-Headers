//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 3300.28.1.0.0
//
#ifndef SAIntentGroupSiriKitPluginSignal_h
#define SAIntentGroupSiriKitPluginSignal_h
@import Foundation;

#include "SABaseClientBoundCommand.h"

@class NSString;

@interface SAIntentGroupSiriKitPluginSignal : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *bundleIdentifier;

/* instance methods */
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)initWithBundleIdentifier:(id)identifier;
- (BOOL)requiresResponse;
- (BOOL)mutatingCommand;
@end

#endif /* SAIntentGroupSiriKitPluginSignal_h */
