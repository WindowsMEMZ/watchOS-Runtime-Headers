//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKBasePhotoResourcesManifest_h
#define NTKBasePhotoResourcesManifest_h
@import Foundation;

@class NSArray, NSURL;

@interface NTKBasePhotoResourcesManifest : NSObject

@property (readonly, nonatomic) NSURL *resourceDirectoryURL;
@property (readonly, nonatomic) NSArray *imageList;
@property (readonly, nonatomic) unsigned long long version;

/* class methods */
+ (id)manifestForResourceDirectory:(id)directory;

/* instance methods */
- (id)_initWithResourceDirectoryURL:(id)url;
- (BOOL)_loadRawManifestAtURL:(id)url;
- (BOOL)_validateImageListItem:(id)item withError:(id *)error;
- (BOOL)validateManifestWithError:(id *)error;
- (BOOL)resourceWithName:(id)name isValidMediaAssetOfType:(id)type withMinFileSize:(unsigned long long)size maxFileSize:(unsigned long long)size;
- (BOOL)resourceWithNameIsValidImage:(id)image;
- (BOOL)didLoadRawManifest:(id)manifest;
- (BOOL)validateImageListItem:(id)item withError:(id *)error;
- (unsigned long long)minCompatibleVersion;
- (unsigned long long)maxCompatibleVersion;
- (unsigned long long)maxNumberOfPhotos;
@end

#endif /* NTKBasePhotoResourcesManifest_h */
