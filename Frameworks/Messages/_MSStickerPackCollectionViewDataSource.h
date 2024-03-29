//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef _MSStickerPackCollectionViewDataSource_h
#define _MSStickerPackCollectionViewDataSource_h
@import Foundation;

#include "MSStickerBrowserViewDataSource-Protocol.h"

@class NSMutableArray, NSString;

@interface _MSStickerPackCollectionViewDataSource : NSObject<MSStickerBrowserViewDataSource>

@property (readonly, nonatomic) NSMutableArray *stickers;
@property (readonly, nonatomic) long long stickerSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (long long)_stickerSizeFromString:(id)string;

/* instance methods */
- (id)_allStickers;
- (id)initWithStickerPackURL:(id)url;
- (void)_loadStickerPackWithURL:(id)url;
- (long long)numberOfStickersInStickerBrowserView:(id)view;
- (id)stickerBrowserView:(id)view stickerAtIndex:(long long)index;
@end

#endif /* _MSStickerPackCollectionViewDataSource_h */
