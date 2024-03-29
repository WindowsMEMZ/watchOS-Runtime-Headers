//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1062.0.0.0.0
//
#ifndef BCCloudAssetManager_h
#define BCCloudAssetManager_h
@import Foundation;

#include "BCCloudAssetAnnotationManager.h"
#include "BCCloudAssetDetailManager-Protocol.h"
#include "BCCloudAssetReviewManager-Protocol.h"
#include "BCCloudChangeTokenController.h"
#include "BCCloudDataSource.h"
#include "BCCloudReadingNowDetailManager-Protocol.h"
#include "BCCloudStoreAssetManager-Protocol.h"
#include "BDSCloudKitSupportSignOut-Protocol.h"
#include "BDSSaltVersionIdentifierManager.h"
#include "BDSServiceProxy.h"

@class NSManagedObjectModel;

@interface BCCloudAssetManager : NSObject<BDSCloudKitSupportSignOut>

@property (retain, nonatomic) BCCloudAssetAnnotationManager *assetAnnotationManager;
@property (retain, nonatomic) NSObject<BCCloudAssetDetailManager> *assetDetailManager;
@property (retain, nonatomic) NSObject<BCCloudReadingNowDetailManager> *readingNowDetailManager;
@property (retain, nonatomic) NSObject<BCCloudAssetReviewManager> *assetReviewManager;
@property (retain, nonatomic) NSObject<BCCloudStoreAssetManager> *storeAssetManager;
@property (retain, nonatomic) BCCloudChangeTokenController *changeTokenController;
@property (retain, nonatomic) BDSSaltVersionIdentifierManager *saltVersionIdentifierManager;
@property (retain, nonatomic) NSManagedObjectModel *objectModel;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy;
@property (nonatomic) BOOL proxyMode;
@property (retain, nonatomic) BCCloudDataSource *assetDataSource;

/* class methods */
+ (id)sharedManager;
+ (id)sharedClientXPCProxy;

/* instance methods */
- (id)initClientXPCProxy;
- (void)dealloc;
- (void)setEnableCloudSync:(BOOL)sync enableReadingNowSync:(BOOL)sync;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)completion;
- (void)deleteCloudDataWithCompletion:(id /* block */)completion;
@end

#endif /* BCCloudAssetManager_h */
