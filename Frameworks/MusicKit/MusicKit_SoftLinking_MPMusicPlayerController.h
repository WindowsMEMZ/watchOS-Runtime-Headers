//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MusicKit_SoftLinking_MPMusicPlayerController_h
#define MusicKit_SoftLinking_MPMusicPlayerController_h
@import Foundation;

#include "MusicKit_SoftLinking_MPMusicPlayerItem.h"
#include "MusicKit_SoftLinking_MPNowPlayingInfoAudioFormat-Protocol.h"

@class MPMusicPlayerController;

@interface MusicKit_SoftLinking_MPMusicPlayerController : NSObject {
  /* instance variables */
  MPMusicPlayerController *_underlyingPlayerController;
}

@property (readonly, nonatomic) MusicKit_SoftLinking_MPMusicPlayerItem *nowPlayingItem;
@property (readonly, nonatomic) long long playbackState;
@property (nonatomic) long long repeatMode;
@property (nonatomic) long long shuffleMode;
@property (readonly, nonatomic) NSObject<MusicKit_SoftLinking_MPNowPlayingInfoAudioFormat> *nowPlayingAudioFormat;
@property (readonly, nonatomic) BOOL isPreparedToPlay;
@property (nonatomic) double currentPlaybackTime;
@property (nonatomic) float currentPlaybackRate;

/* class methods */
+ (id)systemMusicPlayer;
+ (id)applicationMusicPlayer;
+ (id)nowPlayingItemDidChangeNotificationName;
+ (id)playbackQueueDidChangeNotificationName;
+ (id)playbackStateDidChangeNotificationName;
+ (id)notificationUserInfoKeyContentItemIDs;

/* instance methods */
- (id)_initWithUnderlyingPlayerController:(id)controller;
- (void)dealloc;
- (id)itemsForContentItemIDs:(id)ids;
- (void)setNowPlayingItemWithIdentifier:(id)identifier;
- (void)setQueueWithDescriptor:(id)descriptor;
- (void)prependQueueDescriptor:(id)descriptor;
- (void)appendQueueDescriptor:(id)descriptor;
- (void)performQueueTransaction:(id /* block */)transaction;
- (void)prepareToPlayWithCompletionHandler:(id /* block */)handler;
- (void)play;
- (void)pause;
- (void)stop;
- (void)beginSeekingForward;
- (void)beginSeekingBackward;
- (void)endSeeking;
- (void)skipToNextItem;
- (void)skipToBeginning;
- (void)skipToPreviousItem;
- (void)beginGeneratingPlaybackNotifications;
- (void)endGeneratingPlaybackNotifications;
- (void)_handleNowPlayingItemDidChangeNotification:(id)notification;
- (void)_handleQueueDidChangeNotification:(id)notification;
- (void)_handlePlaybackStateDidChangeNotification:(id)notification;
@end

#endif /* MusicKit_SoftLinking_MPMusicPlayerController_h */
