//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4146.2.12.2.2
//
#ifndef HKSource_h
#define HKSource_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class NSNumber, NSString;

@interface HKSource : NSObject<NSSecureCoding, NSCopying>

@property (copy, nonatomic) NSString *owningAppBundleIdentifier;
@property (retain, nonatomic) NSNumber *sourceID;
@property (nonatomic) BOOL localDevice;
@property (copy, nonatomic) NSString *productType;
@property (nonatomic) unsigned long long options;
@property (readonly) NSString *name;
@property (readonly) NSString *bundleIdentifier;

/* class methods */
+ (id)defaultSource;
+ (id)_uncachedDefaultSource;
+ (id)_uncachedDefaultSourceWithEntitlements:(id)entitlements;
+ (id)_localDeviceSource;
+ (id)_connectedGymSource;
+ (id)_blePeripheralSource;
+ (BOOL)_representsCurrentDeviceWithBundleIdentifier:(id)identifier;
+ (id)_sourceBundleIdentifierWithEntitlements:(id)entitlements processBundleIdentifier:(id)identifier isExtension:(BOOL)extension;
+ (id)_currentSourceProductType:(BOOL)type;
+ (id)_sourceNameWithRepresentsCurrentDevice:(BOOL)device defaultSource:(BOOL)source;
+ (id)_generateIdentifierForAppleDevice;
+ (id)_generateIdentifierForAppleDeviceWithUUID:(id)uuid;
+ (BOOL)_isPlaceholderBundleIdentifier:(id)identifier;
+ (id)_researchStudiesDirectoryURL;
+ (id)_sourceWithBundleIdentifier:(id)identifier name:(id)name productType:(id)type options:(unsigned long long)options;
+ (id)_privateSourceForClinicalAccountIdentifier:(id)identifier name:(id)name;
+ (id)_publicSourceForClinicalExternalIdentifier:(id)identifier name:(id)name;
+ (id)_sourceWithBundleIdentifier:(id)identifier defaultBundleIdentifier:(id)identifier appEntitlements:(id)entitlements name:(id)name;
+ (unsigned long long)_sourceOptionsForAppEntitlements:(id)entitlements;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isAppleDeviceBundleIdentifier:(id)identifier;

/* instance methods */
- (id)asJSONObject;
- (BOOL)_isApplication;
- (BOOL)_isPreferredSource;
- (BOOL)_requiresAuthorization;
- (BOOL)_isHidden;
- (BOOL)_isClinicalSource;
- (BOOL)_isResearchStudy;
- (BOOL)_isAllowedBackgroundDelivery;
- (BOOL)_isSiri;
- (id)_deducedClinicalAccountIdentifier;
- (id)_fetchBundleWithError:(id *)error;
- (id)init;
- (id)_init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)equal;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (void)_setName:(id)name;
- (void)_setBundleIdentifier:(id)identifier;
- (BOOL)_isAppleWatch;
- (BOOL)_isAppleDevice;
- (BOOL)_hasFirstPartyBundleID;
- (BOOL)_isConnectedGymSource;
- (id)_owningAppBundleIdentifier;
- (void)_setOwningAppBundleIdentifier:(id)identifier;
- (id)_sourceID;
- (void)_setSourceID:(id)id;
- (BOOL)_isLocalDevice;
- (void)_setLocalDevice:(BOOL)device;
- (id)_productType;
- (void)_setProductType:(id)type;
- (unsigned long long)_options;
- (void)_setOptions:(unsigned long long)options;
@end

#endif /* HKSource_h */
