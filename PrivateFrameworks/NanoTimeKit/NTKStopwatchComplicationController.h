//
//   Generated by https://github.com/blacktop/ipsw (Version: 3.1.454, BuildTime: 2024-02-08T22:07:34Z)
//
//    - LC_BUILD_VERSION:  Platform: watchOSSimulator, MinOS: 10.2, SDK: 10.2, Tool: ld (902.8)
//    - LC_SOURCE_VERSION: 2398.45.8.0.0
//
#ifndef NTKStopwatchComplicationController_h
#define NTKStopwatchComplicationController_h
@import Foundation;

#include "NTKComplicationController.h"
#include "CLKUITimeTravel-Protocol.h"

@class NSDate;
@protocol NTKStopwatchComplicationDisplay;

@interface NTKStopwatchComplicationController : NTKComplicationController<CLKUITimeTravel>

@property (readonly, weak, @dynamic, nonatomic) NSObject<NTKStopwatchComplicationDisplay> *legacyDisplay;
@property (retain, nonatomic) NSDate *timeTravelDate;

/* class methods */
+ (BOOL)_acceptsComplicationType:(unsigned long long)type forDevice:(id)device;

/* instance methods */
- (void)_activate;
- (void)_deactivate;
- (void)_configureForLegacyDisplay:(id)display;
- (BOOL)hasTapAction;
- (void)performTapActionForDisplayWrapper:(id)wrapper;
- (id)complicationApplicationIdentifier;
- (void)setDataMode:(long long)mode forDisplayWrapper:(id)wrapper;
- (void)_handleStopwatchChange;
- (void)_updateDisplay;
- (void)setTimeTravelDate:(id)date animated:(BOOL)animated;
@end

#endif /* NTKStopwatchComplicationController_h */
