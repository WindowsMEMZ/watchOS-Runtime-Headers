//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 10.2.8.0.0
//
#ifndef ASDAppReviewAppMetadata_h
#define ASDAppReviewAppMetadata_h
@import Foundation;

#include "ASDAppMetadata-Protocol.h"
#include "NSCopying-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class MIStoreMetadata, NSData, NSDictionary, NSNumber, NSString, NSURL;

@interface ASDAppReviewAppMetadata : NSObject<ASDAppMetadata, NSCopying, NSSecureCoding>

@property (copy, nonatomic) NSURL *artworkURL;
@property (copy, nonatomic) NSDictionary *backgroundAssetMetadata;
@property (nonatomic) BOOL beta;
@property (readonly, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (nonatomic) BOOL hasMessagesExtension;
@property (copy, nonatomic) NSNumber *initialODRSize;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (nonatomic) BOOL launchProhibited;
@property (copy, nonatomic) NSURL *messagesArtworkURL;
@property (copy, nonatomic) NSData *onDemandResourceManifest;
@property (copy, nonatomic) NSData *packageDPInfo;
@property (copy, nonatomic) NSData *packageSINF;
@property (copy, nonatomic) NSURL *packageURL;
@property (copy, nonatomic) MIStoreMetadata *storeMetadata;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSString *vendorName;
@property (readonly) long long metadataType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithStoreMetadata:(id)metadata;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (BOOL)isBeta;
- (BOOL)isLaunchProhibited;
@end

#endif /* ASDAppReviewAppMetadata_h */
