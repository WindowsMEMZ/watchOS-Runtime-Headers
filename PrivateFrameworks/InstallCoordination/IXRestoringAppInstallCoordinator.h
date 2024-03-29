//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 554.40.9.0.0
//
#ifndef IXRestoringAppInstallCoordinator_h
#define IXRestoringAppInstallCoordinator_h
@import Foundation;

#include "IXAppInstallCoordinator.h"
#include "IXCoordinatorWithAppAssetPromise-Protocol.h"
#include "IXCoordinatorWithInstallOptions-Protocol.h"
#include "IXCoordinatorWithRemovabilityState-Protocol.h"
#include "IXCoordinatorWithUserDataPromise-Protocol.h"

@class NSString;

@interface IXRestoringAppInstallCoordinator : IXAppInstallCoordinator<IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithUserDataPromise, IXCoordinatorWithRemovabilityState>

@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly, nonatomic) BOOL hasUserDataPromise;

/* class methods */
+ (unsigned long long)intent;

/* instance methods */
- (id)validInstallTypes;
@end

#endif /* IXRestoringAppInstallCoordinator_h */
