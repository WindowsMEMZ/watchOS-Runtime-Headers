//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRV1NowPlayingController_h
#define MRV1NowPlayingController_h
@import Foundation;

#include "MRAVEndpointObserver.h"
#include "MRNowPlayingControllerConfiguration.h"
#include "MRNowPlayingControllerDestination.h"
#include "MRNowPlayingControllerHelper.h"
#include "MRNowPlayingControllerImpl-Protocol.h"
#include "MRNowPlayingPlayerResponse.h"

@class MSVVariableIntervalTimer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface MRV1NowPlayingController : NSObject<MRNowPlayingControllerImpl>

@property (copy, nonatomic) MRNowPlayingControllerDestination *destination;
@property (copy, nonatomic) MRNowPlayingControllerConfiguration *configuration;
@property (copy, nonatomic) MRNowPlayingPlayerResponse *response;
@property (retain, nonatomic) id playerPathInvalidationObserver;
@property (retain, nonatomic) MRAVEndpointObserver *endpointObserver;
@property (retain, nonatomic) NSString *endpointObserverGroupUID;
@property (retain, nonatomic) NSMutableArray *deferredContentItemsToMerge;
@property (nonatomic) BOOL registeredForNotifications;
@property (nonatomic) BOOL registeredForEndpointChanges;
@property (nonatomic) BOOL registeredForPlayerPathInvalidations;
@property (nonatomic) BOOL updateLoadingEnabled;
@property (nonatomic) BOOL requestingQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) MSVVariableIntervalTimer *retryTimer;
@property (retain, nonatomic) MRNowPlayingControllerHelper *helper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConfiguration:(id)configuration;
- (void)dealloc;
- (void)beginLoadingUpdates;
- (void)endLoadingUpdates;
- (void)destinationWithCompletion:(id /* block */)completion;
- (void)_reloadForCompleteInvalidation;
- (void)_reloadForPlayerPathInvalidation;
- (void)_loadNowPlayingStateForUID:(id)uid client:(id)client player:(id)player completion:(id /* block */)completion;
- (void)_loadNowPlayingStateForEndpoint:(id)endpoint client:(id)client player:(id)player completion:(id /* block */)completion;
- (id)_loadNowPlayingStateForPlayerPath:(id)path error:(id *)error;
- (void)_requestPlaybackQueueForPlayerPath:(id)path includeArtwork:(BOOL)artwork queue:(id)queue completion:(id /* block */)completion;
- (void)_requestContentItemArtwork:(id)artwork forPlayerPath:(id)path queue:(id)queue completion:(id /* block */)completion;
- (void)_requestSupportedCommandsForPlayerPath:(id)path queue:(id)queue completion:(id /* block */)completion;
- (void)_requestPlayerLastPlayingDateForPlayerPath:(id)path queue:(id)queue completion:(id /* block */)completion;
- (void)_onQueue_retrieveEndpointForUID:(id)uid completion:(id /* block */)completion;
- (void)_createPlayerPathForEndpoint:(id)endpoint client:(id)client player:(id)player completion:(id /* block */)completion;
- (void)_resolvePlayerPath:(id)path completion:(id /* block */)completion;
- (void)_onQueue_clearState;
- (void)_notifyDelegateOfNewResponse:(id)response;
- (void)_notifyDelegateOfPlaybackStateChange:(unsigned int)change;
- (void)_notifyDelegateOfPlaybackQueueChange:(id)change;
- (void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)items;
- (void)_notifyDelegateOfUpdatedArtwork:(id)artwork;
- (void)_notifyDelegateOfSupportedCommandsChange:(id)change;
- (void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)date;
- (void)_notifyDelegateOfUpdatedClientProperties:(id)properties;
- (void)_notifyDelegateOfPlayerPathChange:(id)change;
- (void)_notifyDelegateOfInvalidation;
- (void)_notifyDelegateOfError:(id)error;
- (void)_registerNotificationHandlersIfNeeded;
- (void)_unregisterNotificationHandlers;
- (void)_handlePlaybackQueueChangedNotification:(id)notification;
- (void)_handlePlaybackQueueContentItemsChangedNotification:(id)notification;
- (void)_handlePlaybackQueueContentItemsArtworkChangedNotification:(id)notification;
- (void)_handlePlaybackStateChangedNotification:(id)notification;
- (void)_handleSupportedCommandsChangedNotification:(id)notification;
- (void)_handleActiveSystemEndpointChangedNotification:(id)notification;
- (void)_registerForPlayerPathInvalidationsIfNeeded;
- (void)_unregisterForPlayerPathInvalidations;
- (void)_registerForEndpointChangesIfNeeded;
- (void)_unregisterForEndpointChanges;
@end

#endif /* MRV1NowPlayingController_h */
