//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRNowPlayingPlayerClientCallbacks_h
#define MRNowPlayingPlayerClientCallbacks_h
@import Foundation;

#include "MRPlayerPath.h"

@class MSVMultiCallback, NSArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerClientCallbacks : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_serialQueue;
  MSVMultiCallback *_createItemToken;
  MSVMultiCallback *_createItemForIdentifierToken;
  MSVMultiCallback *_metadataToken;
  MSVMultiCallback *_languageToken;
  MSVMultiCallback *_artworkToken;
}

@property (readonly, nonatomic) MRPlayerPath *playerPath;
@property (readonly, nonatomic) BOOL hasPlaybackQueueCallbacks;
@property (readonly, nonatomic) unsigned long long capabilities;
@property (readonly, nonatomic) MSVMultiCallback *createPlaybackQueueForRequestCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *createItemForOffsetCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *createItemForIdentifierCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *createChildItemCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *metadataCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *languageOptionsCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *infoCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *lyricsCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *artworkCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *formattedArtworkCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *availableArtworkFormatsCallbacks;
@property (copy, nonatomic) id /* block */ playbackSessionCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateBeginCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateEndCallback;
@property (copy, nonatomic) id /* block */ playbackSessionMigrateRequestCallback;
@property (copy, nonatomic) id /* block */ beginLyricsEventCallback;
@property (copy, nonatomic) id /* block */ endLyricsEventCallback;
@property (copy, nonatomic) id /* block */ videoThumbnailsCallback;
@property (copy, nonatomic) id /* block */ audioAmplitudeSamplesCallback;
@property (readonly, copy, nonatomic) NSArray *commandHandlerBlocks;

/* instance methods */
- (id)initWithPlayerPath:(id)path queue:(id)queue;
- (unsigned long long)_onQueue_capabilities;
- (void)addCommandHandlerBlock:(id /* block */)block forKey:(id)key;
- (void)removeCommandHandlerBlockForKey:(id)key;
- (void)registerNowPlayingInfoBackedPlaybackQueueDataSourceCallbacks;
- (void)registerNowPlayingInfoCallbacks:(id)callbacks;
- (void)registerNowPlayingInfoAssetCallbacks:(id)callbacks;
- (void)registerNowPlayingInfoArtworkAssetCallback:(id)callback;
- (BOOL)removePlaybackQueueDataSourceCallback:(id)callback;
@end

#endif /* MRNowPlayingPlayerClientCallbacks_h */
