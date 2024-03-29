//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 141.1.1.0.0
//
#ifndef _EXExtensionRecordIdentity_h
#define _EXExtensionRecordIdentity_h
@import Foundation;

#include "_EXExtensionIdentity.h"

@class LSApplicationExtensionRecord, LSExtensionPointRecord;

@interface _EXExtensionRecordIdentity : _EXExtensionIdentity

@property (readonly) LSApplicationExtensionRecord *record;
@property (readonly) LSExtensionPointRecord *extensionPoint;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPlugInKitProxy:(id)proxy;
- (id)initWithApplicationExtensionRecord:(id)record;
- (Class)classForCoder;
- (id)initWithCoder:(id)coder;
- (id)extensionSettingsKey;
- (unsigned char)defaultUserElection;
- (unsigned char)userElection;
- (BOOL)setUserElection:(unsigned char)election error:(id *)error;
- (id)extensionPointIdentifier;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (id)containingBundleRecord;
- (id)applicationExtensionRecord;
- (unsigned int)platform;
- (id)UUID;
- (id)localizedName;
- (id)url;
- (id)containingURL;
- (id)sdkDictionary;
- (id)extensionDictionary;
- (id)attributes;
- (id)entitlements;
- (id)entitlementNamed:(id)named ofClass:(Class)class;
@end

#endif /* _EXExtensionRecordIdentity_h */
