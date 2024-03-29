//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 4023.330.1.0.0
//
#ifndef MRMediaRemoteServiceClient_h
#define MRMediaRemoteServiceClient_h
@import Foundation;

#include "MRAVRoutingClientController.h"
#include "MRMediaRemoteService.h"
#include "MRNotificationClient.h"
#include "MRNotificationServiceClient.h"
#include "MRNowPlayingSessionServiceClient.h"
#include "MRPlayerPath.h"

@class NSArray, NSHashTable, NSMutableSet;
@protocol OS_dispatch_queue;

@interface MRMediaRemoteServiceClient : NSObject {
  /* instance variables */
  NSObject<OS_dispatch_queue> *_accessQueue;
  MRAVRoutingClientController *_routingClientController;
  NSMutableSet *_playerPathInvalidationHandlers;
  NSHashTable *_weakEndpointObservers;
  NSHashTable *_weakNowPlayingControllers;
  NSHashTable *_weakDiscoverySessions;
  NSHashTable *_weakEndpoints;
  NSHashTable *_weakExternalDevices;
  MRNotificationServiceClient *_notificationService;
  MRNowPlayingSessionServiceClient *_nowPlayingSessionService;
}

@property (readonly, nonatomic) MRMediaRemoteService *service;
@property (readonly, nonatomic) MRNotificationClient *notificationClient;
@property (readonly, nonatomic) NSArray *registeredOrigins;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *playbackQueueDispatchQueue;
@property (retain, nonatomic) MRPlayerPath *activePlayerPath;
@property (retain, nonatomic) MRPlayerPath *currentSessionPlayerPath;

/* class methods */
+ (id)sharedServiceClient;

/* instance methods */
- (id)init;
- (void)dealloc;
- (id)debugDescription;
- (id)pickableRoutesWithCategory:(id)category;
- (void)fetchPickableRoutesWithCategory:(id)category completion:(id /* block */)completion;
- (id)addPlayerPathInvalidationHandler:(id)handler;
- (void)removeInvalidationHandler:(id)handler;
- (void)processPlayerPathInvalidationHandlersWithInvalidOrigin:(id)origin;
- (void)processPlayerPathInvalidationHandlersWithBlock:(id /* block */)block;
- (void)addEndpointObserver:(id)observer;
- (void)removeEndpointObserver:(id)observer;
- (void)addNowPlayingController:(id)controller;
- (void)removeNowPlayingController:(id)controller;
- (void)addDiscoverySession:(id)session;
- (void)removeDiscoverySession:(id)session;
- (void)addDistantEndpoint:(id)endpoint;
- (void)removeDistantEndpoint:(id)endpoint;
- (void)addDistantExternalDevice:(id)device;
- (void)removeDistantExternalDevice:(id)device;
@end

#endif /* MRMediaRemoteServiceClient_h */
