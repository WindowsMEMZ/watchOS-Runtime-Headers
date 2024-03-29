//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 720.1.0.0.0
//
#ifndef TPSTipsAssetPrefetchingManager_h
#define TPSTipsAssetPrefetchingManager_h
@import Foundation;

@class NSMutableArray, NSOperationQueue, TPSTip;
@protocol OS_dispatch_queue;

@interface TPSTipsAssetPrefetchingManager : NSObject

@property (nonatomic) long long assetUserInterface;
@property (copy, nonatomic) TPSTip *currentTip;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSMutableArray *sessionItems;

/* instance methods */
- (void)dealloc;
- (id)init;
- (void)cancel;
- (void)cancelFetch;
- (void)prefetchAssetsFromTip:(id)tip tips:(id)tips assetUserInterfaceStyle:(long long)style;
- (void)appendAssetsOperationsForTip:(id)tip;
- (void)addFetchOperationWithAssetConfiguration:(id)configuration type:(long long)type operationName:(id)name;
@end

#endif /* TPSTipsAssetPrefetchingManager_h */
