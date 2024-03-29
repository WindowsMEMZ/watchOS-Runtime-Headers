//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdLibraryManagementService_h
#define PLAssetsdLibraryManagementService_h
@import Foundation;

#include "PLAssetsdConnectionAuthorization.h"
#include "PLAssetsdLibraryManagementServiceProtocol-Protocol.h"
#include "PLPhotoLibraryBundleController.h"

@class NSString;

@interface PLAssetsdLibraryManagementService : NSObject<PLAssetsdLibraryManagementServiceProtocol> {
  /* instance variables */
  PLAssetsdConnectionAuthorization *_connectionAuthorization;
  PLPhotoLibraryBundleController *_bundleController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (void)setPhotosXPCEndpoint:(id)xpcendpoint;

/* instance methods */
- (id)initWithConnectionAuthorization:(id)authorization bundleController:(id)controller;
- (void)setSystemPhotoLibraryURL:(id)url sandboxExtension:(id)extension options:(unsigned short)options reply:(id /* block */)reply;
- (void)getActivePhotoLibrariesWithReply:(id /* block */)reply;
- (void)getPhotoLibraryURLsWithLibraryURL:(id)url reply:(id /* block */)reply;
- (void)closePhotoLibraryAtURL:(id)url reply:(id /* block */)reply;
- (void)closeAndDeletePhotoLibraryAtURL:(id)url reply:(id /* block */)reply;
- (void)resetSyndicationLibraryWithReply:(id /* block */)reply;
- (void)_closePhotoLibraryAtURL:(id)url delete:(BOOL)delete reply:(id /* block */)reply;
- (BOOL)_deleteLibraryFromFilesystemAtURL:(id)url error:(id *)error;
- (void)getPhotosXPCEndpointWithReply:(id /* block */)reply;
- (void)filesystemSizeForLibraryURL:(id)url reply:(id /* block */)reply;
@end

#endif /* PLAssetsdLibraryManagementService_h */
