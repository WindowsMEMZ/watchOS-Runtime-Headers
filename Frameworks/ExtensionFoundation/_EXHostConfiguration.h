//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXHostConfiguration_h
#define _EXHostConfiguration_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "_EXExtensionIdentity.h"
#include "_EXExtensionInstanceIdentifier.h"
#include "_EXExtensionRepresenting-Protocol.h"
#include "_EXPersona.h"

@class NSArray, NSDictionary, NSString;

@interface _EXHostConfiguration : NSObject<NSCopying>

@property (retain, @dynamic) _EXLaunchConfiguration *launchConfiguration;
@property (retain, nonatomic) NSObject<_EXExtensionRepresenting> *extension;
@property (retain, nonatomic) _EXExtensionIdentity *extensionIdentity;
@property (copy) id /* block */ interruptionHandler;
@property (retain, nonatomic) _EXExtensionInstanceIdentifier *instanceIdentifier;
@property (copy) NSArray *preferredLanguages;
@property (copy) NSDictionary *additionalEnvironmentVariables;
@property (copy) NSString *sandboxProfileName;
@property (copy) _EXPersona *launchPersona;

/* instance methods */
- (id)rbsProcessIdentity;
- (id)initWithExtensionIdentity:(id)identity;
- (id)initWithExtensionIdentity:(id)identity instanceIdentifier:(id)identifier;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)initWithExtension:(id)extension;
- (id)initWithExtension:(id)extension instanceIdentifier:(id)identifier;
@end

#endif /* _EXHostConfiguration_h */
