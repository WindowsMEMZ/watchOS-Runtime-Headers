//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKMediaComplicationController_h
#define NTKMediaComplicationController_h
@import Foundation;

#include "MPRequestResponseControllerDelegate-Protocol.h"
#include "NTKMediaComplicationControllerDelegate-Protocol.h"

@class MPRequestResponseController, NSString;

@interface NTKMediaComplicationController : NSObject<MPRequestResponseControllerDelegate> {
  /* instance variables */
  MPRequestResponseController *_requestResponseController;
}

@property (weak, nonatomic) NSObject<NTKMediaComplicationControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)resume;
- (void)pause;
- (id)launchURLWithScheme:(id)scheme;
- (void)controller:(id)controller defersResponseReplacement:(id /* block */)replacement;
- (void)_handleRoutingControllerActiveSystemRouteDidChange:(id)change;
- (void)_updateActiveRoute;
@end

#endif /* NTKMediaComplicationController_h */
