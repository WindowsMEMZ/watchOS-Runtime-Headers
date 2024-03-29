//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PFVideoComplement_h
#define PFVideoComplement_h
@import Foundation;

@class BOOL *, NSDictionary, NSString;

@interface PFVideoComplement : NSObject {
  /* instance variables */
  NSDictionary *_metadata;
  BOOL _didReadOriginalMetadata;
}

@property (readonly, copy, nonatomic) NSString *videoPath;
@property (readonly, copy, nonatomic) NSString *imagePath;
@property (readonly, copy, nonatomic) NSString *pairingIdentifier;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } imageDisplayTime;
@property (readonly, copy, nonatomic) NSString *originalPairingIdentifier;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } originalImageDisplayTime;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } originalVideoDuration;
@property (readonly, copy, nonatomic) NSString *videoPath;
@property (readonly, copy, nonatomic) NSString *imagePath;

/* class methods */
+ (id)currentFormatVersion;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })convertTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time fromAsset:(id)asset toAsset:(id)asset;
+ (unsigned long long)_originalPTSForFrameAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time inAsset:(id)asset error:(out id *)error;
+ (struct { long long x0; int x1; unsigned int x2; long long x3; })_retimedPTSForOriginalPTS:(unsigned long long)pts inAsset:(id)asset error:(out id *)error;
+ (BOOL)_enumerateV3MetadataInAsset:(id)asset withBlock:(id /* block */)block error:(out id *)error;

/* instance methods */
- (id)initWithPathToVideo:(id)video pathToImage:(id)image;
- (id)initWithPathToVideo:(id)video pathToImage:(id)image imageDisplayTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })time pairingIdentifier:(id)identifier;
- (void)_readMetadataIfNeeded;
- (int)numberOfFramesRecoveredWithError:(id *)error;
- (id)init;
- (id)initWithPropertyList:(id)list;
- (id)initWithBundleAtURL:(id)url;
- (id)propertyListRepresentation;
- (BOOL)copyOrLinkPath:(id)path toPath:(id)path error:(id *)error;
- (BOOL)_getSourceFilePath:(id)path destinationFilePath:(id)path areOnSameVolume:(BOOL *)volume volumeSupportsCloning:(BOOL *)cloning;
- (BOOL)writeToBundleAtURL:(id)url error:(id *)error;
@end

#endif /* PFVideoComplement_h */
