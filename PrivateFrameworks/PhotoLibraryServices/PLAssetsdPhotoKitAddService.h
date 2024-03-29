//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 624.0.100.0.0
//
#ifndef PLAssetsdPhotoKitAddService_h
#define PLAssetsdPhotoKitAddService_h
@import Foundation;

#include "PLAbstractLibraryServicesManagerService.h"
#include "PLAssetsdConnectionAuthorization.h"
#include "PLAssetsdPhotoKitAddServiceProtocol-Protocol.h"
#include "PLCameraCaptureTaskConstraintCoordinator.h"
#include "PLPerformChangesRequestService-Protocol.h"

@class NSPersistentStoreCoordinator, NSString;

@interface PLAssetsdPhotoKitAddService : PLAbstractLibraryServicesManagerService<PLPerformChangesRequestService, PLAssetsdPhotoKitAddServiceProtocol> {
  /* instance variables */
  PLAssetsdConnectionAuthorization *_connectionAuthorization;
  NSPersistentStoreCoordinator *_persistentStoreCoordinator;
  PLCameraCaptureTaskConstraintCoordinator *_cameraTaskConstraintCoordinator;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithLibraryServicesManager:(id)manager connectionAuthorization:(id)authorization;
- (void)dealloc;
- (void)applyChangesRequest:(id)request reply:(id /* block */)reply;
- (id)persistentStoreCoordinator;
- (id)clientDescription;
- (id)clientBundleID;
- (id)clientDisplayName;
- (unsigned long long)libraryRole;
- (BOOL)validatePhotosAccessScopeForChangesRequest:(id)request;
- (void)commitRequest:(id)request reply:(id /* block */)reply;
@end

#endif /* PLAssetsdPhotoKitAddService_h */
