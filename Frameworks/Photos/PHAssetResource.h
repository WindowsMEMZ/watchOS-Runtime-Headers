//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHAssetResource_h
#define PHAssetResource_h
@import Foundation;

#include "PHCPLAssetResource-Protocol.h"
#include "PHPhotoLibrary.h"
#include "PLResourceIdentity-Protocol.h"

@class NSDate, NSManagedObjectID, NSString, NSURL, PLPhotoLibraryPathManagerIdentifier;
@protocol PHAssetResourceOwning;

@interface PHAssetResource : NSObject<PHCPLAssetResource>

@property (readonly, nonatomic) NSURL *privateFileURL;
@property (readonly, copy, nonatomic) id /* block */ privateFileLoader;
@property (readonly, nonatomic) long long analysisType;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) NSDate *trashedDate;
@property (readonly, nonatomic) BOOL trashed;
@property (readonly, nonatomic) BOOL locallyAvailable;
@property (readonly, nonatomic) BOOL inCloud;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSObject<PLResourceIdentity> *backingResourceIdentity;
@property (readonly, nonatomic) NSManagedObjectID *assetObjectID;
@property (readonly, nonatomic) unsigned short dataStoreClassID;
@property (nonatomic) unsigned int orientation;
@property (nonatomic) unsigned long long cplResourceType;
@property (nonatomic) BOOL locallyAvailable;
@property (retain, nonatomic) NSURL *privateFileURL;
@property (readonly, nonatomic) BOOL current;
@property (readonly, nonatomic) PLPhotoLibraryPathManagerIdentifier *libraryID;
@property (readonly, nonatomic) NSObject<PHAssetResourceOwning> *asset;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier;
@property (readonly, copy, nonatomic) NSString *uniformTypeIdentifier;
@property (readonly, copy, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) long long pixelWidth;
@property (readonly, nonatomic) long long pixelHeight;

/* class methods */
+ (id)assetResourcesForAsset:(id)asset includeDerivatives:(BOOL)derivatives;
+ (id)assetResourcesForAsset:(id)asset includeDerivatives:(BOOL)derivatives includeMetadata:(BOOL)metadata;
+ (id)assetResourcesForAsset:(id)asset includeDerivatives:(BOOL)derivatives includeMetadata:(BOOL)metadata includeAdjustmentOverflowDataBlob:(BOOL)blob;
+ (id)assetResourceForAsset:(id)asset qualityClass:(id)class;
+ (id)_assetResourcesFromPLResources:(id)plresources includeMetadata:(BOOL)metadata mediaMetadataVirtualResources:(id)resources asset:(id)asset assetHasAdjustments:(BOOL)adjustments includeDerivatives:(BOOL)derivatives includeAdjustmentOverflowDataBlob:(BOOL)blob;
+ (id)assetResourcesForAsset:(id)asset;
+ (id)assetResourcesForLivePhoto:(id)photo;

/* instance methods */
- (BOOL)isTrashed;
- (BOOL)isInCloud;
- (id)initWithResource:(id)resource asset:(id)asset hasAdjustments:(BOOL)adjustments;
- (id)initWithType:(long long)type livePhoto:(id)photo;
- (id)description;
- (id)debugDescription;
- (BOOL)isLocallyAvailable;
- (BOOL)isCurrent;
@end

#endif /* PHAssetResource_h */
