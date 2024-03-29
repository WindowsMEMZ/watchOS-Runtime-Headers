//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 617.0.0.0.0
//
#ifndef FCPuzzleThumbnailHandle_h
#define FCPuzzleThumbnailHandle_h
@import Foundation;

#include "FCAssetHandle.h"
#include "FCAssetManager.h"
#include "FCContentContext-Protocol.h"

@class NSString;

@interface FCPuzzleThumbnailHandle : NSObject

@property (retain, nonatomic) NSObject<FCContentContext> *context;
@property (retain, nonatomic) FCAssetManager *assetManager;
@property (readonly, nonatomic) long long dayOfWeek;
@property (readonly, nonatomic) NSString *resourceMapId;
@property (retain, nonatomic) FCAssetHandle *assetHandle;

/* class methods */
+ (id)imageUrlFromResourceMap:(id)map dayOfWeek:(long long)week;

/* instance methods */
- (id)initWithPublishDate:(id)date imageResourceMapId:(id)id context:(id)context assetManager:(id)manager;
- (void)downloadIfNeededWithGroup:(id)group;
- (void)downloadIfNeededWithGroup:(id)group completion:(id /* block */)completion;
@end

#endif /* FCPuzzleThumbnailHandle_h */
