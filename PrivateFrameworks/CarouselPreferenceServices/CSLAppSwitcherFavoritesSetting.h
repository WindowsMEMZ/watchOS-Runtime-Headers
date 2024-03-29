//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1112.2.15.0.0
//
#ifndef CSLAppSwitcherFavoritesSetting_h
#define CSLAppSwitcherFavoritesSetting_h
@import Foundation;

#include "CSLAppSwitcherFavoritesProviding-Protocol.h"
#include "CSLPRFTwoWaySyncSetting.h"
#include "CSLPRFTwoWaySyncSettingDelegate-Protocol.h"

@class NSArray, NSString;
@protocol CSLAppSwitcherFavoritesSettingDelegate;

@interface CSLAppSwitcherFavoritesSetting : NSObject<CSLPRFTwoWaySyncSettingDelegate, CSLAppSwitcherFavoritesProviding> {
  /* instance variables */
  struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
  CSLPRFTwoWaySyncSetting *_favoritesSetting;
  CSLPRFTwoWaySyncSetting *_maximumFavoritesSetting;
}

@property (retain, nonatomic) NSArray *favorites;
@property (nonatomic) unsigned long long maximumFavorites;
@property (weak, nonatomic) NSObject<CSLAppSwitcherFavoritesSettingDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (void)twoWaySyncSettingDidUpdate:(id)update;
- (void)_withLock:(id /* block */)lock;
@end

#endif /* CSLAppSwitcherFavoritesSetting_h */
