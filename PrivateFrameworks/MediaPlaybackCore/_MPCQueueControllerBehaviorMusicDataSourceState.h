//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.3.0.0
//
#ifndef _MPCQueueControllerBehaviorMusicDataSourceState_h
#define _MPCQueueControllerBehaviorMusicDataSourceState_h
@import Foundation;

#include "MPCPlaybackEngineEventStream.h"
#include "MPShuffleableSectionedIdentifierListDataSource-Protocol.h"
#include "NSSecureCoding-Protocol.h"

@class MPPlaceholderAVItem, MPPlaybackContext, NSString;
@protocol MPCQueueControllerBehaviorMusicDataSource><MPCQueueControllerDataSourceStateRestoring;

@interface _MPCQueueControllerBehaviorMusicDataSourceState : NSObject<MPShuffleableSectionedIdentifierListDataSource, NSSecureCoding> {
  /* instance variables */
  struct { unsigned int x :1 dataSourcePlaceholderItemForLoadingAdditionalItemsInSection; unsigned int x :1 dataSourceSupplementalPlaybackContextWithReason; unsigned int x :1 dataSourceSupplementalPlaybackContextBehavior; unsigned int x :1 dataSourceCanJumpToItem; unsigned int x :1 dataSourceCanSkipItem; unsigned int x :1 dataSourceFirstItemIntersectingIdentifierSet; unsigned int x :1 dataSourceItemDidBeginPlayback; unsigned int x :1 dataSourceShouldRequestAdditionalItemsWhenReachingTailOfSection; unsigned int x :1 dataSourcePrefetchThresholdForSection; unsigned int x :1 dataSourceShouldUsePlaceholderForItemInSection; unsigned int x :1 dataSourceSectionShouldShuffleExcludeItem; unsigned int x :1 dataSourceUpdatedPlaybackContext; unsigned int x :1 dataSourceContainsRadioContent; } _supportedMethods;
}

@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int x0; } stateLock;
@property (readonly, nonatomic) long long supplementalPlaybackContextBehavior;
@property (readonly, nonatomic) MPPlaybackContext *supplementalPlaybackContext;
@property (readonly, nonatomic) NSObject<MPCQueueControllerBehaviorMusicDataSource><MPCQueueControllerDataSourceStateRestoring> *dataSource;
@property (readonly, nonatomic) MPPlaybackContext *playbackContext;
@property (readonly, nonatomic) BOOL shouldAddOriginalPlaybackContextAfterReplacement;
@property (readonly, nonatomic) MPPlaybackContext *originalPlaybackContext;
@property (nonatomic) long long state;
@property (nonatomic) BOOL frozen;
@property (readonly, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) NSString *preferredStartItemIdentifier;
@property (readonly, nonatomic) MPPlaceholderAVItem *tailPlaceholderItem;
@property (readonly, nonatomic) BOOL containsLiveStream;
@property (copy, nonatomic) NSString *playerID;
@property (weak, nonatomic) MPCPlaybackEngineEventStream *eventStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (BOOL)supportsSecureCoding;

/* instance methods */
- (id)initWithPlaybackContext:(id)context;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (id)getTailPlaceholderItemAndState:(long long *)state;
- (BOOL)canJumpToItem:(id)item reason:(id *)reason;
- (BOOL)canSkipItem:(id)item reason:(id *)reason;
- (id)firstItemIntersectingIdentifierSet:(id)set;
- (BOOL)isRadioDataSource;
- (void)itemDidBeginPlayback:(id)playback;
- (id)itemForItem:(id)item inSection:(id)section;
- (BOOL)shouldRequestAdditionalItemsAtTail;
- (long long)prefetchThreshold;
- (BOOL)shouldUsePlaceholderForItem:(id)item inSection:(id)section;
- (void)loadAdditionalItemsIfNeededWithCount:(long long)count completion:(id /* block */)completion;
- (void)updatePlaybackContext;
- (void)reloadSection:(id)section completion:(id /* block */)completion;
- (BOOL)section:(id)section supportsShuffleType:(long long)type;
- (BOOL)section:(id)section shouldShuffleExcludeItem:(id)item;
- (void)_buildPlaceholder;
- (void)_inLock_buildPlaceholder;
- (void)_updateRadioStationPlaybackAuthorizationTokenIfNeeded;
- (id)_rtcSourceServiceName;
- (BOOL)isFrozen;
@end

#endif /* _MPCQueueControllerBehaviorMusicDataSourceState_h */
