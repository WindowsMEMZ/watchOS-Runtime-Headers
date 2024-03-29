//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 356.60.2.0.0
//
#ifndef ACXSyncedApplication_h
#define ACXSyncedApplication_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, NSUUID;

@interface ACXSyncedApplication : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *applicationName;
@property (retain, nonatomic) NSUUID *databaseUUID;
@property (nonatomic) unsigned long long sequenceNumber;
@property (copy, nonatomic) NSArray *counterpartIdentifiers;
@property (nonatomic) unsigned long long applicationType;
@property (nonatomic) BOOL isDeletable;
@property (nonatomic) BOOL supportsAlwaysOnDisplay;
@property (nonatomic) BOOL defaultsToPrivateAlwaysOnDisplayTreatment;
@property (copy, nonatomic) NSDictionary *localizedInfoPlistStrings;
@property (retain, nonatomic) NSNumber *externalVersionIdentifier;
@property (readonly, nonatomic) NSString *_rawApplicationName;
@property (readonly, nonatomic) BOOL isSystemApp;

/* class methods */
+ (BOOL)supportsSecureCoding;
+ (id)localizedInfoPlistKeysLoadAppOnly;
+ (id)localizedInfoPlistKeysLoadAnywhere;
+ (id)localizedAppNameFromRecord:(id)record;
+ (id)buildLocalizedInfoPlistStringsDictForAppBundleURL:(id)url watchKitExtensionURL:(id)url;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)init;
- (id)initWithApplicationRecord:(id)record databaseUUID:(id)uuid sequenceNumber:(unsigned long long)number;
- (id)initWithBundleID:(id)id databaseUUID:(id)uuid sequenceNumber:(unsigned long long)number;
- (id)initForTesting;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithSerializedDictionary:(id)dictionary;
- (id)serialize;
- (id)serializeAsRemoteApplication;
- (id)localizedInfoPlistStringsForKeys:(id)keys fetchingFirstMatchingLocalizationInList:(id)list;
@end

#endif /* ACXSyncedApplication_h */
