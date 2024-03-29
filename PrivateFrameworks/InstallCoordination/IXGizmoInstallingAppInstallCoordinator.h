//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXGizmoInstallingAppInstallCoordinator_h
#define IXGizmoInstallingAppInstallCoordinator_h
@import Foundation;

#include "IXAppInstallCoordinator.h"
#include "IXCoordinatorWithAppAssetPromise-Protocol.h"
#include "IXCoordinatorWithImportance-Protocol.h"
#include "IXCoordinatorWithInstallOptions-Protocol.h"

@class NSString;

@interface IXGizmoInstallingAppInstallCoordinator : IXAppInstallCoordinator<IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance>

@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasInstallOptions;

/* class methods */
+ (BOOL)modifiesLocalLaunchServicesDatabase;
+ (unsigned long long)intent;

/* instance methods */
- (id)validInstallTypes;
- (BOOL)setTargetGizmoPairingID:(id)id error:(id *)error;
- (id)targetGizmoPairingIDWithError:(id *)error;
@end

#endif /* IXGizmoInstallingAppInstallCoordinator_h */
