//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 1262.300.81.4.10
//
#ifndef IMNicknameProvider_h
#define IMNicknameProvider_h
@import Foundation;

@class IMNicknameProvider_Impl;

@interface IMNicknameProvider : NSObject {
  /* instance variables */
  IMNicknameProvider_Impl *_swiftImpl;
}

@property (readonly, nonatomic) BOOL haveNicknamesLoaded;

/* instance methods */
- (id)init;
- (void)nicknameForCurrentUserWithCompletionHandler:(id /* block */)handler;
- (id)nicknameForHandleID:(id)id;
- (id)nicknameForContact:(id)contact;
- (id)pendingNicknameForContact:(id)contact;
- (id)currentNicknameForContact:(id)contact;
- (id)allNicknamesForContact:(id)contact;
- (void)updatePendingNicknameWithContact:(id)contact;
- (void)setPersonalNicknameWithContact:(id)contact;
- (void)setNicknameListener:(id)listener;
- (void)sendPersonalNicknameToHandleID:(id)id;
- (void)sendPersonalNicknameToHandleID:(id)id fromHandleID:(id)id;
- (void)sendNameOnlyToHandleIDs:(id)ids fromHandleID:(id)id;
- (BOOL)hasObservedTransitionForHandleID:(id)id;
- (void)markTransitionAsObservedForHandleID:(id)id isAutoUpdate:(BOOL)update;
- (void)bannerActionTapped:(id)tapped IMNicknameBannerAction:(unsigned long long)action;
@end

#endif /* IMNicknameProvider_h */
