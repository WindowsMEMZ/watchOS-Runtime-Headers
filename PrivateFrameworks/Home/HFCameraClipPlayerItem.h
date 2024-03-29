//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 841.3.9.0.0
//
#ifndef HFCameraClipPlayerItem_h
#define HFCameraClipPlayerItem_h
@import Foundation;

#include "AVPlayerItem.h"
#include "AVAssetResourceLoaderDelegate-Protocol.h"
#include "HFCameraClipQueuableItem-Protocol.h"
#include "HFCameraClipVideoAssetContextProvider.h"

@class HMCameraClip, HMCameraClipManager, NSString;
@protocol OS_dispatch_queue;

@interface HFCameraClipPlayerItem : AVPlayerItem<AVAssetResourceLoaderDelegate, HFCameraClipQueuableItem>

@property (readonly, nonatomic) HMCameraClipManager *clipManager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceLoaderQueue;
@property (readonly, nonatomic) HFCameraClipVideoAssetContextProvider *videoContextProvider;
@property (readonly, nonatomic) HMCameraClip *clip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL playable;

/* class methods */
+ (id)_playlistURL;
+ (id)_assetOptionsForClip:(id)clip;

/* instance methods */
- (id)initWithAsset:(id)asset automaticallyLoadedAssetKeys:(id)keys;
- (id)initWithClipManager:(id)manager clip:(id)clip;
- (BOOL)isPlayable;
- (BOOL)resourceLoader:(id)loader shouldWaitForLoadingOfRequestedResource:(id)resource;
- (void)dealloc;
@end

#endif /* HFCameraClipPlayerItem_h */
