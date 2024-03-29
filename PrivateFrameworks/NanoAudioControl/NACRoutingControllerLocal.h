//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2021.300.9.2.0
//
#ifndef NACRoutingControllerLocal_h
#define NACRoutingControllerLocal_h
@import Foundation;

#include "MPAVRoutingControllerDelegate-Protocol.h"
#include "NACAudioRoute.h"
#include "NACRoutingController-Protocol.h"

@class MPAVRoutingController, NSArray, NSString;
@protocol NACRoutingControllerDelegate;

@interface NACRoutingControllerLocal : NSObject<MPAVRoutingControllerDelegate, NACRoutingController> {
  /* instance variables */
  MPAVRoutingController *_routingController;
  NSString *_audioCategory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NACAudioRoute *pickedRoute;
@property (readonly, nonatomic) NSArray *availableAudioRoutes;
@property (weak, nonatomic) NSObject<NACRoutingControllerDelegate> *delegate;

/* instance methods */
- (id)initWithAudioCategory:(id)category;
- (void)beginObservingRoutes;
- (void)endObservingRoutes;
- (void)pickAudioRoute:(id)route;
- (void)routingControllerAvailableRoutesDidChange:(id)change;
- (void)routingController:(id)controller didFailToPickRouteWithError:(id)error;
@end

#endif /* NACRoutingControllerLocal_h */
