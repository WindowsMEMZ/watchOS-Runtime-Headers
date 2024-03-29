//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PHLivePhoto_h
#define PHLivePhoto_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSItemProviderReading-Protocol.h"
#include "NSSecureCoding-Protocol.h"
#include "PHAsset.h"
#include "PHImageManager.h"
#include "PHSandboxExtensionWrapper.h"

@class AVAsset, AVVideoComposition, NSNumber, NSObject, NSString, NSURL;

@interface PHLivePhoto : NSObject<NSItemProviderReading, NSCopying, NSSecureCoding> {
  /* instance variables */
  NSObject *_plImage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *assetUUID;
@property (readonly, nonatomic) AVAsset *videoAsset;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } photoTime;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) AVVideoComposition *videoComposition;
@property (readonly, nonatomic) NSNumber *srlCompensationValue;
@property (readonly, nonatomic) PHAsset *asset;
@property (readonly, copy, nonatomic) NSString *assetLocalIdentifier;
@property (readonly) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) PHSandboxExtensionWrapper *imageURLSandboxExtensionWrapper;
@property (readonly, nonatomic) NSURL *videoURL;
@property (readonly, nonatomic) PHSandboxExtensionWrapper *videoURLSandboxExtensionWrapper;
@property (readonly, nonatomic) NSString *originalFilename;
@property (readonly, nonatomic) NSString *imageTypeIdentifier;
@property (readonly, nonatomic) NSString *videoTypeIdentifier;
@property (readonly, copy, nonatomic) id /* block */ imageFileLoader;
@property (readonly, copy, nonatomic) id /* block */ videoFileLoader;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } targetSize;
@property (readonly, nonatomic) long long contentMode;
@property (nonatomic) float audioVolume;
@property (nonatomic) BOOL skipInstantiatingImageAndAVAsset;
@property (weak, nonatomic) PHImageManager *imageManager;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

/* class methods */
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)data typeIdentifier:(id)identifier error:(id *)error;
+ (int)requestLivePhotoWithResourceFileURLs:(id)urls placeholderImage:(id)image targetSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode resultHandler:(id /* block */)handler;
+ (void)cancelLivePhotoRequestWithRequestID:(int)id;
+ (id)livePhotoWithResourceFileURLs:(id)urls error:(id *)error;
+ (id)livePhotoWithResourceFileURLs:(id)urls pairingIdentifier:(id)identifier videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time error:(id *)error;
+ (id)loopingLivePhotoWithResourceFileURLs:(id)urls skipInstantiatingImageAndAVAsset:(BOOL)avasset error:(id *)error;
+ (id)livePhotoWithResourceFileURLs:(id)urls targetSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode skipInstantiatingImageAndAVAsset:(BOOL)avasset error:(id *)error;
+ (id)livePhotoWithResourceFileURLs:(id)urls targetSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode skipValidation:(BOOL)validation error:(id *)error;
+ (id)livePhotoWithResourceFileURLs:(id)urls targetSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode skipValidation:(BOOL)validation isLooping:(BOOL)looping skipInstantiatingImageAndAVAsset:(BOOL)avasset error:(id *)error;
+ (id)livePhotoWithResourceFileURLs:(id)urls pairingIdentifier:(id)identifier videoDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })duration photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time targetSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode skipValidation:(BOOL)validation isLooping:(BOOL)looping skipInstantiatingImageAndAVAsset:(BOOL)avasset error:(id *)error;
+ (BOOL)_identifyResourceURLs:(id)urls outImageURL:(id *)url outVideoURL:(id *)url error:(id *)error;
+ (BOOL)_canCreateLivePhotoWithURLs:(id)urls videoComplementMetadata:(id)metadata outError:(id *)error;
+ (BOOL)_canCreateLoopingLivePhotoWithURLs:(id)urls videoComplementMetadata:(id)metadata outError:(id *)error;
+ (BOOL)_validateFileURLs:(id)urls validationOptions:(unsigned long long)options videoComplementMetadata:(id)metadata outError:(id *)error;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })_photoTimeForLivePhotoWithImageURL:(id)url videoURL:(id)url;
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithBundleAtURL:(id)url;
- (id)initWithImage:(struct CGImage *)image uiOrientation:(long long)orientation videoAsset:(id)asset photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time asset:(id)asset options:(unsigned long long)options;
- (id)initWithImage:(struct CGImage *)image uiOrientation:(long long)orientation videoAsset:(id)asset photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time asset:(id)asset;
- (id)_initWithImageURL:(id)url videoURL:(id)url videoComplementMetadata:(id)metadata targetSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode;
- (id)_initWithImageURL:(id)url videoURL:(id)url videoComplementMetadata:(id)metadata targetSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode skipInstantiatingImageAndAVAsset:(BOOL)avasset;
- (id)initWithImage:(struct CGImage *)image uiOrientation:(long long)orientation videoAsset:(id)asset photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time asset:(id)asset options:(unsigned long long)options videoComposition:(id)composition;
- (id)initWithImage:(struct CGImage *)image uiOrientation:(long long)orientation videoAsset:(id)asset photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time assetUUID:(id)uuid options:(unsigned long long)options videoComposition:(id)composition;
- (id)_initWithImage:(struct CGImage *)image uiOrientation:(long long)orientation videoAsset:(id)asset photoTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time asset:(id)asset assetUUID:(id)uuid options:(unsigned long long)options videoComposition:(id)composition;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(struct _NSZone *)zone;
- (void)encodeWithCoder:(id)coder;
- (BOOL)_synchronouslyLoadImageURL:(id *)url videoURL:(id *)url error:(id *)error;
- (id)image;
- (void)_ensureConstituentData;
- (BOOL)hasPhotoColorAdjustments;
- (id)_imageManager;
- (void)_loadConstituentURLsWithNetworkAccessAllowed:(BOOL)allowed completionHandler:(id /* block */)handler;
- (id)videoComplement;
- (void)saveToPhotoLibraryWithCompletionHandler:(id /* block */)handler;
@end

#endif /* PHLivePhoto_h */
