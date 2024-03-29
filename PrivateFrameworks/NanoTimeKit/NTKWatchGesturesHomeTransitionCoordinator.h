//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKWatchGesturesHomeTransitionCoordinator_h
#define NTKWatchGesturesHomeTransitionCoordinator_h
@import Foundation;

#include "NTKWatchGesturesHomeTransitionCoordinatorClockDelegate-Protocol.h"

@class WAGUIPrimaryGestureViewInteraction;
@protocol NTKWatchGesturesHomeTransitionCoordinatorHomeDelegate;

@interface NTKWatchGesturesHomeTransitionCoordinator : NSObject {
  /* instance variables */
  WAGUIPrimaryGestureViewInteraction *_primaryGestureInteraction;
  BOOL _hasPendingTransitions;
}

@property (weak, nonatomic) NSObject<NTKWatchGesturesHomeTransitionCoordinatorHomeDelegate> *homeDelegate;
@property (weak, nonatomic) NSObject<NTKWatchGesturesHomeTransitionCoordinatorClockDelegate> *clockDelegate;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (void)installInteractionsToView:(id)view;
- (void)homeScreenDidPrepareForTransition;
@end

#endif /* NTKWatchGesturesHomeTransitionCoordinator_h */
