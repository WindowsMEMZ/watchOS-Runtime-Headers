//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2000.2.18.0.0
//
#ifndef PUICAnimojiStickers_h
#define PUICAnimojiStickers_h
@import Foundation;

#include "PUICMemojiStickerLoader.h"
#include "PUICMemojiStickerLoaderDelegate-Protocol.h"

@class NSArray, NSDictionary, NSString;

@interface PUICAnimojiStickers : NSObject<PUICMemojiStickerLoaderDelegate> {
  /* instance variables */
  PUICMemojiStickerLoader *_memojiStickerLoader;
}

@property (retain, nonatomic) NSDictionary *stickerPacks;
@property (retain, nonatomic) NSArray *orderedAllIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)init;
- (void)_handleEnterBackgroundNotification:(id)notification;
- (void)cleanup;
- (void)_loadIfNeeded;
- (void)_load;
- (void)memojiDataChanged;
@end

#endif /* PUICAnimojiStickers_h */
