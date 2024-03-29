//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NMUAddToPlaylistRequest_h
#define NMUAddToPlaylistRequest_h
@import Foundation;

@class MPModelObject, MPModelPlaylist, NSString, UIViewController;

@interface NMUAddToPlaylistRequest : NSObject {
  /* instance variables */
  MPModelObject *_modelObject;
  MPModelPlaylist *_playlist;
  NSString *_playlistName;
  UIViewController *_presentingViewController;
}

/* class methods */
+ (id)sharedPlaylistOperationQueue;

/* instance methods */
- (id)initWithModelObject:(id)object playlist:(id)playlist presentingViewController:(id)controller;
- (id)initWithModelObject:(id)object newPlaylistName:(id)name presentingViewController:(id)controller;
- (id)initWithModelObject:(id)object playlist:(id)playlist newPlaylistName:(id)name presentingViewController:(id)controller;
- (void)performWithCompletion:(id /* block */)completion;
- (void)_addToPlaylistWithCompletion:(id /* block */)completion;
- (void)_createPlaylistWithCompletion:(id /* block */)completion;
- (void)_fetchSongsForModelObject:(id)object completion:(id /* block */)completion;
- (void)_presentDuplicateEntryAlertWithCompletion:(id /* block */)completion;
- (void)_addSectionedCollection:(id)collection toPlaylistWithCompletion:(id /* block */)completion;
- (void)_performAddToPlaylistOperationWithSectionedCollection:(id)collection completion:(id /* block */)completion;
- (void)_presentAddToPlaylistBehaviorDisambiguationAlertWithCompletion:(id /* block */)completion;
- (void)_fetchSongsForPlaylist:(id)playlist completion:(id /* block */)completion;
- (void)_fetchSongsForAlbum:(id)album completion:(id /* block */)completion;
@end

#endif /* NMUAddToPlaylistRequest_h */
